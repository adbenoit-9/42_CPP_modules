/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:02:35 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/07 13:11:00 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

float Fixed::toFloat(void) const
{
    return ((float)_value / (float)(1 << _fractionalBits));
}

int Fixed::toInt(void) const
{
    return (_value >> _fractionalBits);
}