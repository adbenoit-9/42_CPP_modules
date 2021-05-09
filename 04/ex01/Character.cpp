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
	_name = name;
	_AP = 40;
	_weapon = NULL;
}

Character::Character(Character const & toCopy)
{
	_name = toCopy._name;
	_AP = toCopy._AP;
	_weapon = toCopy._weapon;
}

Character::~Character(void)
{
	
}

Character&	Character::operator = (const Character& toCopy)
{
	_name = toCopy._name;
	_AP = toCopy._AP;
	_weapon = toCopy._weapon;
	return (*this);
}

std::string Character::getName(void) const
{
	return (_name);
}

void    	Character::recoverAP(void)
{
	_AP += 10;
	if (_AP > 40)
		_AP = 40;
}

void    	Character::equip(AWeapon *weapon)
{
	_weapon = weapon;
}

void		Character::attack(Enemy *enemy)
{
	if (_weapon && _AP >= _weapon->getAPCost())
	{
		std::cout	<< _name << " attacks " << enemy->getType()
					<< " with a " << _weapon->getName() << std::endl;
		_weapon->attack();
		_AP -= _weapon->getAPCost();
		enemy->takeDamage(_weapon->getDamage());
		if (enemy->getHP() == 0)
			delete enemy;
	}
}

int          Character::getAP(void) const
{
	return (_AP);
}

AWeapon		*Character::getWeapon(void) const
{
	return (_weapon);
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
