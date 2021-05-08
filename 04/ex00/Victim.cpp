/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 22:23:06 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/08 22:38:11 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name)
{
    _name = name;
    std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim& toCopy)
{
    _name = toCopy._name;
}

Victim::~Victim(void)
{
    std::cout   << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

Victim&   Victim::operator = (const Victim& toCopy) throw()
{
    _name = toCopy._name;
    return (*this);
}

std::ostream&   operator << (std::ostream& os, const Victim& s) throw()
{
    os << "I am " << s.getName() << " and I like otters!"  << std::endl;
    return (os);
}

std::string Victim::getName(void) const
{
    return (_name);
}

void    Victim::getPolymorphed(void) const
{
    std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}
