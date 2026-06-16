/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-16 07:13:06 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-16 07:13:06 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
New and delete. New it's like a malloc, but it calls a constructor of the object. 

*/

int main(void) {
    Zombie* name = newZombie("Boob");
    name->announce();

    randomChump("Feel");

    delete name;

    return (0);
}
