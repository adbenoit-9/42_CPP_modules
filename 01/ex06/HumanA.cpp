/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 01:07:19 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/07 13:02:13 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon& w) : _weapon(w), _name(n) {}

void    HumanA::attack(void) const
{
    std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}
