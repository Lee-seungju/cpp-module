/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:30:53 by slee2             #+#    #+#             */
/*   Updated: 2021/11/23 21:36:36 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	char	a[4] = {'a', 'b', 'c', 'd'};

	iter(a, (sizeof(a) / sizeof(*a)), print);

	return 0;
}