/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-17 11:52:20 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-17 11:52:20 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/*
    In C++, functions can be treated as objects with the help of function pointers. 
*/

int main(int argc, char **argv) {
    Harl harl;

    if (argc != 2 || !argv[1] || argv[1] == '\0')
        return (std::cout << "Incorrect use of filter program" << std::endl, 1);
    harl.complain(argv[1]);
    return (0);
}
