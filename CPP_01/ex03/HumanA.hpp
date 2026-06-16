/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-16 11:22:24 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-16 11:22:24 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA {
    private:
        std::string name;
        Weapon& w_type;
    public:
        ~HumanA(void);

        HumanA(std::string temp, Weapon& weapon);
        void attack(void);
};

#endif 