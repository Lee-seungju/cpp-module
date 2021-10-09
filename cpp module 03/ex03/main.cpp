/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 06:07:21 by slee2             #+#    #+#             */
/*   Updated: 2021/10/10 05:20:04 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {
	DiamondTrap	a("slee2");

	a.whoAmI();
	
	DiamondTrap b("B");
	DiamondTrap c("C");


	std::cout << std::endl;
	
	b.whoAmI();
	c.whoAmI();		
	c.highFivesGuys();
	
	std::cout << std::endl;
	
	b.attack("C");
	c.takeDamage(20);
	
	std::cout << std::endl;
	
	b.attack("C");
	c.takeDamage(30);
	
	std::cout << std::endl;
	
	b.guardGate();
	
	std::cout << std::endl;
		
	return 0;
}