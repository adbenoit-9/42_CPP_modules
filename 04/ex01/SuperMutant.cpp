/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 12:27:03 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/09 13:27:56 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & toCopy) : Enemy(toCopy) {}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant&	SuperMutant::operator = (const SuperMutant& toCopy)
{
	_type = toCopy._type;
	_hp = toCopy._hp;
	return (*this);
}

void		SuperMutant::takeDamage(int amount)
{
	if (amount < 3)
		amount = 0;
	else
		amount -= 3;
	_hp -= amount;
	if (_hp < 0)
		_hp = 0;
}
