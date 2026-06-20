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

ClapTrap::ClapTrap(void) : _name("Default") {
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name) {
    std::cout << "ClapTrap " << name << " object initialised" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) : _name(copy._name) {
    std::cout << "Copy constructor called" << std::endl;
}

// ClapTrap& ClapTrap::operator=(con)