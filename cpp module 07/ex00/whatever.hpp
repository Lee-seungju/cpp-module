/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:57:24 by slee2             #+#    #+#             */
/*   Updated: 2021/11/23 21:07:30 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap(T& a, T& b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T	min(T& a, T& b) {
	if (a < b)
		return a;
	return b;
}

template <typename T>
T	max(T& a, T& b) {
	if (a > b)
		return a;
	return b;
}

#endif