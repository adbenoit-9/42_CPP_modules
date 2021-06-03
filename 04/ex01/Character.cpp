/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 15:48:51 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/09 16:40:49 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name)
{
	this->_name = name;
	this->_AP = 40;
	this->_weapon = NULL;
}

Character::Character(Character const & toCopy)
{
	this->_name = toCopy.getName();
	this->_AP = toCopy.getAP();
	this->_weapon = toCopy.getWeapon();
}

Character::~Character(void)
{
	
}

Character&	Character::operator = (const Character& toCopy)
{
	this->_name = toCopy.getName();
	this->_AP = toCopy.getAP();
	this->_weapon = toCopy.getWeapon();
	return (*this);
}

std::string Character::getName(void) const
{
	return (this->_name);
}

void    	Character::recoverAP(void)
{
	this->_AP += 10;
	if (this->_AP > 40)
		this->_AP = 40;
}

void    	Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

void		Character::attack(Enemy *enemy)
{
	if (this->_weapon && this->_AP >= this->_weapon->getAPCost())
	{
		std::cout	<< this->_name << " attacks " << enemy->getType()
					<< " with a " << this->_weapon->getName() << std::endl;
		this->_weapon->attack();
		this->_AP -= this->_weapon->getAPCost();
		enemy->takeDamage(this->_weapon->getDamage());
		if (enemy->getHP() == 0)
			delete enemy;
	}
}

int          Character::getAP(void) const
{
	return (this->_AP);
}

AWeapon		*Character::getWeapon(void) const
{
	return (this->_weapon);
}

std::ostream&	operator << (std::ostream& os, const Character& character)
{
	if (character.getWeapon())
	{
		std::cout	<< character.getName() << " has " << character.getAP()
					<< " AP and wields a " << (character.getWeapon())->getName() << std::endl;
		return (os);
	}
	std::cout	<< character.getName() << " has " << character.getAP()
				<< " AP and is unarmed" << std::endl;
	return (os);
}
