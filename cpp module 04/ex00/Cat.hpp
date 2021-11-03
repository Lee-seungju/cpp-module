/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 08:02:51 by slee2             #+#    #+#             */
/*   Updated: 2021/11/04 08:49:06 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal {
	public:
		Cat();
		Cat(Cat const &cat);
		Cat&  operator=(Cat const &c);
		~Cat();
		void makeSound(void) const;
};

#endif