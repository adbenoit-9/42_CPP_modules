/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 21:23:36 by adbenoit          #+#    #+#             */
/*   Updated: 2021/06/03 12:03:47 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
    std::cout << "Zog zog" << std::endl;
}

Peon::Peon(const Peon& toCopy) : Victim(toCopy) {}

Peon::~Peon(void)
{
    std::cout << "Bleuark..." << std::endl;
}

Peon&   Peon::operator = (const Peon& toCopy)
{
    this->_name = toCopy.getName();
    return (*this);
}

void    Peon::getPolymorphed(void) const
{
    std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}
