/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 11:27:43 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/09 13:28:50 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
{
	_hp = hp;
	_type = type;
}

Enemy::Enemy(Enemy const & toCopy)
{
	_hp = toCopy._hp;
	_type = toCopy._type;
}

Enemy::~Enemy(void)
{
	
}

Enemy&		Enemy::operator = (const Enemy& toCopy)
{
	_hp = toCopy._hp;
	_type = toCopy._type;
	return (*this);
}

std::string Enemy::getType(void) const
{
	return (_type);
}

int 		Enemy::getHP(void) const
{
	return (_hp);
}

void		Enemy::takeDamage(int amount)
{
	_hp -= amount;
	if (_hp < 0)
		_hp = 0;
}
