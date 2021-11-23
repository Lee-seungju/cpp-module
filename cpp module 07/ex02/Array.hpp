/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:40:17 by slee2             #+#    #+#             */
/*   Updated: 2021/11/23 22:56:21 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array {
	private:
		std::size_t len;
		T*	d;
	public:
		class LimitException: public std::exception {
			public:
				const char* what(void) const throw() {
					return ("LimitException");
				}
		};
		std::size_t getLen() const { return len; }
		Array(): len(0), d(NULL) {}
		Array(unsigned int n): len(n), d(NULL) {
			if (n > 0)
				d = new T[n];
		}
		Array(const Array& a): len(a.getLen()), d(NULL) {
			if (len > 0)
				d = new T[len];
			for(std::size_t i=0; i < len; i++)
				d[i] = a[i];
		}
		~Array() {
			if (len > 0) {
				delete[] d;
				d = NULL;
				len = 0;
			}
		}
		T&	operator[](std::size_t i) {
			if (i >= len)
				throw (LimitException());
			return (d[i]);
		}
		const T&	operator[](std::size_t i) const {
			if (i >= len)
				throw (LimitException());
			return (d[i]);
		}
		Array&	operator=(const Array& a) {
			if (len > 0) {
				delete[] d;
				d = NULL;
				len = 0;
			}
			len = a.getLen();
			if (len > 0)
				d = new T[len];
			for(std::size_t i=0; i<len; i++)
				d[i] = a[i];
			return *this;
		}
};

#endif