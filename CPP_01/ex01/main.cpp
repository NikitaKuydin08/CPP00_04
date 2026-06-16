/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-16 08:42:59 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-16 08:42:59 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    int N = 3;

    Zombie* horde = zombieHorde(N, "BOOB");
    horde[1].setName("Second");
    for (int i = 0; i < N; i++)
        horde[i].announce();

    delete [] horde;
}
