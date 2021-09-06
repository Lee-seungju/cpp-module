/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 13:21:24 by slee2             #+#    #+#             */
/*   Updated: 2021/09/06 13:52:48 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class	HumanA
{
	private :
		std::string	name;
		Weapon&	weapon;
	public :
		void	attack(void);
		HumanA(std::string _name, Weapon& w);
};
