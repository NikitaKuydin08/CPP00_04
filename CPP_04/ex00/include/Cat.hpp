/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-24 14:09:23 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-24 14:09:23 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {
    public:
        Cat(void);
        Cat(const Cat &copy);
        Cat& operator=(const Cat &copy);
        virtual ~Cat(void);

        virtual void makeSound(void) const;
        virtual std::string getType(void) const;
};

#endif