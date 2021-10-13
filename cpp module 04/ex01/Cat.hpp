/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 08:02:51 by slee2             #+#    #+#             */
/*   Updated: 2021/10/13 13:10:12 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
	private:
		
	public:
		Brain *b;
		void makeSound(void) const;
		Cat();
		// Cat(Brain const *brain);
		~Cat();
		void setter(std::string mes, int len);
};

#endif