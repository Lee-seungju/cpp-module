/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:54:58 by slee2             #+#    #+#             */
/*   Updated: 2021/10/13 23:34:19 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
	private:
		std::string	*ideas;
	public:
		Brain();
		~Brain();
		Brain(Brain const &b);
		Brain&  operator=(Brain const &br);
		void setter(std::string mes, int len);
		std::string getter(void);
};

#endif