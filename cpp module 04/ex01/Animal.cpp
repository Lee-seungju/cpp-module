/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 07:44:49 by slee2             #+#    #+#             */
/*   Updated: 2021/10/13 12:33:23 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	this->type = "default";
	std::cout << "A new animal has been created. : " << this->type << std::endl;
}

Animal::~Animal() {
	std::cout << "The " << this->type << " is extinct." << std::endl;
}

std::string Animal::getType(void) const {
	return this->type;
}

void Animal::makeSound(void) const {
	std::cout << this->type << " makes Sound - Animal" << std::endl;
}
