/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-20 11:35:29 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-20 11:35:29 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
# include <iostream>
# include <cmath>

class Point {
    private:
        const Fixed _x;
        const Fixed _y;

    
    public:
        Point(void);
        Point(const float x, const float y);
        Point(const Point &copy);
        Point &operator=(const Point &copy);
        ~Point(void);

        const Fixed &getX(void) const;
        const Fixed &getY(void) const;
};
    
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif