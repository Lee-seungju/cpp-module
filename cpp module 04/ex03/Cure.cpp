/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 05:12:29 by slee2             #+#    #+#             */
/*   Updated: 2021/10/18 06:25:49 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() {
	this->setType("cure");
}

AMateria* Cure::clone() const {
	Cure* a = new Cure();

	a->setType(this->getType());
	return a;
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
}

Cure::~Cure() {}