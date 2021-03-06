/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:13:50 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/16 19:02:56 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : _hitPoints(100), _maxHitPoints(100),
_energyPoints(100), _maxEnergyPoints(100), _level(1), _name(name),
_meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5)
{
	std::cout	<< "\033[1;33m" << name << ": Let's get this party started !"
				<< "\033[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap& toCopy): _hitPoints(toCopy._hitPoints),
_maxHitPoints(toCopy._maxHitPoints),
_energyPoints(toCopy._energyPoints),
_maxEnergyPoints(toCopy._maxEnergyPoints),
_level(toCopy._level),
_name(toCopy._name),
_meleeAttackDamage(toCopy._meleeAttackDamage),
_rangedAttackDamage(toCopy._rangedAttackDamage),
_armorDamageReduction(toCopy._armorDamageReduction) {}

FragTrap::~FragTrap(void)
{
	if (this->_hitPoints != 0)
		std::cout	<< "\033[33;1m" << this->_name << ": It's really quiet... "
					<< "and lonely... It's boring. Bye !\033[0m" << std::endl;
	else
		std::cout	<< "\033[33;1m" << this->_name << " : OMG I'M DEAD !"
					<< "\033[0m" << std::endl;
}

FragTrap&	FragTrap::operator = (const FragTrap& toCopy)
{
	if (this == &toCopy)
		return (*this);
	this->_hitPoints = toCopy._hitPoints;
	this->_maxHitPoints = toCopy._maxHitPoints;
	this->_energyPoints = toCopy._energyPoints;
	this->_maxEnergyPoints = toCopy._maxEnergyPoints;
	this->_level = toCopy._level;
	this->_name = toCopy._name;
	this->_meleeAttackDamage = toCopy._meleeAttackDamage;
	this->_rangedAttackDamage = toCopy._rangedAttackDamage;
	this->_armorDamageReduction = toCopy._armorDamageReduction;
	return (*this);
}

void	FragTrap::rangedAttack(std::string const & target)
{
	if (this->_hitPoints == 0)
		return ;
	std::cout	<< "\033[33m" << this->_name << ": In yo'FACE !" << std::endl
				<< "\033[2;3;31m" << this->_name << " caused " << this->_rangedAttackDamage
				<< " damages to " << target << "\033[0m" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	if (this->_hitPoints == 0)
		return ;
	std::cout	<< "\033[33m" << this->_name << ": Take that !" << std::endl
				<< "\033[2;3;31m" << this->_name << " caused " << this->_rangedAttackDamage
				<< " damages to " << target << "\033[0m" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
		return ;
	if (amount > this->_armorDamageReduction)
		amount -= this->_armorDamageReduction;
	else
		amount = 0;
	if (this->_hitPoints < amount)
		amount = this->_hitPoints;
	this->_hitPoints -= amount;
	if (this->_hitPoints == 0)
		std::cout	<< "\033[31m" << this->_name << " x_x\033[0m" << std::endl;
	else
		std::cout	<< "\033[33m" << this->_name << ": Ouch !\033[0m" << std::endl;
	std::cout	<< "\033[2;3;31m" << this->_name << " -" << amount
				<< " damages\033[0m" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	unsigned int repairEnergy = amount;
	unsigned int repairHit = amount;

	if (this->_maxEnergyPoints - this->_energyPoints < amount)
		repairEnergy = this->_maxEnergyPoints - this->_energyPoints;
	if (this->_maxHitPoints - this->_hitPoints < amount)
		repairHit = this->_maxHitPoints - this->_hitPoints;
	std::cout << "\033[2;3;32m" << this->_name << " +" << repairEnergy << " energy points" << std::endl;
	std::cout << "\033[2;3;32m" << this->_name << " +" << repairHit << " hit points" << std::endl;
	this->_energyPoints += repairEnergy;
	this->_hitPoints += repairHit;
	std::cout	<< "\033[0;33m" << this->_name << ": Make my day. :D \033[0m" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string	attack[4] = {" kicked ", " punched ",\
							" hit with a rock ", " head shot "};
	std::string	part[5] = {" face", " boobs", " balls", " stomach", " ass"};
	
	if (this->_hitPoints == 0)
		return ;
	if (this->_energyPoints >= 25)
	{
		this->_energyPoints -= 25;
		std::cout	<< "\033[3;39m* " << this->_name << attack[rand() % 4] << target
					<< "'s" << part[rand() % 5] << " *" << std::endl
					<< "\033[2;3;31m" << this->_name << " -25 energy points\033[0m" << std::endl;
	}
	else
		std::cout	<< "\033[33m" << this->_name << ": I Need more energy..." << std::endl;
}
