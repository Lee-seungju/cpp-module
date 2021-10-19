/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 05:33:39 by slee2             #+#    #+#             */
/*   Updated: 2021/10/20 06:03:51 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

const char* Intern::NotFoundException::what(void) const throw() {
	return ("NotFoundException");
}

Form*	Intern::makeForm(std::string form, std::string target) {
	try {
		std::string	whatlevel[] = {"presidential pardon",
									"robotmy request", 
									"Shrubbery creation"};
		int	i = std::find(whatlevel, whatlevel + 3, form) - whatlevel;

		switch(i)
		{
			case 0:
				std::cout << "Intern creates " << whatlevel[i] << std::endl;
				return new PresidentialPardonForm(target);
				break;
			case 1:
				std::cout << "Intern creates " << whatlevel[i] << std::endl;
				return new RobotomyRequestForm(target);
				break;
			case 2:
				std::cout << "Intern creates " << whatlevel[i] << std::endl;
				return new ShrubberyCreationForm(target);
			case 3:
				throw(NotFoundException());
		}
	} catch(std::exception& e) {
		std::cout << "The specified form could not be found. Reason : " << e.what() << std::endl;
	}
	return NULL;
}