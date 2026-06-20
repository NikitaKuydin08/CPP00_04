/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-19 13:49:37 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-19 13:49:37 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractional_bits = 8;

Fixed::Fixed(void) {
    // std::cout << "Default constructor called" << std::endl;
    Fixed::_fp_value = 0;
}

// converts it to the corresponding fixed-point value
Fixed::Fixed(const int n) {
    // std::cout << "Int constructor called" << std::endl;
    this->_fp_value = n << this->_fractional_bits;
    // this->_fp_value = n;
}

// converts it to the corresponding fixed-point value
Fixed::Fixed(const float f) {
    // std::cout << "Float constructor called" << std::endl;
    this->_fp_value = std::roundf(f * (1 << this->_fractional_bits));
}

Fixed::Fixed(const Fixed &copy) : _fp_value(copy._fp_value) {
    // std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &copy) {
    // std::cout << "Copy assignment operator called" << std::endl;
    this->_fp_value = copy._fp_value;
    return (*this);
}

Fixed::~Fixed(void) {
    // std::cout << "Destructor called" << std::endl;
}

// returns the raw value of the fixed-point value
int Fixed::getRawBits(void) const {
    return (this->_fp_value);
}

// sets the raw value of the fixed-point number
void Fixed::setRawBits(int const raw) {
    this->_fp_value = raw;
}

// converts the fixed-point value to a floating-point value
float Fixed::toFloat(void) const {
    float output = static_cast<float>(this->_fp_value) / (1 << this->_fractional_bits);
    return (output);
}

// converts the fixed-point value to an integer value
int Fixed::toInt(void) const {
    int output = (this->_fp_value >> this->_fractional_bits);
    return (output);
}

// floating-point representation of the fixed-point number 
std::ostream &operator<<(std::ostream &os, Fixed const &fix) {
    os << fix.toFloat();
    return (os);
}

//         4 arithmetic operators

Fixed Fixed::operator+(const Fixed &other) const {
    // std::cout << "Addition operator overloading called" << std::endl;
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const {
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const {
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const {
    if (other._fp_value == 0)
        return (std::cout << "Denominator can't be 0" << std::endl, -1);
    return Fixed(this->toFloat() / other.toFloat());
}

//         6 comparison operators

bool Fixed::operator<(const Fixed &other) const {
    return (this->_fp_value < other._fp_value);
}

bool Fixed::operator<=(const Fixed &other) const {
    return (this->_fp_value <= other._fp_value);
}

bool Fixed::operator>(const Fixed &other) const {
    return (this->_fp_value > other._fp_value);
}

bool Fixed::operator>=(const Fixed &other) const {
    return (this->_fp_value >= other._fp_value);
}

bool Fixed::operator==(const Fixed &other) const {
    return (this->_fp_value == other._fp_value);
}

bool Fixed::operator!=(const Fixed &other) const {
    return (this->_fp_value != other._fp_value);
}

//  4 postfix and prefix operators(increment/decrement)

// Prefix -
Fixed Fixed::operator++(void) {
    ++_fp_value;
    return (*this);
}

Fixed Fixed::operator--(void) {
    --_fp_value;
    return (*this);
}
// Postfix -
Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    _fp_value++;
    return (temp);
}

Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    _fp_value--;
    return (temp);
}

// min/max constant and not

Fixed& Fixed::max(Fixed &other, Fixed &another) {
    if (other.getRawBits() >= another.getRawBits())
        return (other);
    else
        return (another);
}

const Fixed& Fixed::max(const Fixed &other, const Fixed &another) {
    if (other.getRawBits() >= another.getRawBits())
        return (other);
    else
        return (another);
}

Fixed& Fixed::min(Fixed &other, Fixed &another) {
    if (other.getRawBits() <= another.getRawBits())
        return (other);
    else
        return (another);
}

const Fixed& Fixed::min(const Fixed &other, const Fixed &another) {
    if (other.getRawBits() <= another.getRawBits())
        return (other);
    else
        return (another);
}