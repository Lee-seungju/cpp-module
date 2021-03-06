/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 05:45:06 by slee2             #+#    #+#             */
/*   Updated: 2021/11/01 22:49:18 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	this->Name = "default";
	std::cout << "ClapTrap_Name : " << this->Name << std::endl;
	this->Hitpoints = 10;
	this->energy = 10;
	this->damage = 0;
}

ClapTrap::ClapTrap(std::string name) {
	this->Name = name;
	std::cout << "ClapTrap_Name : " << this->Name << std::endl;
	this->Hitpoints = 10;
	this->energy = 10;
	this->damage = 0;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->Name << " has been destroyed." << std::endl;
}

void	ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << this->Name << \
		" attacks " << target << " , causing " \
		<< this->damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->energy <= amount) {
		std::cout << this->Name << " is dead" << std::endl;
		this->energy = 0;
	}
	else {
		this->energy -= amount;
		std::cout << "ClapTrap " << this->Name << \
			" take Damage " << amount << " , remaning hp is " \
			<< this->energy << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->energy == 0) {
		std::cout << "ClapTrap " << this->Name << " is repaired by " << amount << " and comes back to life" << std::endl;
		this->energy += amount;
	}
	else {
		this->energy += amount;
		std::cout << "ClapTrap " << this->Name << " is repaired by " << amount << " and remaning hp is " << this->energy << std::endl;
	}
}

ClapTrap&	ClapTrap::operator=( ClapTrap const& clap) {
	this->Name = clap.Name;
	this->Hitpoints = clap.Hitpoints;
	this->energy = clap.energy;
	this->damage = clap.damage;
	std::cout << "ClapTrap "<< this->Name << " operator= is called" << std::endl;
	return *this;
}

ClapTrap::ClapTrap( const ClapTrap& clap) {
	*this = clap;
}
