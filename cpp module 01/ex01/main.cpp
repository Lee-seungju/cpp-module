/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 07:48:33 by slee2             #+#    #+#             */
/*   Updated: 2021/10/06 14:20:29 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie  *zombie;
	int	i = 0;

	zombie = zombieHorde(3, "zombie");
	while (i < 3)
	{
		zombie[i].announce();
		i++;
	}
    delete[] zombie;
    return (0);
}
