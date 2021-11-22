/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:30:53 by slee2             #+#    #+#             */
/*   Updated: 2021/11/22 23:49:10 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat	a("aa", 137);
	Bureaucrat	b("bb", 1);
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	Form		*z1;
	Form		*z2;
	Form		*z3;
	Intern		in;

	std::cout << std::endl;
	
	z1 = in.makeForm("presidential pardon", "pardon");
	z2 = in.makeForm("robotmy request", "robot");
	z3 = in.makeForm("Shrubbery creation", "shrubbery");
	
	std::cout << std::endl;
	
	std::cout << *z1 << std::endl;
	std::cout << *z2 << std::endl;
	std::cout << *z3 << std::endl;
	std::cout << std::endl;
	
	b.executeForm(*z1);

	std::cout << std::endl;

	b.executeForm(*z2);

	std::cout << std::endl;

	b.executeForm(*z3);

	std::cout << std::endl;

	a.executeForm(*z1);
	a.executeForm(*z2);
	a.executeForm(*z3);
	
	std::cout << std::endl;

	z1 = in.makeForm("aa", "aa");

	std::cout << std::endl;
	delete z1;
	delete z2;
	delete z3;

	return 0;
}