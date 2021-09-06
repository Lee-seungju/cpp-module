/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 13:04:56 by slee2             #+#    #+#             */
/*   Updated: 2021/09/06 13:33:14 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string	Weapon::getType(void)
{
	return (Weapon::WEAPON_TYPE);
}

void	Weapon::setType(std::string set)
{
	Weapon::WEAPON_TYPE = set;
}

Weapon::Weapon(std::string g)
{
	Weapon::WEAPON_TYPE = g;
}	
