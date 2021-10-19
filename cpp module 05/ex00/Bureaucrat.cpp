/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:16:57 by slee2             #+#    #+#             */
/*   Updated: 2021/10/19 23:12:26 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("default"), grade(1) {
	std::cout << "Make Bureaucrat class" << std::endl;
}

Bureaucrat::Bureaucrat(char* _name, int _grade): name(_name), grade(_grade) {
	if (_grade > 150)
		throw(GradeTooHighException());
	else if (_grade < 1)
		throw(GradeTooLowException());
	std::cout << "Make Bureaucrat class" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const& a) {
	*this = a;
	std::cout << "Copy Bureaucrat class" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &c) {
	this->grade = c.getGrade();
	this->name = c.getName();
	std::cout << "operator= with Bureaucrat class" << std::endl;
	return *this;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Remove Bureaucrat class" << std::endl;
}

const	char*	Bureaucrat::getName() const {
	return this->name;
}

int				Bureaucrat::getGrade() const {
	return this->grade;
}

void			Bureaucrat::increment() {
	if (this->grade <= 1)
		throw(GradeTooLowException());
	this->grade--;
	std::cout << "Increment " << this->name << " grade -> " << this->grade << std::endl;
}

void			Bureaucrat::decrement() {
	if (this->grade >= 150)
		throw(GradeTooHighException());
	this->grade++;
	std::cout << "Decrement " << this->name << " grade -> " << this->grade << std::endl;

}

std::ostream&   operator<<(std::ostream &out, const Bureaucrat &b) {
    out << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return out;
}