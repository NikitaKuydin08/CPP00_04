/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-20 12:20:07 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-20 12:20:07 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float area(Point const p1, Point const p2, Point const p3)
{
    float area;

    area = ((p1.getX() * (p2.getY() - p3.getY())
            + p2.getX() * (p3.getY() - p1.getY())
            + p3.getX() * (p1.getY() - p2.getY())) / 2).toFloat();
    // std::cout << "Area: " << area << std::endl;
    if (area >= 0)
        return (area);
    else
        return (area * -1);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    float ar1;
    float ar2;
    float ar3;
    float sum;
    float initial_sum;

    initial_sum = area(a, b, c);
    ar1 = area(a, b, point);
    ar2 = area(point, b, c);
    ar3 = area(c, point, a);
    sum = ar1 + ar2 + ar3;
    // std::cout << sum << "; Initial: "<< initial_sum << std::endl;
    if ((initial_sum == sum) && !(ar1 == 0 || ar2 == 0 || ar3 == 0))
        return (true);
    return (false);
}
