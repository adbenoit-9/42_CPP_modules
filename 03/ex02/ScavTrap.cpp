/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:13:50 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/08 02:06:38 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(100, 100, 50, 50, 1, name, 20, 15, 3)
{
	std::cout	<< "\033[1;34m" << name << ": Hodor Hodor !"
				<< "\033[0m" << std::endl;

}

ScavTrap::ScavTrap(const ScavTrap& s) : ClapTrap(s)
{
}

ScavTrap::~ScavTrap(void)
{
	if (_hitPoints != 0)
		std::cout	<< "\033[34;1m" << _name << ": I'm taking a break, I want a Kitkat !\033[0m" << std::endl;
	else
		std::cout	<< "\033[34;1m" << _name << " : Hodor..."
					<< "\033[0m" << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string	challenge[5] = {"bring me a Kitkat.", "ate your feet.",\
							"marry me.", "paint my door in pink.", \
							"singing \"I kissed a girl\" naked."};
	if (_hitPoints == 0)
		return ;
	std::cout	<< "\033[34m" << _name << ": Your challenge is to " << challenge[rand() % 5] << std::endl
				<< "\033[34m" << _name << ": " << "No pity for you " << target
				<< " !\033[0m" << std::endl;
}
