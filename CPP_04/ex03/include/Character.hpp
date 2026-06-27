/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-27 16:26:06 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-27 16:26:06 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

class Character : public ICharacter {
    public:
        Character(void);
        Character(const std::string name);
        Character(const ICharacter &copy);
        Character& operator=(const ICharacter &copy);

}

#endif