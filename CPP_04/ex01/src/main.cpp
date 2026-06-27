/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuydin <nikitakuydin@qmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-24 14:12:59 by nkuydin           #+#    #+#             */
/*   Updated: 2026-06-24 14:12:59 by nkuydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#include <iostream>

int main()
{
	srand(time(NULL));
    std::cout << "\033[33mSubject's main\033[0m" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    
	std::cout << std::endl << "\033[33mDestructors and Constructors\033[0m" << std::endl;
	const Animal* animal[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
	for (int i = 0; i < 4; i++) { delete animal[i]; }

    std::cout << std::endl << "\033[33mDeep Copies. NOT shallow copies.\033[0m" << std::endl;
    std::cout << "====Dog and Cat deep copies====" << std::endl;
	Dog a;
	a.getBrain()->ideas[0] = "Idea dog a";
	std::cout << "Dog 'a' idea: " << a.getBrain()->ideas[0]<< std::endl;
	std::cout << "====Dog 'a' copy into Dog 'b'====" << std::endl;
	Dog b(a);
	std::cout << "Dog 'b' idea: " << b.getBrain()->ideas[0]<< std::endl;
	std::cout << "Has Dog 'b' its own brain?" << std::endl;
	b.getBrain()->ideas[0] = "Idea dog b";
	std::cout << "Dog 'b' idea: " << b.getBrain()->ideas[0]<< std::endl;
	std::cout << "Dog 'a' idea: " << a.getBrain()->ideas[0]<< std::endl;
    std::cout << "Memory address of Dog 'b': " << b.getBrain() << std::endl;
    std::cout << "Memory address of Dog 'a': " << a.getBrain() << std::endl;
	std::cout << "Can Dog 'b' convince Dog 'a'?" << std::endl;
	a = b;
	std::cout << "Dog 'b' idea: " << b.getBrain()->ideas[0]<< std::endl;
	std::cout << "Dog 'a' idea: " << a.getBrain()->ideas[0]<< std::endl;
	std::cout << "The values above should have ben the same" << std::endl;
	std::cout << "Memory address of Dog 'b': " << b.getBrain() << std::endl;
    std::cout << "Memory address of Dog 'a': " << a.getBrain() << std::endl;

	std::cout << std::endl << "\033[33mGenrative idea and copies\033[0m" << std::endl;
	Cat c1;
	Cat c2;
	std::cout << "C1 first idea: " << c1.getBrain()->ideas[0]<< std::endl;
	std::cout << "C2 first idea: " << c2.getBrain()->ideas[0]<< std::endl;
	c2 = c1;
	std::cout << "C1 first idea: " << c1.getBrain()->ideas[0]<< std::endl;
	std::cout << "C2 first idea: " << c2.getBrain()->ideas[0]<< std::endl;
	c1.getBrain()->ideas[0] = "F*** OFF! Be silent.";
	std::cout << "The value of c1's 1st idea changed" << std::endl;
	std::cout << "C1 first idea: " << c1.getBrain()->ideas[0]<< std::endl;
	std::cout << "C2 first idea: " << c2.getBrain()->ideas[0]<< std::endl;
	std::cout << std::endl << "\033[33mDestructors\033[0m" << std::endl;
    return 0;
}
