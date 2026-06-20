/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-19 13:47:26 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-19 13:47:26 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int _fp_value;
        static const int _fractional_bits;

    public:
        Fixed(void);
        Fixed(const int n);
        Fixed(const float f);
        Fixed(const Fixed &copy);
        Fixed &operator=(const Fixed &copy);
        ~Fixed(void);

        int getRawBits(void) const;
        void setRawBits(int const raw);

        float toFloat(void) const;
        int toInt(void) const;

        Fixed operator+(const Fixed &other) const;
        Fixed operator-(const Fixed &other) const;
        Fixed operator*(const Fixed &other) const;
        Fixed operator/(const Fixed &other) const;

        bool operator<(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator>(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;

        Fixed operator++(void);
        Fixed operator++(int);
        Fixed operator--(void);
        Fixed operator--(int);

        static Fixed& max(Fixed &other, Fixed &another);
        static Fixed& min(Fixed &other, Fixed &another);
        static const Fixed& max(const Fixed &other, const Fixed &another);
        static const Fixed& min(const Fixed &other, const Fixed &another);
};

std::ostream &operator<<(std::ostream &os, Fixed const &fix);

#endif
