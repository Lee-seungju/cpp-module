/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 08:03:54 by slee2             #+#    #+#             */
/*   Updated: 2021/10/18 01:29:04 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal(), b(new Brain()) {
	Animal::type = "Cat";
	std::cout << "A new animal has been created. : " << this->type << std::endl;
}

Cat::~Cat() {
	std::cout << "The cat is extinct." << std::endl;
	delete this->b;
}

Cat::Cat(Brain const &brain) {
	if (this->b) {
		delete this->b;
		this->b = NULL;
	}
	*this->b = brain;
}

Cat::Cat(Cat const &cat) {
	*this = cat;
	std::cout << "Copy constructor called - cat" << std::endl;
}

void Cat::makeSound(void) const {
	std::cout << this->type << " makes Sound - Cat" << std::endl;
}

void Cat::setter(std::string mes, int len) {
	b = new Brain();
	this->b->setter(mes, len);
}

Cat& Cat::operator=(Cat const &c) {
	this->b = c.b;
	this->type = c.type;
	return *this;
}

std::string Cat::getter(void) {
	return this->b->getter();
}