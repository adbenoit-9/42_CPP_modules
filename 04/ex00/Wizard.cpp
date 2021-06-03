/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wizard.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 21:23:36 by adbenoit          #+#    #+#             */
/*   Updated: 2021/06/03 11:54:30 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Wizard.hpp"

Wizard::Wizard(std::string name, std::string title) : Sorcerer(name, title)
{
    std::cout << "Bouh" << std::endl;
}

Wizard::Wizard(const Wizard& toCopy) : Sorcerer(toCopy) {}

Wizard::~Wizard(void)
{
    std::cout << "Boom!" << std::endl;
}

Wizard&   Wizard::operator = (const Wizard& toCopy)
{
    this->_name = toCopy.getName();
    this->_title = toCopy.getTitle();
    return (*this);
}
