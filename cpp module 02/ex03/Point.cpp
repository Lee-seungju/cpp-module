/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 00:46:25 by slee2             #+#    #+#             */
/*   Updated: 2021/10/09 04:32:25 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0) {}

Point::Point( const Point& p ): x(p.x), y(p.y) {}

Point& Point::operator=(const Point& p){
	this->x = p.x;
	this->y = p.y;
	return (*this);
}

Point::Point(const float _x, const float _y): x(_x), y(_y) {}

const Fixed	Point::get_x() const {
	return this->x;
}

const Fixed	Point::get_y() const {
	return this->y;
}

std::ostream&   operator<<(std::ostream &out, const Point &p) {
    out << p.get_x();
    return out;
}

Point::~Point() {}