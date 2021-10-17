/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 05:01:47 by slee2             #+#    #+#             */
/*   Updated: 2021/10/18 06:05:02 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {
	this->setType("ice");
}

AMateria* Ice::clone() const {
	Ice* a = new Ice;

	a->setType(this->getType());
	return a;
}

void Ice::use(ICharacter& target) {
	std::cout << "Ice: \"* shoots an ice bolt at " << target.getName() << " *\"" << std::endl;
}

Ice::~Ice() {}