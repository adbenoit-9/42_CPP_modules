/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 01:11:29 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/06 02:06:37 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n)
{
    name = n;
}

void    HumanB::setWeapon(Weapon& w)
{
    weapon = &w;
}

void    HumanB::attack(void) const
{
    std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}
