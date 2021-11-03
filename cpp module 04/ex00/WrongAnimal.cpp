/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:44:05 by slee2             #+#    #+#             */
/*   Updated: 2021/11/04 06:23:38 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	this->type = "WrongAnimal";
	std::cout << "A new wronganimal has been created. : " << this->type << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "The wronganimal is extinct." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &wronganimal) {
	*this = wronganimal;
	std::cout << "Copy constructor called - wronganimal" << std::endl;
}

std::string WrongAnimal::getType(void) const {
	return this->type;
}

void WrongAnimal::makeSound(void) const {
	std::cout << this->type << " makes Sound - WrongAnimal" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &d) {
	this->type = d.type;
	return *this;
}
