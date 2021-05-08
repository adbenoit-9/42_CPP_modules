/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:13:50 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/08 02:06:11 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(100, 100, 100, 100, 1, name, 30, 20, 5)
{
	std::cout	<< "\033[1;33m" << name << ": Let's get this party started !"
				<< "\033[0m" << std::endl;
}

FragTrap::~FragTrap(void)
{
	if (_hitPoints != 0)
		std::cout	<< "\033[33;1m" << _name << ": It's really quiet... "
					<< "and lonely... It's boring. Bye !\033[0m" << std::endl;
	else
		std::cout	<< "\033[33;1m" << _name << " : OMG I'M DEAD !"
					<< "\033[0m" << std::endl;
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
		std::cout	<< "\033[3;38m* " << _name << attack[rand() % 4] << target
					<< "'s" << part[rand() % 5] << " *" << std::endl
					<< "\033[2;3;35m" << _name << " -25 energy points\033[0m" << std::endl;
	}
	else
		std::cout	<< "\033[33m" << _name << ": I Need more energy..." << std::endl;
}
