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
        Brain* BrainDog;
    public:
        Dog(void);
        Dog(const Dog &copy);
        Dog& operator=(const Dog &copy);
        virtual ~Dog(void);

        virtual void makeSound(void) const;
        virtual std::string getType(void) const;
};

#endif