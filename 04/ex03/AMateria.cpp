/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 16:21:33 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/10 21:57:02 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type), _xp(0) {}

AMateria::AMateria(const AMateria& toCopy) : _xp(toCopy.getXP()), _type(toCopy.getType()) {}

AMateria::~AMateria(void) {}

AMateria&			AMateria::operator = (const AMateria& toCopy)
{
	this->_xp = toCopy.getXP();
	return (*this);
}

std::string const & AMateria::getType(void) const
{
	return (this->_type);
}

unsigned int 		AMateria::getXP(void) const
{
	return (this->_xp);
}

void				AMateria::use(ICharacter& target)
{
	std::cout << target.getName() << std::endl;
}
