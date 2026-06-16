/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-16 12:20:09 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-16 12:20:09 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string human) : name(human) {
    std::cout << name << " instance has been initialised" << std::endl;
}

HumanB::~HumanB(void) {
    std::cout << this->name << " has been destroyed" << std::endl;
}

void HumanB::attack(void) {
    if (weapon)
        std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << this->name << " doesn't have weapon" << std::endl;
}

void HumanB::setWeapon(Weapon &w_type) {
    weapon = &w_type;
}
