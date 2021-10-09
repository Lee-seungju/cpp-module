/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 04:03:09 by slee2             #+#    #+#             */
/*   Updated: 2021/10/10 04:56:05 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
	public:
		FragTrap();
		FragTrap( std::string name);
		~FragTrap();
		FragTrap&	operator=( FragTrap const& frag);
		void	highFivesGuys(void);
};

#endif