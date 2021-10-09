/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 03:48:52 by slee2             #+#    #+#             */
/*   Updated: 2021/10/09 14:02:32 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	check_in(Point const l1, Point const l2, Point const p, bool *flag) {
	Fixed	a;
	Fixed	b;
	Fixed	new_p_x;

	if (l1.get_y() - l2.get_y() == 0) {
		if (p.get_y() == l1.get_y())
			*flag = true;
		return 0;
	}
	if (l1.get_x() - l2.get_x() == 0) {
		if (p.get_x() < l1.get_x() && \
			p.get_y() > Fixed::min(l1.get_y(), l2.get_y()) && \
			p.get_y() < Fixed::max(l1.get_y(), l2.get_y()))
			return 1;
		else if (p.get_x() == l1.get_x() && \
			p.get_y() >= Fixed::min(l1.get_y(), l2.get_y()) && \
			p.get_y() <= Fixed::max(l1.get_y(), l2.get_y()))
				*flag = true;
		return 0;
	}
	a = (l1.get_y() - l2.get_y()) / (l1.get_x() - l2.get_x());
	b = l1.get_y() - a * l1.get_x();
	new_p_x = (p.get_y() - b) / a;
	if (p.get_x() < new_p_x && \
			p.get_y() > Fixed::min(l1.get_y(), l2.get_y()) && \
			p.get_y() < Fixed::max(l1.get_y(), l2.get_y()))
		return 1;
	if (p.get_x() == new_p_x)
		*flag = true;
	return 0;
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	
	if ((a.get_x() == b.get_x() && b.get_x() == c.get_x()) || \
		(a.get_y() == b.get_y() && b.get_y() == c.get_y()))
		return false;
	int count = 0;
	bool flag = false;
	count += check_in(a, b, point, &flag);
	count += check_in(a, c, point, &flag);
	count += check_in(b, c, point, &flag);
	if (flag)
		return false;
	if (count % 2 == 1)
		return true;
	return false;
}
