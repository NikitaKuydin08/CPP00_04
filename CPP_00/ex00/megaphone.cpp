/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nikita_Kuydin <nikitakuydin@qmail.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-09 11:30:14 by Nikita_Kuydin     #+#    #+#             */
/*   Updated: 2026-06-09 11:30:14 by Nikita_Kuydin    ###   #######.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; i < argc; i++)
    {
        std::string s(argv[i]);
        for (unsigned long j = 0; j < s.length(); j++)
        {
            std::cout << (char)std::toupper(argv[i][j]);
        }
    }
    std::cout << std::endl;
    return (0);
}
