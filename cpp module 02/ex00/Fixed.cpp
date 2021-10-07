/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 00:21:28 by slee2             #+#    #+#             */
/*   Updated: 2021/10/07 09:46:17 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->setRawBits(0);
}

Fixed::Fixed( const Fixed& fix) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fix;
}

int     Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->fix_value;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

void    Fixed::setRawBits( int const raw ) {
    this->fix_value = raw;
}

Fixed&  Fixed::operator=(const Fixed& fix) {
    std::cout << "Assignation operator called" << std::endl;
    this->setRawBits(fix.getRawBits());
    return *this;
}
