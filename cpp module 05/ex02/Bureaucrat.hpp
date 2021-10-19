/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:16:26 by slee2             #+#    #+#             */
/*   Updated: 2021/10/20 03:02:39 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat {
	private:
		const	std::string		name;
		int						grade;
	
	public:
		class GradeTooHighException: public std::exception {
			public:
				const char* what(void) const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				const char* what(void) const throw();
		};

		Bureaucrat();
		Bureaucrat(std::string _name, int _grade);
		Bureaucrat(Bureaucrat const& a);
		Bureaucrat& operator=(Bureaucrat const &c);
		~Bureaucrat();

		void				signForm(const Form& f);

		const	std::string&		getName() const;
		int						getGrade() const;
		void					increment();
		void					decrement();

		void	executeForm(Form const & form);
};

std::ostream&   operator<<(std::ostream &out, const Bureaucrat &b);

#endif