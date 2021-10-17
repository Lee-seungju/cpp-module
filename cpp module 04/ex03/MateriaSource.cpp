/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 04:43:19 by slee2             #+#    #+#             */
/*   Updated: 2021/10/18 06:21:22 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for(int i=0; i<4; i++) {
		this->inven[i] = 0;
	}
}

void MateriaSource::learnMateria(AMateria* a) {
	if (this->count == 3)
		return ;
	for(int i=0; i<4; i++) {
		if (this->inven[i] == 0) {
			this->inven[i] = a;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for(int i=0; i<4; i++) {
		if (this->inven[i]->getType() == type)
			return this->inven[i];
	}
	return 0;
}

MateriaSource::~MateriaSource() {
	for(int i=0; i<4; i++) {
		if (this->inven[i] != 0)
			delete this->inven[i];
		this->inven[i] = 0;
	}
}