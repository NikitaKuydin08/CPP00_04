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

Cat::Cat(void) : Animal() {
    std::cout << "Cat Default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &copy) : Animal(copy) {
    std::cout << "Cat Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &copy) {
    std::cout << "Cat Copy assignment operator called" << std::endl;
    Animal::operator=(copy);
    return (*this);
}

Cat::~Cat(void) {
    std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound(void) const {
    std::cout << "Meow Meow Meow" << std::endl;
}

std::string Cat::getType(void) const {
    return (this->type);
}
