/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:44:05 by slee2             #+#    #+#             */
/*   Updated: 2021/10/13 10:45:04 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	this->type = "default";
	std::cout << "A new wronganimal has been created. : " << this->type << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "The " << this->type << " is extinct." << std::endl;
}

std::string WrongAnimal::getType(void) const {
	return this->type;
}

void WrongAnimal::makeSound(void) const {
	std::cout << this->type << " makes Sound - WrongAnimal" << std::endl;
}