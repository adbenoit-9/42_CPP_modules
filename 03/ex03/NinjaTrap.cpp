/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 12:36:37 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/08 17:01:01 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(60, 60, 120, 120, 1, name, 60, 5, 0, "36m")
{
	std::cout	<< "\033[1;" << _color << name << ": Cowabungaaaa !"
				<< "\033[0m" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap& toCopy) : ClapTrap(toCopy) {}

NinjaTrap::~NinjaTrap(void)
{
	if (_hitPoints != 0)
		std::cout	<< "\033[36;1m" << _name << ": Only one can remain.\033[0m" << std::endl;
	else
		std::cout	<< "\033[36;1m" << _name << " : Ninja never quit..."
					<< "\033[0m" << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap& target)
{
	if (_hitPoints == 0)
		return ;
	std::cout	<< "\033[" << _color << _name << " threw shuriken at the throat of "
				<< target.getName() << ".\033[0m" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap& target)
{
	if (_hitPoints == 0)
		return ;
	std::cout	<< "\033[" << _color << _name << " stabbed " << target.getName()
				<< " with a Kunai.\033[0m" << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap& target)
{
	if (_hitPoints == 0)
		return ;
	std::cout	<< "\033[" << _color << _name << " threw Makibishi on "
				<< target.getName() << ".\033[0m" << std::endl;
}
