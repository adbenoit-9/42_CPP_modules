/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:35:13 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/10 22:10:25 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string& name) : ICharacter(), _name(name), _count(0) {}

Character::Character(const Character& toCopy) :
ICharacter(toCopy),
_name(toCopy.getName()),
_count(toCopy.getCount())
{
	for (int i = 0; i < this->_count; i++)
		this->_inventory[i] = toCopy.getMateria(i);
}

Character::~Character(void)
{
	for (int i = 0; i < this->_count; i++)
		delete this->_inventory[i];
}

Character& Character::operator = (const Character& toCopy)
{
	for (int i = 0; i < this->_count; i++)
		delete this->_inventory[i];
	this->_count = toCopy.getCount();
	for (int i = 0; i < this->_count; i++)
		this->_inventory[i] = toCopy.getMateria(i);
	return (*this);
}

std::string const & Character::getName(void) const
{
	return (this->_name);
}
int					Character::getCount(void) const
{
	return (this->_count);
}

AMateria*			Character::getMateria(int i) const
{
	return (this->_inventory[i]->clone());
}


void				Character::equip(AMateria* m)
{
	if (this->_count == 4 || !m)
		return ;
	this->_inventory[this->_count] = m->clone();
	++this->_count;
}

void				Character::unequip(int idx)
{
	if (idx >= this->_count)
		return ;
	for (int i = idx; i < this->_count - 1; i++)
		this->_inventory[i] = this->_inventory[i + 1];
}

void				Character::use(int idx, ICharacter& target)
{
	if (idx >= this->_count)
		return ;
	this->_inventory[idx]->use(target);
}

