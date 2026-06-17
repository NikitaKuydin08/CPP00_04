/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-17 17:19:01 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-17 17:19:01 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
        Introduction to fixed point number representation.

*/

Fixed::Fixed(void) {
    std::cout << "Default constructor called" << std::endl;
    Fixed::numb = 0;
}

Fixed::Fixed(const Fixed &copy) : numb(copy.numb) {
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &copy) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->numb = copy.numb;
    return (*this);
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

// returns the raw value of the fixed-point value
int Fixed::getRawBits(void) const {

}

// sets the raw value of the fixed-point number
void Fixed::setRawBits(int const raw) {

}
