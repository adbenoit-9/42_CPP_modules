/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 01:11:29 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/07 12:49:16 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    _name = name;
}

void    HumanB::setWeapon(Weapon& w)
{
    _weapon = &w;
}

void    HumanB::attack(void) const
{
    std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}
