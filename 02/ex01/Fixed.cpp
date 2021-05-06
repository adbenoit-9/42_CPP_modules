/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:30:43 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/07 00:39:57 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    value = 0;
}

Fixed::Fixed(const int nb)
{
    std::cout << "Int constructor called" << std::endl;
    value = nb << fractionalBits;
}

Fixed::Fixed(const float nb)
{
    std::cout << "Float constructor called" << std::endl;
    value = roundf(nb * (1 << fractionalBits));
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
