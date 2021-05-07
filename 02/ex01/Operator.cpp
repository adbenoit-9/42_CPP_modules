/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Operator.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 00:38:47 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/07 13:10:27 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed&	Fixed::operator = (const Fixed& nb) throw()
{
    std::cout << "Assignation operator called" << std::endl;
    if (this == &nb)
        return (*this);
    _value = nb._value;
    return (*this);
}

std::ostream&	operator << (std::ostream& os, const Fixed& nb) throw()
{
    os << nb.toFloat();
    return (os);
}
