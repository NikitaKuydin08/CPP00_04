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

DiamondTrap::DiamondTrap(void) : FragTrap(), ScavTrap(), _name("Default"){
    FragTrap::_hit = FragTrap::_hit;
    _energy = ScavTrap::_energy;
    _damage = FragTrap::_damage;
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(),
    ScavTrap(), _name(name)
{
        _hit = FragTrap::_hit;
        _energy = ScavTrap::_energy;
        _damage = FragTrap::_damage;
        std::cout << "DiamondTrap " << name << " object initialised" << std::endl;
}

std::string DiamondTrap::status(void) const {
    std::ostringstream oss;
    oss << "Name: " << _name << ", HP: " << _hit << ", Energy points: "
    << _energy << ", Attake damage: " << _damage << std::endl;
    return (oss.str());
}
