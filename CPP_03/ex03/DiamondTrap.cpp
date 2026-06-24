/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-23 10:31:21 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-23 10:31:21 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <sstream>

std::ostream &operator<<(std::ostream &os, DiamondTrap const &diamond) {
    os << diamond.status();
    return (os);
}

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap(), _name("Default") {
    ScavTrap temp_scav;

    this->_energy = temp_scav.getScavEng();
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(),
    FragTrap(), _name(name)
{
    ScavTrap temp_scav;

    _energy = temp_scav.getScavEng();
    std::cout << "DiamondTrap " << name << " object initialised" << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy) {
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    this->_name = copy._name;
    // *this = copy;
}

DiamondTrap::~DiamondTrap(void) {
    std::cout << "DiamondTrap default destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &copy) {
    std::cout << "DiamondTrap copy assignment operator called" << std::endl;
    ClapTrap::operator=(copy);
    this->_name = copy._name;
    return (*this);
}

std::string DiamondTrap::status(void) const {
    std::ostringstream oss;
    oss << "Name: " << this->_name << ", HP: " << _hit << ", Energy points: "
    << _energy << ", Attake damage: " << _damage << std::endl;
    return (oss.str());
}

void DiamondTrap::whoAmI(void) {
    std::cout << "DiamondTrap instance name - " << this->_name
    << ", ClapTrap instance name - " << ClapTrap::_name << std::endl;
}

std::string DiamondTrap::getName(void) {
    return (this->_name);
}
