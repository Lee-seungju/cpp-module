/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 00:21:28 by slee2             #+#    #+#             */
/*   Updated: 2021/10/06 14:18:08 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << "<" + Zombie::name + "> Braiiii BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string z_name)
{
	Zombie::name = z_name;
}

Zombie::~Zombie(void)
{
    std::cout << "ZombieHorde is dead" << std::endl;
}
