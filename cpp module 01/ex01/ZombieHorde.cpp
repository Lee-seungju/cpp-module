/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 13:27:23 by slee2             #+#    #+#             */
/*   Updated: 2021/10/06 14:17:58 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie	*a = new Zombie[N];
	std::stringstream	ss;
	int	i = 0;

	while (i < N)
	{
		ss.str(std::string());
		ss << i;
		a[i].setName(name + ss.str());
		i++;
	}
	return a;
}
