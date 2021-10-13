/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 07:56:14 by slee2             #+#    #+#             */
/*   Updated: 2021/10/13 23:49:57 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal {
	public:
		void makeSound(void) const ;
		Dog();
		~Dog();
		Dog(Dog const &dog);
		Dog& operator=(Dog const &d);
};

#endif