/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:17:59 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/12 08:47:03 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    value = 0;
    std :: cout << "Default constructor called\n";  
}

Fixed::Fixed(const Fixed &a)
{
    std :: cout << "Copy constructor called\n";
    *this = a;
}

Fixed::~Fixed()
{
    std :: cout << "Destructor called\n";
}

int Fixed:: getRawBits(void) const
{
    std :: cout << "getRawBits member function called\n";
    return value;
}

void Fixed:: setRawBits( int const raw )
{
    this->value = raw;
}

Fixed& Fixed:: operator =(const Fixed &a)
{
    std::cout << "copy assingment operator called\n";
    this->value = a.getRawBits();
    return *this;
}
