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
	this->_HP = hp;
	this->_type = type;
}

Enemy::Enemy(Enemy const & toCopy)
{
	this->_HP = toCopy.getHP();
	this->_type = toCopy.getType();
}

Enemy::~Enemy(void)
{
	
}

Enemy&		Enemy::operator = (const Enemy& toCopy)
{
	this->_HP = toCopy.getHP();
	this->_type = toCopy.getType();
	return (*this);
}

std::string Enemy::getType(void) const
{
	return (this->_type);
}

int 		Enemy::getHP(void) const
{
	return (this->_HP);
}

void		Enemy::takeDamage(int amount)
{
	this->_HP -= amount;
	if (this->_HP < 0)
		this->_HP = 0;
}
