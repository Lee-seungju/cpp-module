/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 02:52:30 by slee2             #+#    #+#             */
/*   Updated: 2021/10/20 05:04:24 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <time.h>
#include <stdlib.h>

class RobotomyRequestForm : public Form {
	private:
		RobotomyRequestForm();
	public:
		RobotomyRequestForm(RobotomyRequestForm const& s);
		RobotomyRequestForm(std::string _target);
		RobotomyRequestForm& operator=(RobotomyRequestForm const &c);
		~RobotomyRequestForm();
		void	execute(Bureaucrat const & executor) const;
};

#endif