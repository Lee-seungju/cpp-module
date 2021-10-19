/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 02:53:15 by slee2             #+#    #+#             */
/*   Updated: 2021/10/20 04:52:57 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
	private:
		PresidentialPardonForm();
	public:
		PresidentialPardonForm(PresidentialPardonForm const& s);
		PresidentialPardonForm(std::string _target);
		PresidentialPardonForm& operator=(PresidentialPardonForm const &c);
		~PresidentialPardonForm();
		void	execute(Bureaucrat const & executor) const;
};

#endif