/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 12:27:03 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/09 16:38:47 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & toCopy) : AWeapon(toCopy) {}

PlasmaRifle::~PlasmaRifle(void)
{
	
}

PlasmaRifle&	PlasmaRifle::operator = (const PlasmaRifle& toCopy)
{
	_name = toCopy._name;
	_APCost = toCopy._APCost;
	_damage = toCopy._damage;
	return (*this);
}

void	PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
