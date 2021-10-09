/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 13:56:22 by slee2             #+#    #+#             */
/*   Updated: 2021/10/10 06:28:45 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack(void)
{
	if (HumanB::weapon == 0)
	{
		std::cout << HumanB::name + " don't have any Weapon" << std::endl;
		return ;
	}
	std::cout << HumanB::name + " attacks with his " + HumanB::weapon->getType() << std::endl;
}

HumanB::HumanB(std::string _name)
{
	HumanB::name = _name;
	HumanB::weapon = 0;
}

void	HumanB::setWeapon(Weapon &w)
{
	HumanB::weapon = &w;
}
