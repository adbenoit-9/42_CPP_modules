/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 20:05:00 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/09 20:51:07 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : ISquad()
{
    _numberUnit = 0;
    _spaceMarine = NULL;
}

Squad::Squad(const Squad& toCopy) ISquad(toCopy)
{
    _numberUnit = toCopy._numberUnit;
    _spaceMarine = new _ISpaceMarine*[_numberUnit];
    for (int i = 0; i < _numberUnit; i++)
    {
        _spaceMarine[i] = new ISpaceMarine;
        _spaceMarine[i] = toCopy._spaceMarine[i];
    }
}

Squad::~Squad(void)
{
    for (int i = 0; i < _numberUnit; i++)
        delete[] _spaceMarine[i];
    delete[] _spaceMarine;
}

int				Squad::getCount(void)
{
    return (_numberUnit);
}

ISpaceMarine*	Squad::getUnit(int n)
{
    if (n >= _numberUnit || n < 0)
        return (NULL);
    return (&_spaceMarine[n])
}

int				Squad::push(ISpaceMarine* newSM)
{
    if (!ISpaceMarine)
        return (_numberUnit);
    for (int i = 0; i < _numberUnit; i++)
        if (_spaceMarine[i] == newSM)
            return (_numberUnit);
    tmp = new ISpaceMarine*[_numberUnit + 1];
    for (int i = 0; i < _numberUnit; i++)
    {
        tmp[i] = new ISpaceMarine;
        tmp[i] = _spaceMarine[i];
        delete[] _spaceMarine[i];
    }
    delete[] _spaceMarine;
    tmp[_numberUnit] = newSM;
    _spaceMarine = tmp;
    ++_numberUnit;
    return (_numberUnit);
}
