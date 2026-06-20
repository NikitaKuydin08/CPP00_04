/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-20 12:04:04 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-20 12:04:04 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {
    // std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float x, const float y) : _x(x), _y(y) {
    // std::cout << "Parameterized constructor called" << std::endl;
}

Point::Point(const Point &copy) : _x(copy._x), _y(copy._y) {
    // std::cout << "Copy constructor called" << std::endl;
}

Point& Point::operator=(const Point &copy) {
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this == &copy)
        return (*this);
    return (*this);
}

Point::~Point(void) {
    // std::cout << "Destructor called" << std::endl;
}

const Fixed& Point::getX(void) const {
    return (this->_x);
}

const Fixed& Point::getY(void) const {
    return (this->_y);
}