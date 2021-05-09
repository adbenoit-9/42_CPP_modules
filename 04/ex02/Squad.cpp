/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 20:05:00 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/10 00:11:01 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : ISquad()
{
    _numberUnit = 0;
    _spaceMarine = NULL;
}

Squad::Squad(const Squad& toCopy) : ISquad(toCopy)
{
    _numberUnit = toCopy._numberUnit;
    _spaceMarine = new ISpaceMarine*[_numberUnit];
    for (int i = 0; i < _numberUnit; i++)
        _spaceMarine[i] = toCopy._spaceMarine[i]->clone();
}

Squad::~Squad(void)
{
    for (int i = 0; i < _numberUnit; i++)
        delete _spaceMarine[i];
    delete[] _spaceMarine;
}

Squad& Squad::operator = (const Squad& toCopy)
{
    _numberUnit = toCopy._numberUnit;
    _spaceMarine = new ISpaceMarine*[_numberUnit];
    for (int i = 0; i < _numberUnit; i++)
        _spaceMarine[i] = toCopy._spaceMarine[i]->clone();
    return (*this);
}

int				Squad::getCount(void) const
{
    return (_numberUnit);
}

ISpaceMarine*	Squad::getUnit(int n) const
{
    if (n >= _numberUnit || n < 0)
        return (NULL);
    return (_spaceMarine[n]);
}

int				Squad::push(ISpaceMarine* add)
{
    if (!add)
        return (_numberUnit);
    for (int i = 0; i < _numberUnit; i++)
        if (_spaceMarine[i] == add)
            return (_numberUnit);
    ISpaceMarine **tmp = new ISpaceMarine*[_numberUnit + 1];
    for (int i = 0; i < _numberUnit; i++)
        tmp[i] = _spaceMarine[i];
    delete[] _spaceMarine;
    tmp[_numberUnit] = add;
    _spaceMarine = tmp;
    ++_numberUnit;
    return (_numberUnit);
}
