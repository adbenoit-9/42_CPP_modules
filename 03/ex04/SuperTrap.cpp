/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:13:50 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/08 19:32:24 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(100, 100, 120, 120, 1, name, 60, 20, 5, "35m"), FragTrap(name), NinjaTrap(name)
{
	std::cout	<< "\033[1;" << _color << name << ": For Truth, Justice, and the American way !"
				<< "\033[0m" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& toCopy) : ClapTrap(toCopy), FragTrap(toCopy), NinjaTrap(toCopy) {}

SuperTrap::~SuperTrap(void)
{
	if (_hitPoints != 0)
		std::cout	<< "\033[1;" << _color << _name << ": It's really quiet... "
					<< "and lonely... It's boring. Bye !\033[0m" << std::endl;
	else
		std::cout	<< "\033[1;" << _color << _name << " : OMG I'M DEAD !"
					<< "\033[0m" << std::endl;
}

SuperTrap&	SuperTrap::operator = (const SuperTrap& toCopy) throw()
{
	if (this == &toCopy)
		return (*this);
	*this = toCopy;
	return (*this);
}
