/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 02:53:00 by slee2             #+#    #+#             */
/*   Updated: 2021/10/20 04:53:03 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form() {
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& s): Form(s) {
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target): Form(_target, 45, 72) {
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &c) {
	return (*dynamic_cast<RobotomyRequestForm*>(&Form::operator=(c)));
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > this->getGrade())
		throw(GradeTooLowException());
	int num;
	srand(time(0));
	num = rand() % 100 + 1;
	if (num <= 50)
		std::cout << this->getName() << " has been robotomized successfully." << std::endl;
	else
		std::cout << this->getName() << " failed to robotize." << std::endl;
}