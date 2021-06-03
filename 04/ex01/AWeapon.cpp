/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 11:27:43 by adbenoit          #+#    #+#             */
/*   Updated: 2021/06/03 12:22:49 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	AWeapon::_name = name;
	this->_APCost = apcost;
	this->_damage = damage;
}

AWeapon::AWeapon(AWeapon const & toCopy)
{
	this->_name = toCopy.getName();
	this->_APCost = toCopy.getAPCost();
	this->_damage = toCopy.getDamage();
}

AWeapon::~AWeapon(void)
{
	
}

AWeapon&	AWeapon::operator = (const AWeapon& toCopy)
{
	this->_name = toCopy.getName();
	this->_APCost = toCopy.getAPCost();
	this->_damage = toCopy.getDamage();
	return (*this);
}

std::string AWeapon::getName(void) const
{
	return (this->_name);
}

int AWeapon::getAPCost(void) const
{
	return (this->_APCost);
}

int AWeapon::getDamage(void) const
{
	return (this->_damage);
}
