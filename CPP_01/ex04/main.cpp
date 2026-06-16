/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-16 13:13:41 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-16 13:13:41 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char **argv) {
    if (argc != 4)
    {
        std::cout << "Usage: /Replace filename.txt \"hello world\" HELLO" << std::endl;
        return (1);
    }
    if (check_argv(argv[1]) || check_argv(argv[2]))
        return (1);
    Replace Replace(argv[1], argv[2], argv[3]);
    if (Replace.ReplaceFile())
        return (1);
    return (0);
}

/*
    filename.txt -
It is a long established fact that a reader will be distracted by the readable content of a page when looking at its layout.
The point of using Lorem Ipsum is that it has a more-or-less normal HELLO distribution of letters, as opposed to using
'Content here, content here', making it look like readable English. Many desktop publishing packages and web page editors now use
Lorem Ipsum as their default model text, and a search for 'lorem ipsum' will uncover many web sites still in their infancy.
Various versions have evolved over the years, sometimes by accident, sometimes HELLO on purpose (injected humour and the like).
*/