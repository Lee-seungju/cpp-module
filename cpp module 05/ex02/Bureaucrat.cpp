/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:16:57 by slee2             #+#    #+#             */
/*   Updated: 2021/11/22 23:02:44 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what(void) const throw() {
	return ("GradeTooHighException");
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw() {
	return ("GradeTooLowException");
}

Bureaucrat::Bureaucrat(): name("default"), grade(0) {
	std::cout << "Make Bureaucrat class" << std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade): name(_name), grade(_grade) {
	if (_grade > 150)
		throw(GradeTooLowException());
	else if (_grade < 1)
		throw(GradeTooHighException());
	std::cout << "Make Bureaucrat class" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const& a): name(a.getName()), grade(a.getGrade()) {
	if (grade > 150)
		throw(GradeTooLowException());
	else if (grade < 1)
		throw(GradeTooHighException());
	std::cout << "Copy Bureaucrat class" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &c) {
	this->grade = c.getGrade();
	*(const_cast<std::string*>(&this->name)) = c.getName();
	if (grade > 150)
		throw(GradeTooLowException());
	else if (grade < 1)
		throw(GradeTooHighException());
	std::cout << "operator= with Bureaucrat class" << std::endl;
	return *this;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Remove Bureaucrat class" << std::endl;
}

void	Bureaucrat::signForm(const Form& f) {
	try {
		(*const_cast<Form*>(&f)).beSigned(*this);
		std::cout << this->getName() << " signs " << f.getName() << std::endl;
	} catch(std::exception& e) {
		std::cout << this->getName() << " cannot sign " << f.getName() << " because " << e.what() << std::endl;
	}
}

const	std::string&	Bureaucrat::getName() const {
	return this->name;
}

int		Bureaucrat::getGrade() const {
	return this->grade;
}

void	Bureaucrat::increment() {
	if (this->grade <= 1)
		throw(GradeTooHighException());
	this->grade--;
	std::cout << "Increment " << this->name << " grade -> " << this->grade << std::endl;
}

void	Bureaucrat::decrement() {
	if (this->grade >= 150)
		throw(GradeTooLowException());
	this->grade++;
	std::cout << "Decrement " << this->name << " grade -> " << this->grade << std::endl;

}

std::ostream&   operator<<(std::ostream &out, const Bureaucrat &b) {
    out << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return out;
}

void	Bureaucrat::executeForm(Form const &form) {
	try {
		form.execute(*this);
		std::cout << this->getName() << " executes " << form.getName() << std::endl;
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}