/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 02:23:51 by slee2             #+#    #+#             */
/*   Updated: 2021/11/10 08:52:51 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): _name("default"), _count(0) {
	for(int i=0; i<4; i++) {
		this->inven[i] = 0;
	}
}

Character::Character(std::string name): _name(name), _count(0) {
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

Character::Character(const Character& _ch) {
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
			this->_count++;
			return ;
		}
	}
}

void Character::unequip(int idx) {
	if (this->inven[idx] == 0 || \
		idx < 0 || idx > 3)
		return ;
	this->inven[idx] = 0;
}

void Character::use(int idx, ICharacter& target) {
	if (this->inven[idx] == 0 || \
		idx < 0 || idx > 3)
		return ;
	this->inven[idx]->use(target);
}

Character& Character::operator=(Character const &c) {
	this->_name = c._name;
	this->_count = c._count;
	return *this;
}