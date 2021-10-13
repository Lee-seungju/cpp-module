/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 07:57:38 by slee2             #+#    #+#             */
/*   Updated: 2021/10/13 08:12:38 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal() {
	Animal::type = "Dog";
	std::cout << "A new animal has been created. : " << this->type << std::endl;
}

Dog::~Dog() {
	std::cout << "The " << this->type << " is extinct." << std::endl;
}

void Dog::makeSound(void) const {
	std::cout << this->type << " makes Sound - Dog" << std::endl;
}