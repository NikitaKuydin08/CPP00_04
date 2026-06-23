/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-23 08:52:14 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-23 08:52:14 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
    private:
        std::string _name;

    public:
        DiamondTrap(void);
        DiamondTrap(std::string name);
        // DiamondTrap(const DiamondTrap &copy);
        // DiamondTrap& operator=(const DiamondTrap &copy);
        // ~DiamondTrap(void);

        // void whoAmI(void);
        using ScavTrap::attack;
        std::string status(void) const;
};

std::ostream &operator<<(std::ostream &os, DiamondTrap const &diamond);

#endif