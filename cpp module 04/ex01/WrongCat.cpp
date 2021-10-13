/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:46:46 by slee2             #+#    #+#             */
/*   Updated: 2021/10/13 10:51:46 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal() {
	WrongAnimal::type = "WrongCat";
	std::cout << "A new wronganimal has been created. : " << this->type << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "The " << this->type << " is extinct." << std::endl;
}

void WrongCat::makeSound(void) const {
	std::cout << this->type << " makes Sound - WrongCat" << std::endl;
}