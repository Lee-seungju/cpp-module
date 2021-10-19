/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:16:26 by slee2             #+#    #+#             */
/*   Updated: 2021/10/19 22:16:31 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat {
	private:
		std::string	name;
		int					grade;
	
	public:
		class GradeTooHighException: public std::exception {
			public:
				const char* what(void) const throw() {
					return ("GradeTooHighException");
				}
		};
		class GradeTooLowException: public std::exception {
			public:
				const char* what(void) const throw() {
					return ("GradeTooLowException");
				}
		};

		Bureaucrat();
		Bureaucrat(std::string _name, int _grade);
		Bureaucrat(Bureaucrat const& a);
		Bureaucrat& operator=(Bureaucrat const &c);
		~Bureaucrat();
		std::string			getName() const;
		int					getGrade() const;
		void				increment();
		void				decrement();
};

std::ostream&   operator<<(std::ostream &out, const Bureaucrat &b);

#endif