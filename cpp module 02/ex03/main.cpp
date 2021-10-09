/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 07:48:33 by slee2             #+#    #+#             */
/*   Updated: 2021/10/09 14:03:05 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
  Point a1(4, 0);
  Point b1(4, 2);
  Point c1(4, 4);
  Point p1(4, 1);
  
  Point a2(0, 0);
  Point b2(0, 4);
  Point c2(4, 0);
  Point p2(0, 0);

  Point a3(0, 0);
  Point b3(0, 4);
  Point c3(4, 0);
  Point p3(1, 1);

  Point a4(0, 0);
  Point b4(0, 4);
  Point c4(4, 0);
  Point p4(2, 2);

  Point a5(0, 0);
  Point b5(0, 4);
  Point c5(4, 0);
  Point p5(2, 1.923323);

  std::cout << "p1(4, 1) - ";
  std::cout << bsp(a1, b1, c1, p1) << std::endl;
  std::cout << "p2(0, 0) - ";
  std::cout << bsp(a2, b2, c2, p2) << std::endl;
  std::cout << "p3(1, 1) - ";
  std::cout << bsp(a3, b3, c3, p3) << std::endl;
  std::cout << "p4(2, 2) - ";
  std::cout << bsp(a4, b4, c4, p4) << std::endl;
  std::cout << "p5(2, 1.923323) - ";
  std::cout << bsp(a5, b5, c5, p5) << std::endl;

  return 0;
}
