/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 00:21:28 by slee2             #+#    #+#             */
/*   Updated: 2021/09/01 18:43:02 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->setRawBits(0);
}

Fixed::Fixed( const int r) {
    std::cout << "Int constructor called" << std::endl;
    this->setRawBits(r << this->frac_bit);
}

Fixed::Fixed( const float f) {
    std::cout << "Float constructor called" << std::endl;
    this->setRawBits(roundf(f * (1 << this->frac_bit)));
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

float   Fixed::toFloat(void) const {
    return (float)this->fix_value / (1 << this->frac_bit);
}

int    Fixed::toInt( void ) const {
    return this->fix_value >> this->frac_bit;
}

Fixed&   Fixed::operator=(Fixed const &fix) {
    std::cout << "Assignation operator called" << std::endl;
    this->fix_value = fix.fix_value;
    return *this;
}

std::ostream&   operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}
