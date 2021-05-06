/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 01:07:19 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/06 02:02:52 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon& w) : name(n), weapon(w) {}

void    HumanA::attack(void) const
{
    std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}
