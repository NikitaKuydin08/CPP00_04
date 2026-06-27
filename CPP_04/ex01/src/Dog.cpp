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
#include <iostream>

static const std::string className = "Dog";

Dog::Dog(void) : Animal(), brain(new Brain) {
    std::cout << className << " Default constructor called" << std::endl;
    this->setType(className);
}

Dog::Dog(const Dog &copy) : Animal(copy), brain(new Brain) {
    std::cout << className << " Copy constructor called" << std::endl;
    *(this->brain) = *copy.brain;
}

Dog& Dog::operator=(const Dog &copy) {
    std::cout << className << " Copy assignment operator called" << std::endl;
    if (this == &copy) return (*this);
    delete this->getBrain();
    this->brain = new Brain();
    *(this->brain) = *copy.brain;
    return (*this);
}

Dog::~Dog(void) {
    delete this->getBrain();
    std::cout << className << " Destructor called" << std::endl;
}

void Dog::makeSound(void) const {
    std::cout << this->getType() << " makes - Guff Guff Guff" << std::endl;
}

Brain* Dog::getBrain(void) const {return (this->brain); }
