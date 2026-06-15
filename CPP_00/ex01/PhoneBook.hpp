/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nikita_Kuydin <nikitakuydin@qmail.com>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-12 08:53:24 by Nikita_Kuydin     #+#    #+#             */
/*   Updated: 2026-06-12 08:53:24 by Nikita_Kuydin    ###   ########nkuydin   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook
{
    private:
        int count;
        int oldest;
    public:
        Contact contacts[8];
        PhoneBook();
        ~PhoneBook();

        void    add_contact(void);
        void    search_contact(void);

        int     getCount(void);
};

#endif