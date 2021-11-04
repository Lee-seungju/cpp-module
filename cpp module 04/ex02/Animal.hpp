/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 07:33:08 by slee2             #+#    #+#             */
/*   Updated: 2021/11/04 08:53:14 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
	public:
		Animal();
		Animal( const Animal& a);
		Animal& operator=(Animal const &c);
		virtual ~Animal();
		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
	protected:
		std::string	type;
};

#endif