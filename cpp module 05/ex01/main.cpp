/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:30:53 by slee2             #+#    #+#             */
/*   Updated: 2021/11/22 22:50:00 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try {
		Bureaucrat	a("bb", 100);
		std::cout << a << std::endl;

		Form		b("ff", 200, 150);
		std::cout << b << std::endl;
		
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat	a("bb", 100);
		std::cout << a << std::endl;

		Form		b("ff", 50, 0);
		std::cout << b << std::endl;
		
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;

	try {
		Bureaucrat	a("bb", 100);
		std::cout << a << std::endl;

		Form		b("ff", 50, 120);
		std::cout << b << std::endl;
		
		a.signForm(b);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;

	try {
		Bureaucrat	a("bb", 100);
		std::cout << a << std::endl;

		Form		b("ff", 50, 80);
		std::cout << b << std::endl;
		
		a.signForm(b);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}