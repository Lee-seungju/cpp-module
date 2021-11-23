/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:12:47 by slee2             #+#    #+#             */
/*   Updated: 2021/11/23 21:35:47 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T* arr, std::size_t size, void (*f)(const T&)) {
	for(std::size_t i=0; i < size; i++)
		f(arr[i]);
}

template <typename T>
void	print(const T& a) {
	std::cout << a << std::endl;
}

#endif