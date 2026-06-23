/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-22 11:52:32 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-22 11:52:32 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
    this->_hit = 100;
    this->_energy = 50;
    this->_damage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->_hit = 100;
    this->_energy = 50;
    this->_damage = 20;
    std::cout << "ScavTrap " << name << " object initialised" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copy) {
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    ClapTrap::operator=(copy);
    return (*this);
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap default destructor called" << std::endl;
}

void ScavTrap::guardGate(void) {
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    if (this->_hit <= 0)
        std::cout << this->_name << " is dead." << std::endl;
    std::cout << this->_name << " took a stick in his arms. ";
    if (this->_energy > 0)
    {
        std::cout << "ScavTrap " << this->_name << " punches "
        << target << ", causing " << this->_damage << " points of damage!" << std::endl;
        this->_energy--;
    }
    else
        std::cout << this->_name << " is too weak, to strike." << std::endl;
}
