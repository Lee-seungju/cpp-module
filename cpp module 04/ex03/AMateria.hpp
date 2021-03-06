/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 01:44:23 by slee2             #+#    #+#             */
/*   Updated: 2021/10/18 06:04:02 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		
		AMateria();
		AMateria(std::string const & type);
		AMateria( const AMateria& a);
		AMateria& operator=(AMateria const &c);
		virtual ~AMateria();
		void setType(std::string str);
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	protected:
		std::string _type;
};

#endif