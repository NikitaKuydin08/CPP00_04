/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-27 16:07:05 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-27 16:07:05 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# nclude <string>

class AMateria {
    protected:
        const std::string type;

    public:
        AMateria(void);
        AMateria(const std::string &copy);
        AMateria(const AMateria &copy);
        AMateria& operator=(const AMateria &copy);
        ~AMateria(void);

        const std::string& getType(void) const;

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif