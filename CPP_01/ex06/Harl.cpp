/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-17 12:37:11 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-17 12:37:11 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void unimportant(void) {
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

Harl::Harl(void) {
    std::cout << "Default constructor called" << std::endl;
}

Harl::~Harl() {
    std::cout << "Default destructor called" << std::endl;
}

void Harl::complain(std::string level) {
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    
    int i = 0;
    for (; i < 4; i++)
    {
        if (levels[i] == level)
            break ;
    }
    switch (i) {
        case (0):
            (this->*ptr[0])();
        case (1):
            (this->*ptr[1])();
        case (2):
            (this->*ptr[2])();
        case (3):
            (this->*ptr[3])();
            break ;
        default:
            unimportant();
            break ;
    }
}

void Harl::debug(void) {
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra cheese for my 2XL-double-cheese-double-big shaverma" << std::endl;
    std::cout << "I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "[INFO" << std::endl;
    std::cout << "I cannot believe adding extra cheese costs 5 backs." << std::endl;
    std::cout << "You didn't put enough cheese in my shaverma!" << std::endl;
    std::cout << "If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra cheese for free. I'm your usual customer!!\n";
    std::cout << "I've been coming for years, long before you started working here." << std::endl;
}

void Harl::error(void) {
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the director NOW." << std::endl;
}
