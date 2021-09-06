/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 13:21:24 by slee2             #+#    #+#             */
/*   Updated: 2021/09/06 14:04:51 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class	HumanB
{
	private :
		std::string	name;
		Weapon	*weapon;
	public :
		void	attack(void);
		void	setWeapon(Weapon &w);
		HumanB(std::string _name);
};
