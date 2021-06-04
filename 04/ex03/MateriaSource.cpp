/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 18:14:14 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/10 22:09:47 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : IMateriaSource(), _count(0) {}

MateriaSource::MateriaSource(const MateriaSource& toCopy) : IMateriaSource(toCopy), _count(toCopy.getCount())
{
    for (int i = 0; i < _count; ++i)
        _inventory[i] = toCopy._inventory[i];
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < _count; ++i)
        delete _inventory[i];
}

MateriaSource&  MateriaSource::operator = (const MateriaSource& toCopy)
{
    for (int i = 0; i < _count; ++i)
        delete _inventory[i];
    _count = toCopy._count;
    for (int i = 0; i < _count; ++i)
        _inventory[i] = toCopy._inventory[i];
    return (*this);
}

void            MateriaSource::learnMateria(AMateria* m)
{
    if (_count < 4)
    {
        _inventory[_count] = m;
        ++_count;
    }
}

AMateria*       MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < _count; ++i)
    {
        if (_inventory[i]->getType().compare(type) == 0)
            return (_inventory[i]->clone());
    }
    return (0);
}
