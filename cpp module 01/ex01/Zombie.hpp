/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 00:21:28 by slee2             #+#    #+#             */
/*   Updated: 2021/09/01 18:43:02 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>

class Zombie
{
    private:
        int         num;
        std::string *name;
    public:
        void    announce(void);

        Zombie(int num, std::string z_name);
        ~Zombie(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif