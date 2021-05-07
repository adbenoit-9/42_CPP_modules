/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 01:02:06 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/07 12:50:05 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
}

Weapon::Weapon(std::string type)
{
    _type = type;
}

const std::string&	Weapon::getType(void) const
{
    return (_type);
}

void				Weapon::setType(std::string type)
{
    _type = type;
}