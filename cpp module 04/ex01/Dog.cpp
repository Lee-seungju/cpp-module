/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 07:57:38 by slee2             #+#    #+#             */
/*   Updated: 2021/11/10 07:53:47 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal(), b(new Brain()) {
	Animal::type = "Dog";
	std::cout << "A new animal has been created. : " << this->type << std::endl;
}

Dog::Dog(const Brain &brain) {
	*this->b = brain;
}

Dog::Dog(Dog const &dog) {
	*this = dog;
	std::cout << "Copy constructor called - dog" << std::endl;
}


Dog::~Dog() {
	std::cout << "The dog is extinct." << std::endl;
	delete this->b;
}

void Dog::makeSound(void) const {
	std::cout << this->type << " makes Sound - Dog" << std::endl;
}

Dog& Dog::operator=(Dog const &d) {
	this->b = d.b;
	this->type = d.type;
	return *this;
}


void Dog::setter(std::string mes, int len) {
	b = new Brain();
	this->b->setter(mes, len);
}

std::string Dog::getter(void) {
	return this->b->getter();
}