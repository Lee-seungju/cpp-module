/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:30:53 by slee2             #+#    #+#             */
/*   Updated: 2021/10/20 06:05:52 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat	a("aa", 137);
	Bureaucrat	b("bb", 1);
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	Form		*z1 = new ShrubberyCreationForm("shrubbery");
	Form		*z2 = new RobotomyRequestForm("Robot");
	Form		*z3 = new PresidentialPardonForm("President");

	std::cout << *z1 << std::endl;
	std::cout << *z2 << std::endl;
	std::cout << *z3 << std::endl;
	std::cout << std::endl;
	
	b.signForm(*z1);
	b.executeForm(*z1);

	std::cout << std::endl;

	b.signForm(*z2);
	b.executeForm(*z2);

	std::cout << std::endl;

	b.signForm(*z3);
	b.executeForm(*z3);

	std::cout << std::endl;

	a.signForm(*z1);
	a.executeForm(*z1);
	a.signForm(*z2);
	a.executeForm(*z2);
	a.signForm(*z3);
	a.executeForm(*z3);
	
	std::cout << std::endl;
	
	delete z1;
	delete z2;
	delete z3;

	return 0;
}