/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-25 10:21:23 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-25 10:21:23 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
    std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
    *this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copy) {
    std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
    this->type = copy.type;
    return (*this);
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const {
    std::cout << "Moo, bee. Hi. I'm an WrongAnimal, I make the whole variety of sounds"
    << std::endl;
}

std::string WrongAnimal::getType(void) const {
    return (this->type);
}
