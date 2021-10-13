/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 08:03:54 by slee2             #+#    #+#             */
/*   Updated: 2021/10/13 23:46:45 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal() {
	Animal::type = "Cat";
	std::cout << "A new animal has been created. : " << this->type << std::endl;
}

Cat::~Cat() {
	std::cout << "The cat is extinct." << std::endl;
}

Cat::Cat(Cat const &cat) {
	*this = cat;
	std::cout << "Copy constructor called - cat" << std::endl;
}

void Cat::makeSound(void) const {
	std::cout << this->type << " makes Sound - Cat" << std::endl;
}

Cat& Cat::operator=(Cat const &c) {
	this->type = c.type;
	return *this;
}
