/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 01:02:06 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/06 02:11:21 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
}

Weapon::Weapon(std::string t)
{
    type = t;
}

const std::string&	Weapon::getType(void) const
{
    return (type);
}

void				Weapon::setType(std::string t)
{
    type = t;
}