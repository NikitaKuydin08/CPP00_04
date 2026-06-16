/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-16 12:16:11 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-16 12:16:11 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
    private:
        std::string name;
        Weapon* weapon;
        // Weapon& weapon;
    public:
        HumanB(std::string human);
        ~HumanB(void);

        void attack(void);
        void setWeapon(Weapon &w_type);
};

#endif