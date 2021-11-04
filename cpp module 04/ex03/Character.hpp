/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 02:06:22 by slee2             #+#    #+#             */
/*   Updated: 2021/10/18 06:07:17 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class Character: public ICharacter {
	public:
		Character();
		Character(std::string name);
		Character(const Character& _ch);
		Character& operator=(Character const &c);
		virtual ~Character();
		
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	protected:
		std::string _name;
		AMateria* inven[4];
		int		_count;
};

#endif