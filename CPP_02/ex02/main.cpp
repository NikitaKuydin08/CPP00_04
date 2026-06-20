/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-19 13:48:18 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-19 13:48:18 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    // Fixed const c(42.42f);
    // Fixed d(c * a);
    // Fixed e(a);
    std::cout << a << std::endl; // 0
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    // std::cout << a + b << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    // std::cout << --a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    // std::cout << Fixed::min(a, b) << std::endl;
    // std::cout << (a < c) << std::endl;
    // std::cout << (a == c) << std::endl;
    // std::cout << (d < c) << std::endl;
    // std::cout << (e / 0) << std::endl;
    return 0;
}


/*
    0
    0.00390625
    0.00390625
    0.00390625
    0.0078125
    10.1016
    10.1016
*/