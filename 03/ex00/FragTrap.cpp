/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:13:50 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/07 18:17:56 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	std::cout	<< "\033[1;33m" << name << ": Let's get this party started !"
				<< "\033[0m" << std::endl;
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
		std::cout	<< "\033[33;1m" << _name << ": It's really quiet... "
					<< "and lonely... It's boring. Bye !\033[0m" << std::endl;
	else
		std::cout	<< "\033[33;1m" << _name << " : OMG I'M DEAD !"
					<< "\033[0m" << std::endl;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	if (_hitPoints == 0)
		return ;
	std::cout	<< "\033[33m" << _name << ": Take that !" << std::endl
				<< "\033[2;3;35m" << _name << " caused " << _rangedAttackDamage
				<< " damages to" << target << "\033[0m" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	if (_hitPoints == 0)
		return ;
	std::cout	<< "\033[33m" << _name << ": In yo'FACE !" << std::endl
				<< "\033[2;3;35m" << _name << " caused " << _rangedAttackDamage
				<< " damages to " << target << "\033[0m" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
		return ;
	amount -= _armorDamageReduction;
	if (_hitPoints < amount)
		amount = _hitPoints;
	_hitPoints -= amount;
	std::cout	<< "\033[2;3;35m" << _name << " -" << amount
				<< " damages\033[0m" << std::endl;
	if (_hitPoints == 0)
		std::cout	<< "\033[31m" << _name << " x_x\033[0m" << std::endl;
	else
		std::cout	<< "\033[33m" << _name << ": Ouch !\033[0m" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	unsigned int repairEnergy = amount;
	unsigned int repairHit = amount;

	if (_maxEnergyPoints - _energyPoints < amount)
		repairEnergy = _maxEnergyPoints - _energyPoints;
	if (_maxHitPoints - _hitPoints < amount)
		repairHit = _maxHitPoints - _hitPoints;
	std::cout << "\033[2;3;32m" << _name << " +" << repairEnergy << " energy points" << std::endl;
	std::cout << "\033[2;3;32m" << _name << " +" << repairHit << " hit points" << std::endl;
	_energyPoints += repairEnergy;
	_hitPoints += repairHit;
	std::cout	<< "\033[0;33m" << _name << ": Make my day. :D \033[0m" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string	attack[5] = {"It's about to get magical !", "Hey everybody, check out my package !",\
							"This time it'll be awesome, I promise !", "I have an IDEA !", \
						"It's like a box of chocolates..."};
	
	if (_hitPoints == 0)
		return ;
	if (_energyPoints >= 25)
	{
		_energyPoints -= 25;
		std::cout	<< "\033[33m" << _name << ": " << attack[rand() % 5] << std::endl
					<< "\033[2;3;35m" << _name << " -25 energy points" << std::endl
					<< "\033[0;33m" << _name << ": Extra ouch ! Sorry " << target
					<< " :D\033[0m" << std::endl;
	}
	else
		std::cout	<< "\033[33m" << _name << ": I Need more energy..." << std::endl;
}
