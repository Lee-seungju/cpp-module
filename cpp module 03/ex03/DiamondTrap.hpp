/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 04:27:15 by slee2             #+#    #+#             */
/*   Updated: 2021/10/10 05:16:10 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap {
	private:
		std::string Name;
	public:
		DiamondTrap();
		DiamondTrap( std::string n);
		~DiamondTrap();
		void	attack( std::string a);
		DiamondTrap&	operator=( DiamondTrap const& Diamond);
		void	whoAmI();
};

#endif