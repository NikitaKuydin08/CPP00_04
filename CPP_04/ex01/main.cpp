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

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    //
    return 0;
}

    // std::cout << "====Dog and Cat deep copies====" << std::endl;
	// Dog a;
	// a.getBrain().ideas[0] = "Idea dog a";
	// std::cout << "Dog 'a' idea: " << a.getBrain().ideas[0]<< std::endl;
	// std::cout << "====Dog 'a' copy into Dog 'b'====" << std::endl;
	// Dog b(a);
	// std::cout << "Dog 'b' idea: " << b.getBrain().ideas[0]<< std::endl;
	// std::cout << "Has Dog 'b' its own brain?" << std::endl;
	// b.getBrain().ideas[0] = "Idea dog b";
	// std::cout << "Dog 'b' idea: " << b.getBrain().ideas[0]<< std::endl;
	// std::cout << "Dog 'a' idea: " << a.getBrain().ideas[0]<< std::endl;
	// std::cout << "Can Dog 'b' convince Dog 'a'?" << std::endl;
	// a = b;
	// std::cout << "Dog 'b' idea: " << b.getBrain().ideas[0]<< std::endl;
	// std::cout << "Dog 'a' idea: " << a.getBrain().ideas[0]<< std::endl;
	// std::cout << "====Destructors====" << std::endl;