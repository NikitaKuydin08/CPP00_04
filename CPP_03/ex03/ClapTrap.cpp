/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-20 15:41:57 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-20 15:41:57 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Demon"), _hit(10), _energy(10), _damage(0) {
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hit(10), _energy(10), _damage(0) {
    std::cout << "ClapTrap " << name << " object initialised" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) : _name(copy._name), _hit(copy._hit), _energy(copy._energy), _damage(copy._damage) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy) {
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    this->_name = copy._name;
    this->_hit = copy._hit;
    this->_energy = copy._energy;
    this->_damage = copy._damage;
    return (*this);
}

ClapTrap::~ClapTrap(void) {
    std::cout << "ClapTrap default destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (this->_hit <= 0)
        std::cout << getName() << " is dead." << std::endl;
    std::cout << getName() << " took a stick in his arms. ";
    if (this->_energy > 0)
    {
        this->_energy--;
        std::cout << "ClapTrap " << getName() << " punches "
        << target << ", causing " << this->_damage << " points of damage!" << std::endl;
        std::cout << "Remaining energy: " << this->_energy << std::endl;
    }
    else
        std::cout << getName() << " is too weak, to strike." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->_hit > amount)
    {
        this->_hit -= amount;
        std::cout << getName() << " took damage in total of " << amount << " points!" << std::endl;
        std::cout << "Remaining HP: " << this->_hit << std::endl;
    }
    else
    {
        this->_hit = 0;
        std::cout << getName() << " took damage in total of " << amount << " points!" << std::endl;
        std::cout << getName() << " died from the attack." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_energy > 0)
    {
        this->_hit += amount;
        this->_energy--;
        std::cout << getName() << " got repaired by " << amount
        << ", his updated HP: " << this->_hit << " & EG: " << this->_energy << std::endl; 
    }
    else
        std::cout << getName() << " is too weak, to repair himself." << std::endl;
}

std::string ClapTrap::getName(void) {
    return (this->_name);
}
