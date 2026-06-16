/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-16 11:29:21 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-16 11:29:21 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA(void) {
    std::cout << this->name << " has been destroyed" << std::endl;
}

HumanA::HumanA(std::string temp, Weapon& weapon) : name(temp), w_type(weapon) {
    std::cout << name << " instance has been initialised" << std::endl;
}

void HumanA::attack() {
    std::cout << this->name << " attacks with their " << w_type.getType() << std::endl;
}
