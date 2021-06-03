/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 22:23:06 by adbenoit          #+#    #+#             */
/*   Updated: 2021/06/03 12:04:42 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name)
{
    this->_name = name;
    std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim& toCopy)
{
    this->_name = toCopy.getName();
}

Victim::~Victim(void)
{
    std::cout   << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

Victim&         Victim::operator = (const Victim& toCopy) throw()
{
    this->_name = toCopy.getName();
    return (*this);
}

std::ostream&   operator << (std::ostream& os, const Victim& s) throw()
{
    os << "I am " << s.getName() << " and I like otters!"  << std::endl;
    return (os);
}

std::string     Victim::getName(void) const
{
    return (this->_name);
}

void            Victim::getPolymorphed(void) const
{
    std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}
