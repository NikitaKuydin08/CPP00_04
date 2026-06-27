/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-27 10:21:00 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-27 10:21:00 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <ctime>

static const std::string className = "Brain";

Brain::Brain(void) {
    std::cout << className << " Default constructor called" << std::endl;
    const std::string ideas[] = {"What do I eat today?", "What about chicken?",
    "Maybe broccoli on lunch", "What do you think of Alex?", "Maybe propose to him?",
    "I wish I couls marry him.", "Is it better to speak or die?", "I'm down fro sushi.",
    "I came up with nuclear computer.", "Party tmr?"};
    for (int i = 0; i < 100; i++)
        this->ideas[i] = ideas[rand() % 10];
}

Brain::Brain(const Brain& copy) {
    std::cout << className << " Copy constructor called" << std::endl;
    for (unsigned int i = 0; i < sizeof(copy.ideas)/(sizeof(copy.ideas[0])); i++) {
        this->ideas[i] = copy.ideas[i];
    }
}

Brain& Brain::operator=(const Brain& copy) {
    std::cout << className << " Copy assignment operator called" << std::endl;
    if (this == &copy) return (*this);
    for (unsigned int i = 0; i < sizeof(copy.ideas)/(sizeof(copy.ideas[0])); i++) {
        this->ideas[i] = copy.ideas[i];
    }
    return (*this);
}

Brain::~Brain(void) {
    std::cout << className << " Destructor called" << std::endl;
}
