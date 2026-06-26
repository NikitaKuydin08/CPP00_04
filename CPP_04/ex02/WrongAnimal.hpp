/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-25 10:19:51 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-25 10:19:51 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {
    protected:
        std::string type;
    
    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal& operator=(const WrongAnimal &copy);
        virtual ~WrongAnimal(void);

        void makeSound(void) const;
        virtual std::string getType(void) const;
};

#endif