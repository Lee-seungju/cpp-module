/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:43:21 by slee2             #+#    #+#             */
/*   Updated: 2021/11/04 08:51:17 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &wronganimal);
		WrongAnimal& operator=(WrongAnimal const &d);
		virtual ~WrongAnimal();
		void makeSound(void) const;
		std::string getType(void) const;
	protected:
		std::string	type;
};

#endif
