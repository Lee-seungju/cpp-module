/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 06:07:21 by slee2             #+#    #+#             */
/*   Updated: 2021/10/09 06:30:22 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap a("abc");
	ClapTrap c;
	std::string const b = "bbb";

	a.attack(b);
	a.takeDamage(100);
	a.beRepaired(10);
	a.takeDamage(5);
	c.takeDamage(1);
	c.beRepaired(10);
}