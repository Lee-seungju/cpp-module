/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:46:46 by slee2             #+#    #+#             */
/*   Updated: 2021/10/14 00:04:13 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal() {
	WrongAnimal::type = "WrongCat";
	std::cout << "A new wrongcat has been created. : " << this->type << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "The wrongcat is extinct." << std::endl;
}

WrongCat::WrongCat(WrongCat const &wrongcat) {
	*this = wrongcat;
	std::cout << "Copy constructor called - wrongcat" << std::endl;
}

void WrongCat::makeSound(void) const {
	std::cout << this->type << " makes Sound - WrongCat" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const &d) {
	this->type = d.type;
	return *this;
}