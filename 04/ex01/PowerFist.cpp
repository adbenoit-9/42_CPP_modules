/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 12:27:03 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/09 16:38:31 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{

}

PowerFist::PowerFist(PowerFist const & toCopy) : AWeapon(toCopy) {}

PowerFist::~PowerFist(void)
{
	
}

PowerFist&	PowerFist::operator = (const PowerFist& toCopy)
{
	_name = toCopy._name;
	_APCost = toCopy._APCost;
	_damage = toCopy._damage;
	return (*this);
}

void	PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
