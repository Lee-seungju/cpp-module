/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 07:44:49 by slee2             #+#    #+#             */
/*   Updated: 2021/11/04 07:03:35 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	this->type = "Animal";
	std::cout << "A new animal has been created. : " << this->type << std::endl;
}

Animal::~Animal() {
	std::cout << "The Animal is extinct." << std::endl;
}

std::string Animal::getType(void) const {
	return this->type;
}

void Animal::makeSound(void) const {
	std::cout << this->type << " makes Sound - Animal" << std::endl;
}

Animal& Animal::operator=(Animal const &c) {
	this->type = c.type;
	return *this;
}

Animal::Animal( const Animal& a) {
	*this = a;
}
