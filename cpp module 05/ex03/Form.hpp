/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 22:55:17 by slee2             #+#    #+#             */
/*   Updated: 2021/10/20 04:35:17 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

class Bureaucrat;

class Form {
	private:
		const	std::string		name;
		const	int				grade;
		const	int				sign_grade;
		bool					sign;
	
	public:
		class GradeTooHighException: public std::exception {
			public:
				const char* what(void) const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				const char* what(void) const throw();
		};
		class FileError: public std::exception {
			public:
				const char* what(void) const throw();
		};
		
		Form();
		Form(std::string _name, int _grade, int _sign_grade);
		Form(Form const& a);
		Form& operator=(Form const &c);
		virtual ~Form();

		void				beSigned(const Bureaucrat& bur);

		const	std::string&		getName() const;
		const	int&				getGrade() const;
		const	int&				getSignGrade() const;
		bool						getSign() const;
		virtual	void	execute(Bureaucrat const & executor) const = 0;
};

std::ostream&   operator<<(std::ostream &out, const Form &b);

#endif