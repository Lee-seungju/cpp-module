/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 23:39:38 by slee2             #+#    #+#             */
/*   Updated: 2021/10/09 03:55:14 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point();
		~Point();
		Point( const Point& p);
		Point& operator=(const Point& p);
		Point(const float _x, const float _y);
		const Fixed get_x() const;
		const Fixed get_y() const;
};

std::ostream&   operator<<(std::ostream &out, const Point &p);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif