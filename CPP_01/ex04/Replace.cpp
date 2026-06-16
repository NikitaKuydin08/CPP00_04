/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-16 13:37:22 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-16 13:37:22 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string file, std::string s1, std::string s2) {
    filename = file;
    this->s1 = s1;
    this->s2 = s2;
    std::cout << "Constructor called" << std::endl;
}

Replace::~Replace(void) {
    std::cout << "Destructor called" << std::endl;
}

int check_argv(std::string str) {
    if (str.empty())
    {
        std::cout << "This parameter can't be empty" << std::endl;
        return (1); 
    }
    return (0);
}

static std::string replace(std::string line, std::string s1, std::string s2) {
    size_t index;
    size_t pos = 0;

    size_t len1 = s1.length();
    size_t len2 = s2.length();
    while ((index = line.find(s1, pos)) != std::string::npos) // substring is not found
    {
        line.erase(index, len1);
        line.insert(index, s2);
        pos += len2;
    }
    return (line);
}

int Replace::ReplaceFile(void) {
    std::string line;

    std::fstream ReadFile(this->filename, std::ios::in); // read mode
    if (!ReadFile.is_open())
    {
        std::cout << "Error: Unable to open file!" << std::endl;
        return (1);
    }
    std::fstream CopyFile(filename + ".replace", std::ios::out); // write mode
    if (!CopyFile)
    {
        std::cout << "Error creating/opening the file for writing" << std::endl;
        return (1);
    }
    while (getline(ReadFile, line))
        CopyFile << replace(line, s1, s2) << std::endl;
    ReadFile.close();
    CopyFile.close();
    return (0);
}
