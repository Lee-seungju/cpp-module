/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 02:53:42 by slee2             #+#    #+#             */
/*   Updated: 2021/11/22 23:44:16 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form() {
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& s): Form(s) {
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target): Form(_target, 5, 25) {
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &c) {
	return (*dynamic_cast<PresidentialPardonForm*>(&Form::operator=(c)));
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	(*const_cast<Bureaucrat*>(&executor)).signForm(*(const_cast<PresidentialPardonForm*>(this)));
	if (this->getSign() == false)
		throw(NoSignException());
	if (executor.getGrade() > this->getGrade())
		throw(GradeTooLowException());
	std::cout << this->getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}