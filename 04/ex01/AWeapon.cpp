/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 11:27:43 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/09 13:10:24 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	_name = name;
	_APCost = apcost;
	_damage = damage;
}

AWeapon::AWeapon(AWeapon const & toCopy)
{
	_name = toCopy._name;
	_APCost = toCopy._APCost;
	_damage = toCopy._damage;
}

AWeapon::~AWeapon(void)
{
	
}

AWeapon&	AWeapon::operator = (const AWeapon& toCopy)
{
	_name = toCopy._name;
	_APCost = toCopy._APCost;
	_damage = toCopy._damage;
	return (*this);
}

std::string AWeapon::getName(void) const
{
	return (_name);
}

int AWeapon::getAPCost(void) const
{
	return (_APCost);
}

int AWeapon::getDamage(void) const
{
	return (_damage);
}
