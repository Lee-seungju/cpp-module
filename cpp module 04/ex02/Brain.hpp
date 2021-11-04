/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:54:58 by slee2             #+#    #+#             */
/*   Updated: 2021/11/04 08:52:57 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
	public:
		Brain();
		Brain(Brain const &b);
		Brain&  operator=(Brain const &br);
		~Brain();
		void setter(std::string mes, int len);
		std::string getter(void);
	private:
		std::string	*ideas;
};

#endif