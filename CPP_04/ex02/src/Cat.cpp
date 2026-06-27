/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-24 14:08:58 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-24 14:08:58 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

static const std::string className = "Cat";

Cat::Cat(void) : Animal(), brain(new Brain) {
    std::cout << className << " Default constructor called" << std::endl;
    this->setType(className);
}

Cat::Cat(const Cat &copy) : Animal(copy), brain(new Brain) {
    std::cout << className << " Copy constructor called" << std::endl;
    *(this->brain) = *copy.brain;
}

Cat& Cat::operator=(const Cat &copy) {
    std::cout << className << " Copy assignment operator called" << std::endl;
    if (this == &copy) return (*this);
    delete this->getBrain();
    this->brain = new Brain();
    *(this->brain) = *copy.brain;
    return (*this);
}

Cat::~Cat(void) {
    delete this->getBrain();
    std::cout << className << " Destructor called" << std::endl;
}

void Cat::makeSound(void) const {
    std::cout << this->getType() << " makes - Meow Meow Meow" << std::endl;
}

Brain* Cat::getBrain(void) const {return (this->brain); }
