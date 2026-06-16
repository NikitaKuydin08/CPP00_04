/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-16 13:10:17 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-16 13:10:17 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <string>
#include <fstream>

class Replace {
    private:
        std::string filename;
        std::string s1;
        std::string s2;

    public:
        Replace(std::string file, std::string s1, std::string s2);
        ~Replace(void);

        int ReplaceFile(void);
};

int check_argv(std::string str);

#endif