/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 16:51:53 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/10 22:47:47 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(const Cure& toCopy) : AMateria(toCopy) {}

Cure::~Cure(void) {}

AMateria*	Cure::clone(void) const
{
	return (new Cure(*this));
}

Cure&		Cure::operator = (const Cure& toCopy)
{
	this->AMateria::operator=(toCopy);
	return (*this);
}


void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	this->_xp += 10;
}
