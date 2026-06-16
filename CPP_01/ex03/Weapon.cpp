/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-16 11:06:21 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-16 11:06:21 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::~Weapon() {
    std::cout << type << " instance had been destroyed" << std::endl;
}

const std::string& Weapon::getType(void) const {
    return (this->type);
}

void Weapon::setType(std::string temp) {
    this->type = temp;
}

Weapon::Weapon(std::string type) {
    Weapon::type = type;
}
