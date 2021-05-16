/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:13:50 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/16 19:02:56 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(unsigned int hit, unsigned int maxHit, unsigned int energy,
					unsigned int maxEnergy, unsigned int level, std::string name,
					unsigned int meleeDam, unsigned int rangedDam,
					unsigned int armorReduc, std::string color) :
_hitPoints(hit), _maxHitPoints(maxHit), _energyPoints(energy),
_maxEnergyPoints(maxEnergy), _level(level), _name(name),
_meleeAttackDamage(meleeDam), _rangedAttackDamage(rangedDam),
_armorDamageReduction(armorReduc), _color(color)
{
	std::cout << "ClapTrap contructor called. (" << name << ")" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& toCopy): _hitPoints(toCopy._hitPoints),
_maxHitPoints(toCopy._maxHitPoints),
_energyPoints(toCopy._energyPoints),
_maxEnergyPoints(toCopy._maxEnergyPoints),
_level(toCopy._level),
_name(toCopy._name),
_meleeAttackDamage(toCopy._meleeAttackDamage),
_rangedAttackDamage(toCopy._rangedAttackDamage),
_armorDamageReduction(toCopy._armorDamageReduction),
_color(toCopy._color) {}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called. (" << this->_name << ")" << std::endl;
}

ClapTrap&	ClapTrap::operator = (const ClapTrap& toCopy)
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
	this->_color = toCopy._color;
	return (*this);
}

void	ClapTrap::rangedAttack(std::string const & target)
{
	if (this->_hitPoints == 0)
		return ;
	std::cout	<< "\033[" << this->_color << this->_name << ": In yo'FACE !" << std::endl
				<< "\033[2;3;31m" << this->_name << " caused " << this->_rangedAttackDamage
				<< " damages to " << target << "\033[0m" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	if (this->_hitPoints == 0)
		return ;
	std::cout	<< "\033[" << this->_color << this->_name << ": Take that !" << std::endl
				<< "\033[2;3;31m" << this->_name << " caused " << this->_meleeAttackDamage
				<< " damages to " << target << "\033[0m" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
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
		std::cout	<< "\033[" << this->_color << this->_name << ": Ouch !\033[0m" << std::endl;
	std::cout	<< "\033[2;3;31m" << this->_name << " -" << amount
				<< " damages\033[0m" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
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
	std::cout	<< "\033[0;" << this->_color << this->_name << ": Make my day. :D \033[0m" << std::endl;
}

std::string	ClapTrap::getName(void)
{
	return (this->_name);
}