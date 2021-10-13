/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:29:15 by slee2             #+#    #+#             */
/*   Updated: 2021/10/13 13:10:12 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	this->ideas = new std::string[100];
}

Brain::~Brain() {
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