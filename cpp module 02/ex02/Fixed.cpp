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
    this->setRawBits(0);
}

Fixed::Fixed( const int r) {
    this->setRawBits(r << this->frac_bit);
}

Fixed::Fixed( const float f) {
    this->setRawBits(roundf(f * (1 << this->frac_bit)));
}

Fixed::Fixed( const Fixed& fix) {
    *this = fix;
}

int     Fixed::getRawBits( void ) const {
    return this->fix_value;
}

Fixed::~Fixed() {
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

Fixed&  Fixed::operator*(Fixed const &fix) {
    this->fix_value *= fix.fix_value;
    this->fix_value = this->toFloat();
    return *this;
}

Fixed&  Fixed::operator/(Fixed const &fix) {
    this->fix_value /= fix.fix_value;
    this->fix_value = this->toFloat();
    return *this;
}

Fixed&  Fixed::operator+(Fixed const &fix) {
    this->fix_value += fix.fix_value;
    this->fix_value = this->toFloat();
    return *this;
}

Fixed&  Fixed::operator-(Fixed const &fix) {
    this->fix_value -= fix.fix_value;
    this->fix_value = this->toFloat();
    return *this;
}

bool  Fixed::operator>(Fixed const &fix) const {
    if (this->fix_value > fix.fix_value)
        return true;
    return false;
}

bool  Fixed::operator<(Fixed const &fix) const {
    if (this->fix_value < fix.fix_value)
        return true;
    return false;
}

bool  Fixed::operator>=(Fixed const &fix) const {
    if (this->fix_value >= fix.fix_value)
        return true;
    return false;
}

bool  Fixed::operator<=(Fixed const &fix) const {
    if (this->fix_value <= fix.fix_value)
        return true;
    return false;
}

bool  Fixed::operator==(Fixed const &fix) const {
    if (this->fix_value == fix.fix_value)
        return true;
    return false;
}

bool  Fixed::operator!=(Fixed const &fix) const {
    if (this->fix_value != fix.fix_value)
        return true;
    return false;
}

Fixed  Fixed::operator++(int) {
    Fixed   a(*this);

    this->fix_value++;
    return a;
}

Fixed&  Fixed::operator++() {
    this->fix_value++;
    return *this;
}

Fixed  Fixed::operator--(int) {
     Fixed   a(*this);

    this->fix_value--;
    return a;
}

Fixed&  Fixed::operator--() {
    this->fix_value--;
    return *this;
}

Fixed&   Fixed::max(Fixed &a, Fixed &b) {
    if (a > b)
        return a;
    return b;
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b) {
    if (a > b)
        return a;   
    return b;
}

Fixed&   Fixed::min(Fixed &a, Fixed &b) {
    if (a < b)
        return a;
    return b;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b) {
    if (a < b)
        return a;
    return b;
}

std::ostream&   operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}
