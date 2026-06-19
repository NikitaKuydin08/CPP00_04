/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-17 15:27:00 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-17 15:27:00 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
        I'm so lost now. Alright we have fixed point number, integer, and float-point number.
The basic concept of fixed point values is to scale all numbers up by a certain amount
to remove any decimal parts of the number. Then the user might work with whole numbers only.
8.8 fixed point numbers - 16 bit value where the upper 8 bits are the whole number and the
lower 8 bits the fractional part.With an imaginary binary point in the middle.

42.42f * 256 = 10859.52.  10859 -> to float 10859 / (256)
roundf(10859.52) = 10860

fixed point helds this value 10860 on the example of 42.42f

to print the value we use a float representation of it. 
so, 10860 / 256 = 
for the conversion from fixed point variable 10860 to int, we
basically divide the number by 256. And store only the whole numebr, while
decimal value gets lost. 
*/

int main( void ) {
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
    a = Fixed( 1234.4321f );
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    return 0;
}

/*
    Default constructor called
    Int constructor called
    Float constructor called
    Copy constructor called
    Copy assignment operator called
    Float constructor called
    Copy assignment operator called
    Destructor called
    a is 1234.43
    b is 10
    c is 42.4219
    d is 10
    a is 1234 as integer
    b is 10 as integer
    c is 42 as integer
    d is 10 as integer
    Destructor called
    Destructor called
    Destructor called
    Destructor called
*/
