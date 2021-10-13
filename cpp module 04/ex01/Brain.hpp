/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:54:58 by slee2             #+#    #+#             */
/*   Updated: 2021/10/13 13:10:13 by slee2            ###   ########.fr       */
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
		void setter(std::string mes, int len);
};

#endif