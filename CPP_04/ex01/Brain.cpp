/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-25 11:15:45 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-25 11:15:45 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
    std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain &copy) {
    std::cout << "Brain Copy constructor called" << std::endl;
    *this = copy;
}

Brain& Brain::operator=(const Brain &copy) {
    std::cout << "Brain Copy assignment operator called" << std::endl;
    this->type = copy.type;
    return (*this);
}

Brain::~Brain(void) {
    std::cout << "Brain Destructor called" << std::endl;
}