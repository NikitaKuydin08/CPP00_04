/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-25 10:24:44 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-25 10:24:44 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal() {
    std::cout << "WrongCat Default constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy) {
    std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &copy) {
    std::cout << "WrongCat Copy assignment operator called" << std::endl;
    WrongAnimal::operator=(copy);
    return (*this);
}

WrongCat::~WrongCat(void) {
    std::cout << "WrongCat Destructor called" << std::endl;
}

void WrongCat::makeSound(void) const {
    std::cout << "Meow Meow Meow" << std::endl;
}

std::string WrongCat::getType(void) const {
    return (this->type);
}