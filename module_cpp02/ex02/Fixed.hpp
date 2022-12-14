/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:28:31 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/12 11:41:21 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Fixed
{
private:
    int fixed_point;
    const static int shift = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &a);
    Fixed(const int I);
    Fixed(const float F);
    int getRawBits() const;
    void setRawBits( int const raw );
    Fixed  operator = (const Fixed& t);
    float toFloat( void ) const;
    int toInt( void ) const;
    
    bool operator <(const Fixed &a)const;
    bool operator <=(const Fixed &a)const;
    bool operator >(const Fixed &a)const;
    bool operator >=(const Fixed &a)const;
    bool operator !=(const Fixed &a)const;
    bool operator ==(const Fixed &a)const;
    
    Fixed  operator +(const Fixed &a)const;
    Fixed  operator -(const Fixed &a)const;
    Fixed  operator *(const Fixed &a)const;
    Fixed  operator /(const Fixed &a)const;

    Fixed operator++();
    Fixed operator++(int);
    Fixed operator--();
    Fixed operator--(int);
    
    static const Fixed& min(const Fixed &a, const Fixed &b);
    static const Fixed& max(const Fixed &a, const Fixed &b); //why static 

    static Fixed& max(Fixed &a, Fixed &b);
    static Fixed& min(Fixed &a, Fixed &b);   
};
    std ::ostream& operator<<(std ::ostream& COUT,const Fixed &a);