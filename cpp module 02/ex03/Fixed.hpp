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

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    private:
        int fix_value;
        static const int    frac_bit = 8;
    public:
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;
        Fixed&  operator=(Fixed const &fix) const;
        Fixed  operator*(Fixed const &fix) const;
        Fixed  operator/(Fixed const &fix) const;
        Fixed  operator+(Fixed const &fix) const;
        Fixed  operator-(Fixed const &fix) const;
        bool  operator>(Fixed const &fix) const;
        bool  operator<(Fixed const &fix) const;
        bool  operator>=(Fixed const &fix) const;
        bool  operator<=(Fixed const &fix) const;
        bool  operator==(Fixed const &fix) const;
        bool  operator!=(Fixed const &fix) const;
        Fixed  operator++(int);
        Fixed&  operator++();
        Fixed  operator--(int);
        Fixed&  operator--();
        Fixed();
        Fixed( const int r);
        Fixed( const float f);
        ~Fixed();
        Fixed( const Fixed& fix);
        static Fixed&   max(Fixed &a, Fixed &b);
        static Fixed const &max(Fixed const &a, Fixed const &b);
        static Fixed&   min(Fixed &a, Fixed &b);
        static Fixed const &min(Fixed const &a, Fixed const &b);
};

std::ostream&   operator<<(std::ostream &out, const Fixed &fixed);

#endif