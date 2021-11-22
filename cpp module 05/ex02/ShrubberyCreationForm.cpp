/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 02:52:12 by slee2             #+#    #+#             */
/*   Updated: 2021/11/22 23:32:09 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form() {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& s): Form(s) {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target): Form(_target, 137, 145) {
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &c) {
	return (*dynamic_cast<ShrubberyCreationForm*>(&Form::operator=(c)));
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	(*const_cast<Bureaucrat*>(&executor)).signForm(*(const_cast<ShrubberyCreationForm*>(this)));
	if (this->getSign() == false)
		throw(NoSignException());
	if (executor.getGrade() > this->getGrade())
		throw(GradeTooLowException());
	std::string		file_name = this->getName() + "_shrubbery";
	std::ofstream	writeFile(file_name, std::ofstream::out | std::ofstream::trunc);

	if (!writeFile.good())
		throw(FileError());
	std::string	shrubbery = "                      ___\n"
							"                _,-\'\"\"   \"\"\"\"`--.\n"
							"             ,-\'          __,,-- \\\n"
							"           ,'    __,--\"\"\"\"dF      )\n"
							"          /   .-\"Hb_,--\"\"dF      /\n"
							"        ,'       _Hb ___dF\"-._,-\'\n"
							"      ,'      _,-\"\"\"\"   \"\"--..__\n"
							"     (     ,-'                  `.\n"
							"      `._,'     _   _             ;\n"
							"       ,'     ,' `-'Hb-.___..._,-'\n"
							"       \\    ,'\"Hb.-'HH`-.dHF\"\n"
							"        `--'   \"Hb  HH  dF\"\n"
							"                \"Hb HH dF\n"
							"                 \"HbHHdF\n"
							"                  |HHHF\n"
							"                  |HHH|\n"
							"                  |HHH|\n"
							"                  |HHH|\n"
							"                  |HHH|\n"
							"                  dHHHb\n"
							"                .dFd|bHb.               o\n"
							"      o       .dHFdH|HbTHb.          o /\n"
							"\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y\n"
							"##########################################\n";
	writeFile << shrubbery;
	writeFile.close();
}
