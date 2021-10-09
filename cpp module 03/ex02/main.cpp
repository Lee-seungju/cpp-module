/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 06:07:21 by slee2             #+#    #+#             */
/*   Updated: 2021/10/10 05:41:10 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {
	FragTrap	a;
	std::string	b = "bbb";
	
	std::cout << std::endl;

	a.attack(b);
	a.takeDamage(50);
	a.highFivesGuys();
	a.takeDamage(100);
	a.highFivesGuys();
	
	std::cout << std::endl;
	
	return 0;
}