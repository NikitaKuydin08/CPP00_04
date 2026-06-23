/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-22 08:54:21 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-22 08:54:21 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    ClapTrap demon;
    ClapTrap angel("Angel");
    // ScavTrap scav;
    // ScavTrap assign;
    FragTrap frag;
    FragTrap trap("Frog");
    FragTrap super;
    
    std::cout << std::endl;
    std::cout << "ClapTrap performing" << std::endl;
    demon.attack("Air");
    demon.takeDamage(5);
    demon.takeDamage(4);
    demon.beRepaired(2);
    angel.attack("Ground");
    std::cout << std::endl;

    // std::cout << "ScavTrap performing" << std::endl;
    // scav.attack("Water");
    // scav.takeDamage(30);
    // scav.beRepaired(10);
    // ScavTrap trap("Nelon");
    // ScavTrap copy = scav;
    // assign = scav;
    // trap.attack("Fire");
    // trap.takeDamage(50);
    // trap.guardGate();
    // scav.attack("Watermellown");
    // scav.takeDamage(50);
    // scav.guardGate();
    // assign.attack("Snowman");
    // assign.takeDamage(50);

    std::cout << std::endl << "FragTrap performing" << std::endl;
    trap.attack("butterfly");
    frag.takeDamage(50);
    frag.takeDamage(50);
    frag.beRepaired(40);
    super = trap;
    super.HighFivesGuys();
    super.attack(frag.getName());
    frag.takeDamage(30);
    trap.HighFivesGuys();

    std::cout << std::endl;
    return (0);
}