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
    this->_count = 0;
    this->_units = NULL;
}

Squad::Squad(const Squad& toCopy) : ISquad(toCopy)
{
    this->_count = toCopy.getCount();
    this->_units = new ISpaceMarine*[this->_count];
    for (int i = 0; i < this->_count; i++)
        this->_units[i] = toCopy.getUnit(i)->clone();
}

Squad::~Squad(void)
{
    for (int i = 0; i < this->_count; i++)
        delete this->_units[i];
    delete[] this->_units;
}

Squad& Squad::operator = (const Squad& toCopy)
{
    if (this->_units)
    {
        for (int i = 0; i < this->_count; i++)
            delete this->_units[i];
        delete[] this->_units;
    }
    this->_count = toCopy.getCount();
    this->_units = new ISpaceMarine*[this->_count];
    for (int i = 0; i < this->_count; i++)
        this->_units[i] = toCopy.getUnit(i)->clone();
    return (*this);
}

int				Squad::getCount(void) const
{
    return (this->_count);
}

ISpaceMarine*	Squad::getUnit(int n) const
{
    if (n >= this->_count || n < 0)
        return (NULL);
    return (this->_units[n]);
}

int				Squad::push(ISpaceMarine* add)
{
    if (!add)
        return (this->_count);
    for (int i = 0; i < this->_count; i++)
        if (this->_units[i] == add)
            return (this->_count);
    ISpaceMarine **tmp = new ISpaceMarine*[this->_count + 1];
    for (int i = 0; i < this->_count; i++)
        tmp[i] = this->_units[i];
    delete[] this->_units;
    tmp[this->_count] = add;
    this->_units = tmp;
    ++this->_count;
    return (this->_count);
}
