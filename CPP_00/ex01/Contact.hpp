/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nikita_Kuydin <nikitakuydin@qmail.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-12 09:10:51 by Nikita_Kuydin     #+#    #+#             */
/*   Updated: 2026-06-12 09:10:51 by Nikita_Kuydin    ###   ########nkuydin   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
/*  Access specifiers control how the members of a class can be accessed. 
    Getters in C++, also known as accessors - public member fucntions that are
    used to fetch private member's values. Syntax to define getter

    dataType getVariableName() const { 
            return variableName;
    }
        With 'const' keyword at the end of the getter prototype the user can avoid
    some of the possible bugs. Sanity check that this value wouldn't be changed
time() : time() function returns the time since the Epoch(jan 1 1970) in seconds.
Header File : "time.h" Prototype / Syntax : time_t time(time_t *tloc);
Return Value : On success, the value of time in seconds since the Epoch is returned, 
on error -1 is returned.

A constructor is a special method that is automatically called when an object/instance
of the class is created. Constructors cal also take parameters(just like regular func.)

*/

class Contact {
    private:
        std::string First_Name;
        std::string Last_Name;
        std::string Nickname;
        std::string Phone_Number;
        std::string Darkest_Secret;
    public:
        Contact(void);
        ~Contact(void);
        Contact(std::string first_name, std::string last_name, std::string nickname, \
            std::string phone_number, std::string darkest_secret);

        std::string getFirst_Name() const;
        std::string getLast_Name() const;
        std::string getNickname() const;
        std::string getPhone_Number() const;
        std::string getDarkest_Secret() const;
};

#endif