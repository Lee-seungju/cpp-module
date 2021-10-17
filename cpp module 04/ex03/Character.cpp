/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 02:23:51 by slee2             #+#    #+#             */
/*   Updated: 2021/10/18 06:20:45 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	this->_name = "default";
	this->_count = 0;
	for(int i=0; i<4; i++) {
		this->inven[i] = 0;
	}
}

Character::Character(std::string name) {
	this->_name = name;
	this->_count = 0;
	for(int i=0; i<4; i++) {
		this->inven[i] = 0;
	}
}

Character::~Character() {
	for(int i=0; i<4; i++) {
		if(this->inven[i] != 0)
			delete this->inven[i];
		this->inven[i] = 0;
	}
}

Character::Character(Character const &_ch) {
	*this = _ch;

	for(int i=0; i<4; i++) {
		if (this->inven[i] != 0)
			this->inven[i] = 0;
	}

	for(int i=0; i<4; i++) {
		this->inven[i] = 0;
	}
}

std::string const & Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria* m) {
	if (this->_count == 3)
		return ;
	for(int i=0; i<4; i++) {
		if(this->inven[i] == 0) {
			this->inven[i] = m->clone();
			return ;
		}
	}
}

void Character::unequip(int idx) {
	if (this->inven[idx] == 0)
		return ;
	this->inven[idx] = 0;
}

void Character::use(int idx, ICharacter& target) {
	if (this->inven[idx] == 0)
		return ;
	this->inven[idx]->use(target);
}
