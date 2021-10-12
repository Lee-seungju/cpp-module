/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 08:03:54 by slee2             #+#    #+#             */
/*   Updated: 2021/10/13 08:08:05 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal() {
	Animal::type = "Cat";
	std::cout << "A new animal has been created. : " << this->type << std::endl;
}

Cat::~Cat() {
	std::cout << "The " << this->type << " is extinct." << std::endl;
}

void Cat::makeSound(void) const {
	std::cout << this->type << " makes Sound - Cat" << std::endl;
}