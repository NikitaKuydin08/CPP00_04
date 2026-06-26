/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-24 14:11:50 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-24 14:11:50 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
    std::cout << "Dog Default constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &copy) : Animal(copy) {
    std::cout << "Dog Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &copy) {
    std::cout << "Dog Copy assignment operator called" << std::endl;
    Animal::operator=(copy);
    return (*this);
}

Dog::~Dog(void) {
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound(void) const {
    std::cout << "Guff Guff Guff" << std::endl;
}

std::string Dog::getType(void) const {
    return (this->type);
}

