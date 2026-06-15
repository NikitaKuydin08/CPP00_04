/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nikita_Kuydin <nikitakuydin@qmail.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-12 07:55:04 by Nikita_Kuydin     #+#    #+#             */
/*   Updated: 2026-06-12 07:55:04 by Nikita_Kuydin    ###   ########nkuydin   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/*
    Methods to compare strings in C++:
    - string strcmp() function
    - built-in compare() function
    - C++ relational operators (==, !=)

    This exercise also introduces us into Encapsulation, one of the 4 main concepts of OOP.
    Encapsulation - making sure that 'sensitive' data is hidden from users. To achieve
    this security measure, class variables/attributes must be declared as private. If the user wants
    to access private members of a class inside the same class. Public get() and set() methods must
    be provided. Why Encapsulation? - Better control and security of the user's data. 

    Resource Acquisition Is Initialization (RAII) is a C++ Programming Technique which binds the life
    cycle of a resource that must be acquired before use to the lifetime of an object. It ensures that resources
    are automatically acquired/obtained when an ogject is created and automatically released when 
    the object goes out of scope, eliminating manual cleanup and preventing leaks.
*/

int main()
{
    PhoneBook   Phonebook;
    std::string input;

    while (1)
    {
        std::cout << "Enter a command: ";
        if (!std::getline(std::cin, input))
            break ;
        if (input == "EXIT")
            break ;
        else if (input == "ADD")
            Phonebook.add_contact();
        else if (input == "SEARCH")
            Phonebook.search_contact();
        else if (!input.empty())
            std::cout << "There is no such command to execute. " << std::endl;
    }
    return (0);
}