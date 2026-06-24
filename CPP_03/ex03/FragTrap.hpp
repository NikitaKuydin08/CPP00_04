/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FrahTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-23 08:13:35 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-23 08:13:35 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(const FragTrap &other);
        FragTrap& operator=(const FragTrap &other);
        ~FragTrap(void);

        void HighFivesGuys(void);
};

#endif