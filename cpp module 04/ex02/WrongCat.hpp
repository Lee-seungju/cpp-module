/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:45:17 by slee2             #+#    #+#             */
/*   Updated: 2021/10/14 00:03:42 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
		public:
		void makeSound(void) const;
		WrongCat();
		~WrongCat();
		WrongCat(WrongCat const &wrongcat);
		WrongCat& operator=(WrongCat const &d);
};

#endif