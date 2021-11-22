/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:30:53 by slee2             #+#    #+#             */
/*   Updated: 2021/11/22 22:26:29 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat	a("abc", 150);
		std::cout << a << std::endl;

		a.increment();
		a.decrement();
		a.decrement();
		a.decrement();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat	b("b", 1);
		std::cout << b << std::endl;

		b.increment();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;

	try {
		Bureaucrat	b("b", 200);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}