/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 00:21:28 by slee2             #+#    #+#             */
/*   Updated: 2021/09/01 18:43:02 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(void)
{
    int i;
    
    i = 0;
    while (i < Zombie::num)
        std::cout << "<" + Zombie::name[i++] + "> Braiiii BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(int num, std::string z_name)
{
    int i;
    std::stringstream   ssInt;

    i = 0;
    Zombie::name = new std::string[num];
    Zombie::num = num;
    while (i < num)
    {
        ssInt.str(std::string());
        ssInt << i;
        Zombie::name[i] = z_name + ssInt.str();
        i++;
    }
}

Zombie::~Zombie(void)
{
    std::cout << "ZombieHorde is dead" << std::endl;
}