/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 07:56:14 by slee2             #+#    #+#             */
/*   Updated: 2021/11/04 08:49:18 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal {
	public:
		Dog();
		~Dog();
		Dog(Dog const &dog);
		Dog& operator=(Dog const &d);
		void makeSound(void) const ;
};

#endif