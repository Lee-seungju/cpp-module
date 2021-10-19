/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 23:01:52 by slee2             #+#    #+#             */
/*   Updated: 2021/10/20 00:29:42 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char* Form::GradeTooHighException::what(void) const throw() {
	return ("GradeTooHighException");
}

const char* Form::GradeTooLowException::what(void) const throw() {
	return ("GradeTooLowException");
}

Form::Form(): name("default"), grade(0), sign_grade(0), sign(false) {
	std::cout << "Make Form class" << std::endl;
}

Form::Form(std::string _name, int _grade, int _sign_grade): name(_name), grade(_grade), sign_grade(_sign_grade), sign(false) {
	if (_grade > 150 || _sign_grade > 150)
		throw(GradeTooLowException());
	else if (_grade < 1 || _sign_grade < 1)
		throw(GradeTooHighException());
	std::cout << "Make Form class" << std::endl;
}

Form::Form(Form const& a): name(a.getName()), grade(a.getGrade()), sign_grade(a.getSignGrade()), sign(a.getSign()) {
	if (grade > 150 || sign_grade > 150)
		throw(GradeTooLowException());
	else if (grade < 1 || sign_grade < 1)
		throw(GradeTooHighException());
	std::cout << "Copy Form class" << std::endl;
}

Form& Form::operator=(Form const &c) {
	*(const_cast<std::string*>(&this->name)) = c.getName();
	*(const_cast<int*>(&this->grade)) = c.getGrade();
	*(const_cast<int*>(&this->sign_grade)) = c.getSignGrade();
	this->sign = c.getSign();
	if (grade > 150 || sign_grade > 150)
		throw(GradeTooLowException());
	else if (grade < 1 || sign_grade < 1)
		throw(GradeTooHighException());
	std::cout << "operator= with Form class" << std::endl;
	return *this;
}

Form::~Form() {
	std::cout << "Remove Form class" << std::endl;
}

void				Form::beSigned(const Bureaucrat& bur) {
	if (bur.getGrade() <= this->sign_grade)
		this->sign = true;
	else
		throw(GradeTooLowException());
}

const	std::string&	Form::getName() const {
	return this->name;
}

const	int&			Form::getGrade() const {
	return this->grade;
}

const	int&			Form::getSignGrade() const {
	return this->sign_grade;
}

bool					Form::getSign() const {
	return this->sign;
}

std::ostream&   operator<<(std::ostream &out, const Form &b) {
    out << b.getName() << ", form grade " << b.getGrade() << ", form sign_grade " << b.getSignGrade()<< ".";
    return out;
}