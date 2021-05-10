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

MateriaSource::MateriaSource(void) : IMateriaSource()
{
    _numberMateria = 0;
}

MateriaSource::MateriaSource(const MateriaSource& toCopy) : IMateriaSource(toCopy)
{
    _numberMateria = toCopy._numberMateria;
    for (int i = 0; i < _numberMateria; ++i)
        _materia[i] = toCopy._materia[i];
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < _numberMateria; ++i)
        delete _materia[i];
}

MateriaSource&  MateriaSource::operator = (const MateriaSource& toCopy)
{
    for (int i = 0; i < _numberMateria; ++i)
        delete _materia[i];
    _numberMateria = toCopy._numberMateria;
    for (int i = 0; i < _numberMateria; ++i)
        _materia[i] = toCopy._materia[i];
    return (*this);
}

void            MateriaSource::learnMateria(AMateria* m)
{
    if (_numberMateria < 4)
    {
        _materia[_numberMateria] = m;
        ++_numberMateria;
    }
}

AMateria*       MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < _numberMateria; ++i)
    {
        if (_materia[i]->getType().compare(type) == 0)
            return (_materia[i]->clone());
    }
    return (0);
}
