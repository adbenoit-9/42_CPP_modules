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

Character::Character(const std::string& name) : ICharacter()
{
	_name = name;
	_numberMateria = 0;
}
Character::Character(const Character& toCopy) : ICharacter(toCopy)
{
	_name = toCopy._name;
	_numberMateria = toCopy._numberMateria;
	for (int i = 0; i < _numberMateria; i++)
		_materia[i] = toCopy._materia[i]->clone();
}

Character::~Character(void)
{
	for (int i = 0; i < _numberMateria; i++)
		delete _materia[i];
}

Character& Character::operator = (const Character& toCopy)
{
	_name = toCopy._name;
	for (int i = 0; i < _numberMateria; i++)
		delete _materia[i];
	_numberMateria = toCopy._numberMateria;
	for (int i = 0; i < _numberMateria; i++)
		_materia[i] = toCopy._materia[i]->clone();
	return (*this);
}

std::string const & Character::getName(void) const
{
	return (_name);
}

void				Character::equip(AMateria* m)
{
	if (_numberMateria == 4 || !m)
		return ;
	_materia[_numberMateria] = m->clone();
	++_numberMateria;
}

void				Character::unequip(int idx)
{
	if (idx >= _numberMateria)
		return ;
	for (int i = idx; i < _numberMateria - 1; i++)
		_materia[i] = _materia[i + 1];
}

void				Character::use(int idx, ICharacter& target)
{
	if (idx >= _numberMateria)
		return ;
	_materia[idx]->use(target);
}

