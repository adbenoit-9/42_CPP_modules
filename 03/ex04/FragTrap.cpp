/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:13:50 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/08 19:51:30 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(100, 100, 100, 100, 1, name, 30, 20, 5, "33m")
{
	std::cout	<< "\033[1;" << _color << name << ": Let's get this party started !"
				<< "\033[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap& toCopy) : ClapTrap(toCopy) {}

FragTrap::~FragTrap(void)
{
	if (_hitPoints != 0)
		std::cout	<< "\033[1;" << _color << _name << ": It's really quiet... "
					<< "and lonely... It's boring. Bye !\033[0m" << std::endl;
	else
		std::cout	<< "\033[1;" << _color << _name << " : OMG I'M DEAD !"
					<< "\033[0m" << std::endl;
}

FragTrap&	FragTrap::operator = (const FragTrap& toCopy) throw()
{
	if (this == &toCopy)
		return (*this);
	*this = toCopy;
	return (*this);
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string	attack[4] = {" kicked ", " punched ",\
							" hit with a rock ", " head shot "};
	std::string	part[5] = {" face", " boobs", " balls", " stomach", " ass"};
	
	if (_hitPoints == 0)
		return ;
	if (_energyPoints >= 25)
	{
		_energyPoints -= 25;
		std::cout	<< "\033[3;" << _color << "* " << _name << attack[rand() % 4] << target
					<< "'s" << part[rand() % 5] << " *" << std::endl
					<< "\033[2;3;31m" << _name << " -25 energy points\033[0m" << std::endl;
	}
	else
		std::cout	<< "\033[" << _color << _name << ": I Need more energy..." << std::endl;
}
