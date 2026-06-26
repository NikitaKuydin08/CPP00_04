/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-24 13:52:43 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-24 13:52:43 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
    protected:
        std::string type;
    
    public:
        Animal(void);
        Animal(const Animal &copy);
        Animal& operator=(const Animal &copy);
        virtual ~Animal(void);

        virtual void makeSound(void) const;
        virtual std::string getType(void) const;
};

#endif