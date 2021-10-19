/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 02:51:32 by slee2             #+#    #+#             */
/*   Updated: 2021/10/20 04:16:57 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
	private:
		ShrubberyCreationForm();
	public:
		ShrubberyCreationForm(ShrubberyCreationForm const& s);
		ShrubberyCreationForm(std::string _target);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const &c);
		~ShrubberyCreationForm();
		void	execute(Bureaucrat const & executor) const;
};

#endif