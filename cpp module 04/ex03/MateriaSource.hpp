/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 03:34:20 by slee2             #+#    #+#             */
/*   Updated: 2021/10/18 06:18:40 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	protected:
		AMateria* inven[4];
		int	count;
	public:
		MateriaSource();
		~MateriaSource();
		void learnMateria(AMateria* a);
		AMateria* createMateria(std::string const & type);
};

#endif