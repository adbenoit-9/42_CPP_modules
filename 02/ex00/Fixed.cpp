/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:30:43 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/06 16:53:13 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    value = 0;
}

Fixed::Fixed(const Fixed& nb)
{
    std::cout << "Copy constructor called" << std::endl;
    value = nb.value;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}


int	    Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (value);
}

void	Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    value = raw;
}

Fixed&	Fixed::operator = (const Fixed& nb) throw()
{
    std::cout << "Assignation operator called" << std::endl;
    if (this == &nb)
        return (*this);
    value = nb.value;
    return (*this);
}
