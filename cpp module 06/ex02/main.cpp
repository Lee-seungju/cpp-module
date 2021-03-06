/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 06:24:04 by slee2             #+#    #+#             */
/*   Updated: 2021/11/23 15:33:14 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	Base *b = generate();

	identify(b);
	identify(*b);
	
	std::cout << std::endl;

	delete b;
	
	return 0;
}