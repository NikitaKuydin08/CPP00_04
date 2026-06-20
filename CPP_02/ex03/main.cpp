/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-20 11:36:22 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-20 11:36:22 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Implement a function that indicates whether a point is inside a triangle or not.
// BSP stands for Binary Space Partitioning.

int main(void) {
    Point a = Point(1, 2);
    Point b = Point(2.5, 0.5);
    Point c = Point(0, 1);
    // Point point = Point(1, 1.5); // inside, return 1;
    // Point point = Point(0.5, 0.5); // outside, return 0;
    Point point = Point(1.5, 1.5);
    if (bsp(a, b, c, point))
        return (std::cout << "True, point is inside the triangle" << std::endl, 1);
    else
        return (std::cout << "False, point is outside the triangle/on edge" << std::endl, 0);
}
