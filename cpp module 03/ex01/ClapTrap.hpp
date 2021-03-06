/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 05:45:17 by slee2             #+#    #+#             */
/*   Updated: 2021/11/01 22:42:16 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
	protected:
		std::string	Name;
		unsigned int	Hitpoints;
		unsigned int	energy;
		unsigned int	damage;
	public:
		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		ClapTrap&	operator=( ClapTrap const& clap);
		ClapTrap( const ClapTrap& clap);
		ClapTrap(std::string name);
		ClapTrap();
		~ClapTrap();
};

#endif
