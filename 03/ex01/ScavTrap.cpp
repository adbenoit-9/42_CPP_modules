/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:13:50 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/07 17:36:31 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	std::cout	<< "\033[1;33m" << name << ": Hodor Hodor !"
				<< "\033[0m\n" << std::endl;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_name = name;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
}

ScavTrap::~ScavTrap(void)
{
	if (_hitPoints != 0)
		std::cout	<< "\n\033[33;1m" << _name << ": I'm taking a break, I want a Kitkat !\033[0m" << std::endl;
	else
		std::cout	<< "\n\033[33;1m" << _name << " : Hodor..."
					<< "\033[0m" << std::endl;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	if (_hitPoints == 0)
		return ;
	std::cout	<< "\033[33m" << _name << ": Let my door alone !" << std::endl
				<< "\033[34m" << target << " -" << _meleeAttackDamage
				<< " damages" << std::endl
				<< target << ": No way, I want your door !\033[0m" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	if (_hitPoints == 0)
		return ;
	std::cout	<< "\033[33m" << _name << ": I saw you stupid idiot !" << std::endl
				<< "\033[34m" << target << " -" << _rangedAttackDamage
				<< " damages\033[0m" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
		return ;
	amount -= _armorDamageReduction;
	if (_hitPoints < amount)
		amount = _hitPoints;
	_hitPoints -= amount;
	std::cout	<< "\033[35m" << _name << " -" << amount
				<< " damages\033[0m" << std::endl;
	if (_hitPoints == 0)
		std::cout	<< "\033[31m" << _name << " x_x\033[0m" << std::endl;
	else
		std::cout	<< "\033[33m" << _name << ": Ridiculous, I don't even feel it !\033[0m" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	unsigned int repairEnergy = amount;
	unsigned int repairHit = amount;

	if (_maxEnergyPoints - _energyPoints < amount)
		repairEnergy = _maxEnergyPoints - _energyPoints;
	if (_maxHitPoints - _hitPoints < amount)
		repairHit = _maxHitPoints - _hitPoints;
	std::cout  << "\033[32m" << _name << " +" << repairEnergy << " energy points" << std::endl;
	std::cout << "\033[32m" << _name << " +" << repairHit << " hit points" << std::endl;
	_energyPoints += repairEnergy;
	_hitPoints += repairHit;
	std::cout	<< "\033[33m" << _name << ": YOUHOO another shot please !\033[0m" << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string	challenge[5] = {"Bring me a Kitkat.", "Ate your feet.",\
							"Marry me.", "Paint my door in pink.", \
							""};
	if (_hitPoints == 0)
		return ;
	std::cout	<< "\033[33m" << _name << ": " << challenge[rand() % 5] << std::endl
				<< "\033[34m" << target << ": Oh nooooon, not that please... Have pity on me !"
				<< "\033[0m" << std::endl;
}
