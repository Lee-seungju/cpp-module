/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 02:12:45 by slee2             #+#    #+#             */
/*   Updated: 2021/10/18 06:09:03 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(): _type("default") {
}

AMateria::AMateria(std::string const & type): _type(type) {
}

std::string const & AMateria::getType() const {
	return this->_type;
}

void AMateria::setType(std::string str) {
	this->_type = str;
}

AMateria* AMateria::clone() const {
	AMateria* a = NULL;

	a->setType(this->getType());
	return a;
}

void AMateria::use(ICharacter& target) {
	std::cout << "AMateria use: " << target.getName() << std::endl;
}

AMateria::~AMateria() {}