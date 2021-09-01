/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 00:21:28 by slee2             #+#    #+#             */
/*   Updated: 2021/09/01 14:32:10 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "info.hpp"

int	main(void)
{
	std::string order;
	data a;
	a.index = 0;

	while (1)
	{
		std::cout << "order : ";
		std::getline(std::cin, order);
		if (order == "EXIT")
			break ;
		else if (order == "ADD")
		{
			if (a.index == 8)
				a.index = 0;
			a.get_info();
			a.index++;
		}
		else if (order == "SEARCH")
		{
			a.show_info();
			std::cout << std::endl;
			a.search_info();
		}
	}
	while (1);
}