/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 06:07:21 by slee2             #+#    #+#             */
/*   Updated: 2021/10/13 23:39:05 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main(void) {
	Animal	*a[4];

	for(int i=0; i<4; i++) {
		if (i < 2) {
			a[i] = new Cat();
		}
		else {
			a[i] = new Dog();
		}
	}
	for(int i=0; i<4; i++) {
		a[i]->makeSound();
	}
	
	for(int i=0; i<4; i++) {
		delete a[i];
	}
	std::cout << "aaaaaa" << std::endl;

	Brain brain;
	Cat cat(brain);
	Dog dog(brain);

	brain.setter("brain", 100);
	cat.setter("cat", 100);
	dog.setter("dog", 100);

	std::cout << brain.getter() << std::endl;
	std::cout << cat.getter() << std::endl;
	std::cout << dog.getter() << std::endl;

	return 0;
}