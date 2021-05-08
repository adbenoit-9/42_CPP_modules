/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:30:43 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/08 16:12:35 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    _value = 0;
}

Fixed::Fixed(const Fixed& nb)
{
    std::cout << "Copy constructor called" << std::endl;
    _value = nb._value;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}


int	    Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_value);
}

void	Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    _value = raw;
}

Fixed&	Fixed::operator = (const Fixed& nb) throw()
{
    std::cout << "Assignation operator called" << std::endl;
    if (this == &nb)
        return (*this);
    _value = nb._value;
    return (*this);
}
