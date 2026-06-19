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

Fixed::Fixed(void) {
    std::cout << "Default constructor called" << std::endl;
    Fixed::_fp_value = 0;
}

// converts it to the corresponding fixed-point value
Fixed::Fixed(const int n) {
    std::cout << "Int constructor called" << std::endl;
    this->_fp_value = n << this->_fractional_bits;
    // this->_fp_value = n;
}

// converts it to the corresponding fixed-point value
Fixed::Fixed(const float f) {
    std::cout << "Float constructor called" << std::endl;
    this->_fp_value = roundf(f * (1 << this->_fractional_bits));
}

Fixed::Fixed(const Fixed &copy) : _fp_value(copy._fp_value) {
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &copy) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fp_value = copy._fp_value;
    return (*this);
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
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
    float output = (float)this->_fp_value / (1 << this->_fractional_bits);
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

//          Fixed ex02

