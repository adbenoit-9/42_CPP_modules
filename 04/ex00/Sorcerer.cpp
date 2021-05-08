/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 21:27:53 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/08 22:37:56 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
    _name = name;
    _title = title;
    std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& toCopy)
{
    _name = toCopy._name;
    _title = toCopy._title;
}

Sorcerer::~Sorcerer(void)
{
    std::cout   << _name << ", " << _title
                << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer&   Sorcerer::operator = (const Sorcerer& toCopy) throw()
{
    _name = toCopy._name;
    _title = toCopy._title;
    return (*this);
}

std::ostream&   operator << (std::ostream& os, const Sorcerer& s) throw()
{
    os  << "I am " << s.getName() << ", " << s.getTitle()
        << ", and I like ponies!" << std::endl;
    return (os);
}

std::string Sorcerer::getName(void) const
{
    return (_name);
}

std::string Sorcerer::getTitle(void) const
{
    return (_title);
}

void        Sorcerer::polymorph(Victim const & v) const
{
    v.getPolymorphed();
}