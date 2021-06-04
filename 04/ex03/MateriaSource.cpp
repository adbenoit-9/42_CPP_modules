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

MateriaSource::MateriaSource(const MateriaSource& toCopy) :
IMateriaSource(toCopy),
_count(toCopy.getCount())
{
    for (int i = 0; i < this->_count; ++i)
        this->_inventory[i] = toCopy.getMateria(i);
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < this->_count; ++i)
        delete this->_inventory[i];
}

MateriaSource&  MateriaSource::operator = (const MateriaSource& toCopy)
{
    for (int i = 0; i < this->_count; ++i)
        delete this->_inventory[i];
    this->_count = toCopy.getCount();
    for (int i = 0; i < this->_count; ++i)
        this->_inventory[i] = toCopy.getMateria(i);
    return (*this);
}

int					MateriaSource::getCount(void) const
{
	return (this->_count);
}

AMateria*			MateriaSource::getMateria(int i) const
{
	return (this->_inventory[i]->clone());
}

void            MateriaSource::learnMateria(AMateria* m)
{
    if (this->_count < 4)
    {
        this->_inventory[this->_count] = m;
        ++this->_count;
    }
}

AMateria*       MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < this->_count; ++i)
    {
        if (this->_inventory[i]->getType().compare(type) == 0)
            return (this->_inventory[i]->clone());
    }
    return (0);
}
