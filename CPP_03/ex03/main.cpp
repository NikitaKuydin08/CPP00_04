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
#include "DiamondTrap.hpp"

int main(void) {
    DiamondTrap diamond("Diamond");
    DiamondTrap drake("Drake");
    DiamondTrap trap(diamond);

    std::cout << "\nFrag and Scav constructors check\n";
    FragTrap frag("Frag");

    std::cout << "\nCHECK COPY\n\n";
    std::cout << "Diamond BEFORE assigment operator" << std::endl;
    diamond.whoAmI();
    std::cout << "Copy of the Diamond object Before assignment" << std::endl;
    trap.whoAmI();
    std::cout << "Status of the copy of Diamond object\n";
    std::cout << trap;

    std::cout << "Drake takes damage in total of 20 points\n";
    drake.takeDamage(20);
    std::cout << "Drake's updated status - \n" << drake;
    diamond = drake;
    std::cout << "Diamond's status after assignment from drake - \n" << diamond;

    std::cout << "Diamond AFTER assigment operator" << std::endl;
    diamond.whoAmI();
    std::cout << "Object Drake to Object Diamond\n";
    trap = drake;
    std::cout << "Copy of the Diamond object After assigmnet" << std::endl;
    trap.whoAmI();

    std::cout << "\nCHECK COPY FINISHED\n\n";

    diamond.attack("Fly");
    diamond.beRepaired(20);

    std::cout << "Drake's object" << std::endl;
    drake.whoAmI();
    return (0);
}