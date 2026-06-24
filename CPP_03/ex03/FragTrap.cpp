/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-23 08:29:46 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-23 08:29:46 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
    this->_hit = 100;
    this->_energy = 100;
    this->_damage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    this->_hit = 100;
    this->_energy = 100;
    this->_damage = 30;
    std::cout << "FragTrap " << name << " object initialised" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) {
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &copy) {
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    ClapTrap::operator=(copy);
    return (*this);
}

FragTrap::~FragTrap(void) {
    std::cout << "FragTrap default destructor called" << std::endl;
}

void FragTrap::HighFivesGuys(void) {
    std::cout << "Give me five!" << std::endl;
}
