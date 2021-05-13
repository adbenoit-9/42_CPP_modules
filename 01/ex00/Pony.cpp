/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:18:07 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/13 16:45:29 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, int age)
{
    _name = name;
    _color = color;
    _age = age;
    std::cout << "Pony created." << std::endl;
}

Pony::~Pony(void)
{
    std::cout << "Pony detroyed." << std::endl;
}

std::string	Pony::getName(void) const
{
    return (_name);
}

std::string	Pony::getColor(void) const
{
    return (_color);
}

int			Pony::getAge(void) const
{
    return (_age);
}
