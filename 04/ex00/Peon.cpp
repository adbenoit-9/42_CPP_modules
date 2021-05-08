/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 21:23:36 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/08 22:52:55 by adbenoit         ###   ########.fr       */
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
    _name = toCopy._name;
    return (*this);
}

void    Peon::getPolymorphed(void) const
{
    std::cout << _name << " has been turned into a pink pony!" << std::endl;
}
