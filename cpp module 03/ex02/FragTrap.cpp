/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 04:03:31 by slee2             #+#    #+#             */
/*   Updated: 2021/11/01 22:46:56 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	this->Hitpoints = 100;
	this->energy = 100;
	this->damage = 30;
	std::cout << "FragTrap_Name : " << this->Name << std::endl;
}

FragTrap::FragTrap( std::string name): ClapTrap(name) {
	this->Hitpoints = 100;
	this->energy = 100;
	this->damage = 30;
	std::cout << "FragTrap_Name : " << this->Name << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->Name << " has been destroyed." << std::endl;
}

FragTrap&	FragTrap::operator=( FragTrap const& frag) {
	ClapTrap::operator=(frag);
	std::cout << "FragTrap " << this->Name << " operator= is called" << std::endl;
	return *this;
}

void	FragTrap::highFivesGuys(void) {
	if(this->energy)
		std::cout << "FragTrap " << this->Name << " asks for a positive high-five" << std::endl;
	else
		std::cout << "FragTrap " << this->Name << " can't ask for a positive high-five because " << this->Name << " is dead" << std::endl;

}

FragTrap::FragTrap( const FragTrap& frag) {
	*this = frag;
}
