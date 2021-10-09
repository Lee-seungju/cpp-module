/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 06:07:21 by slee2             #+#    #+#             */
/*   Updated: 2021/10/10 04:07:53 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {
	std::string const b = "bbb";
	ScavTrap d("slee2");

	d.attack(b);
	d.takeDamage(20);
	d.beRepaired(10);
	std::cout << std::endl;
	
	ScavTrap e;
	e = d;
	e.attack(b);
	e.takeDamage(1000);
	e.guardGate();
	e.beRepaired(100);
	e.guardGate();
	return 0;
}