/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 07:44:49 by slee2             #+#    #+#             */
/*   Updated: 2021/11/10 08:10:13 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	this->type = "default";
	std::cout << "A new animal has been created. : " << this->type << std::endl;
}

Animal::~Animal() {
	std::cout << "The Animal is extinct." << std::endl;
}

std::string Animal::getType(void) const {
	return this->type;
}

Animal& Animal::operator=(Animal const &c) {
	this->type = c.type;
	return *this;
}

Animal::Animal( const Animal& a) {
	*this = a;
}
