/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 13:20:55 by slee2             #+#    #+#             */
/*   Updated: 2021/09/06 13:52:28 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << HumanA::name + " attacks with his " + HumanA::weapon.getType() << std::endl;
}

HumanA::HumanA(std::string _name, Weapon& w): name(_name), weapon(w)
{
}
