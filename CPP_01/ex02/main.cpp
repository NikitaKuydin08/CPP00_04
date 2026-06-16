/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-16 09:35:48 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-16 09:35:48 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
            Address Manipulation in c++
    References and Pointers are important in C++, because they give the user the
    ability to manipulate the data in the computer's memory - which can reduce
    the code and imrove the performance.

A *reference* variable is an alias for an existing variable. It is created using
& operator. 
std::string a = "Pizza";
std::string &b = a; Now, a and b refer to the same value, smae memory location.
Changing the value of one changes the value of another. 

The & operator used to create a reference variable. But it can also be used to
get the memory address of a variable; which is the location of where tha variable
is stored. 

A *pointer* is a variable that stores the memory address as its value. A pointer
variable points to a data type of the same type, and is created with the * operator.
The address of the variable you're working with is assigned to the pointer

The *dereference* operator (* opearator) can be used by the pointer to get the value
of the variable. 

The * operator can be confusing here, as it does two different things:
    - When used in the declaration (string* ptr), it creates a pointer variable.
    - When used outside of declaration, it act as a dereference operator. 
*/

#include <iostream>
#include <string>

int main(void) {
    std::string String = "HI THIS IS BRAIN";
    std::string &StringREF = String;
    std::string* StringPTR = &String;

    std::cout << "The memory address of the string variable: " << &String << std::endl;
    std::cout << "The memory address held by stringPTR: " << StringPTR << std::endl;
    std::cout << "The memory address held by stringREF: " << &StringREF << std::endl;
    std::cout << std::endl;
    std::cout << "The value of the string variable: " << String << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *StringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: " << StringREF << std::endl;
}
