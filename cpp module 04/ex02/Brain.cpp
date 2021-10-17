/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:29:15 by slee2             #+#    #+#             */
/*   Updated: 2021/10/18 01:15:42 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	this->ideas = new std::string[100];
	this->setter("default", 100);
}

Brain::~Brain() {
	delete[] this->ideas;
	std::cout << "Brain is gone" << std::endl;
}

Brain::Brain(Brain const &b) {
	*this = b;
	std::cout << "Copy constructor called" << std::endl;
}

void Brain::setter(std::string mes, int len) {
	for(int i=0; i<len; i++) {
		this->ideas[i] = mes;
	}
}

Brain& Brain::operator=(Brain const &br) {
	std::cout << "Assignation operator called" << std::endl;
	Brain *a = new Brain();
	for(int i=0; i<100; i++) {
		a->ideas[i] = br.ideas[i];
	}
	return *a;
}

std::string	Brain::getter(void) {
	return this->ideas[0];
}