/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:13:50 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/07 16:26:26 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	std::cout	<< "\033[1;33m" << name << ": Let's get this party started !"
				<< "\033[0m\n" << std::endl;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_name = name;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
}

FragTrap::~FragTrap(void)
{
	if (_hitPoints != 0)
		std::cout	<< "\n\033[33;1m" << _name << ": It's really quiet... "
					<< "and lonely... It's boring. Bye !\033[0m" << std::endl;
	else
		std::cout	<< "\n\033[33;1m" << _name << " : OMG I'M DEAD !"
					<< "\033[0m" << std::endl;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout	<< "\033[33m" << _name << ": Take that !" << std::endl
				<< "\033[34m" << target << " -" << _meleeAttackDamage
				<< " damages" << std::endl
				<< target << ": Get away from me !\033[0m" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout	<< "\033[33m" << _name << ": In yo'FACE !" << std::endl
				<< "\033[34m" << target << " -" << _rangedAttackDamage
				<< " damages\033[0m" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount + _armorDamageReduction;
	std::cout	<< "\033[35m" << _name << " -" << amount - _armorDamageReduction
				<< " damages\033[0m" << std::endl;
	if (_hitPoints <= 0)
	{
		std::cout	<< "\033[31m" << _name << " x_x\033[0m" << std::endl;
		_hitPoints = 0;
	}
	else
		std::cout	<< "\033[33m" << _name << ": Ouch !\033[0m" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "\033[32m" << _name << " +" << amount << " energy points" << std::endl;
	std::cout << "\033[32m" << _name << " +" << amount << " hit points" << std::endl;
	_energyPoints += amount;
	_hitPoints += amount;
	if (_energyPoints > _maxEnergyPoints)
		_energyPoints = _maxEnergyPoints;
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	std::cout	<< "\033[33m" << _name << ": Make my day. :D \033[0m" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string	attack[5] = {"It's about to get magical !", "Hey everybody, check out my package !",\
							"This time it'll be awesome, I promise !", "I have an IDEA !", \
							"It's like a box of chocolates..."};
	if (_energyPoints >= 25)
	{
		_energyPoints -= 25;
		std::cout	<< "\033[33m" << _name << ": " << attack[rand() % 5] << std::endl
					<< "\033[35m" << _name << " -25 energy points" << std::endl
					<< "\033[34m" << target << ": Extra ouch !\033[0m" << std::endl;
	}
	else
		std::cout	<< "\033[33m" << _name << ": I Need more energy..." << std::endl;
}
