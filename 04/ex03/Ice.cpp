/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 16:36:25 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/10 22:58:47 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(const Ice& toCopy) : AMateria(toCopy) {}

Ice::~Ice(void) {}

AMateria*	Ice::clone(void) const
{
	return (new Ice(*this));
}

Ice&		Ice::operator = (const Ice& toCopy)
{
	this->AMateria::operator=(toCopy);
	return (*this);
}


void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	_xp += 10;
}
