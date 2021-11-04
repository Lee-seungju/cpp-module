/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 07:56:14 by slee2             #+#    #+#             */
/*   Updated: 2021/10/13 23:36:18 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
	public:
		Dog();
		Dog(Dog const &dog);
		Dog(const Brain &brain);
		Dog& operator=(Dog const &d);
		~Dog();
		void makeSound(void) const ;
		void setter(std::string mes, int len);
		std::string getter(void);
	private:
		Brain *b;
};

#endif