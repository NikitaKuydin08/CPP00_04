/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-24 13:56:36 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-24 13:56:36 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const Animal &copy) {
    std::cout << "Animal Copy constructor called" << std::endl;
    *this = copy;
}

Animal& Animal::operator=(const Animal &copy) {
    std::cout << "Animal Copy assignment operator called" << std::endl;
    this->type = copy.type;
    return (*this);
}

Animal::~Animal(void) {
    std::cout << "Animal Destructor called" << std::endl;
}

void Animal::makeSound(void) const {
    std::cout << "Moo, bee. Hi. I'm an Animal, I make the whole variety of sounds"
    << std::endl;
}

std::string Animal::getType(void) const {
    return (this->type);
}
