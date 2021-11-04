/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 02:07:04 by slee2             #+#    #+#             */
/*   Updated: 2021/10/18 06:04:12 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria {
	public:
		Ice();
		Ice( const Ice& i);
		Ice& operator=(Ice const &c);
		virtual ~Ice();
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif