/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-24 13:54:07 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-24 13:54:07 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp" 
# include "Brain.hpp"

class Dog : public Animal {
    private:
        Brain* brain;
    public:
        Dog(void);
        Dog(const Dog &copy);
        Dog& operator=(const Dog &copy);
        virtual ~Dog(void);

        virtual void makeSound(void) const;
        Brain* getBrain(void) const;
};

#endif