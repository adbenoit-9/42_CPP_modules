/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 21:27:53 by adbenoit          #+#    #+#             */
/*   Updated: 2021/06/03 12:04:25 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
    this->_name = name;
    this->_title = title;
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& toCopy)
{
    this->_name = toCopy.getName();
    this->_title = toCopy.getTitle();
}

Sorcerer::~Sorcerer(void)
{
    std::cout   << this->_name << ", " << this->_title
                << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer&       Sorcerer::operator = (const Sorcerer& toCopy) throw()
{
    this->_name = toCopy.getName();
    this->_title = toCopy.getTitle();
    return (*this);
}

std::ostream&   operator << (std::ostream& os, const Sorcerer& s) throw()
{
    os  << "I am " << s.getName() << ", " << s.getTitle()
        << ", and I like ponies!" << std::endl;
    return (os);
}

std::string     Sorcerer::getName(void) const
{
    return (this->_name);
}

std::string     Sorcerer::getTitle(void) const
{
    return (this->_title);
}

void            Sorcerer::polymorph(Victim const & v) const
{
    v.getPolymorphed();
}