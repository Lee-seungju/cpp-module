/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:30:53 by slee2             #+#    #+#             */
/*   Updated: 2021/11/23 22:42:13 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	std::cout << "---exception test---" << std::endl;
	try {
		Array<char> a(5);
		a[0] = 'a';
		a[1] = 'b';
		a[6] = 'c';
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	Array<char> a(5);
	a[0] = 'a';
	a[1] = 'b';

	Array<char> b;
	b = a;

	std::cout << "---=operator test---" << std::endl;
	
	std::cout << b[0] << std::endl;

	std::cout << std::endl;
	std::cout << "---Copy test---" << std::endl;

	Array<char> c(a);

	std::cout << c[0] << std::endl;

	return 0;
}