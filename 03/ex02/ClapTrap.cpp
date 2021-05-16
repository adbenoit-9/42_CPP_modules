/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:13:50 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/16 17:01:05 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(unsigned int hit, unsigned int maxHit, unsigned int energy,
					unsigned int maxEnergy, unsigned int level, std::string name,
					unsigned int meleeDam, unsigned int rangedDam,
					unsigned int armorReduc, std::string color)
{
	std::cout << "ClapTrap contructor called. (" << name << ")" << std::endl;
	_hitPoints = hit;
	_maxHitPoints = maxHit;
	_energyPoints = energy;
	_maxEnergyPoints = maxEnergy;
	_level = level;
	_name = name;
	_meleeAttackDamage = meleeDam;
	_rangedAttackDamage = rangedDam;
	_armorDamageReduction = armorReduc;
	_color = color;
}

ClapTrap::ClapTrap(const ClapTrap& toCopy)
{
	_hitPoints = toCopy._hitPoints;
	_maxHitPoints = toCopy._maxHitPoints;
	_energyPoints = toCopy._energyPoints;
	_maxEnergyPoints = toCopy._maxEnergyPoints;
	_level = toCopy._level;
	_name = toCopy._name;
	_meleeAttackDamage = toCopy._meleeAttackDamage;
	_rangedAttackDamage = toCopy._rangedAttackDamage;
	_armorDamageReduction = toCopy._armorDamageReduction;
	_color = toCopy._color;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called. (" << _name << ")" << std::endl;
}

ClapTrap&	ClapTrap::operator = (const ClapTrap& toCopy)
{
	if (this == &toCopy)
		return (*this);
	_hitPoints = toCopy._hitPoints;
	_maxHitPoints = toCopy._maxHitPoints;
	_energyPoints = toCopy._energyPoints;
	_maxEnergyPoints = toCopy._maxEnergyPoints;
	_level = toCopy._level;
	_name = toCopy._name;
	_meleeAttackDamage = toCopy._meleeAttackDamage;
	_rangedAttackDamage = toCopy._rangedAttackDamage;
	_armorDamageReduction = toCopy._armorDamageReduction;
	_color = toCopy._color;
	return (*this);
}

void	ClapTrap::rangedAttack(std::string const & target)
{
	if (_hitPoints == 0)
		return ;
	std::cout	<< "\033[" << _color << _name << ": In yo'FACE !" << std::endl
				<< "\033[2;3;31m" << _name << " caused " << _rangedAttackDamage
				<< " damages to " << target << "\033[0m" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	if (_hitPoints == 0)
		return ;
	std::cout	<< "\033[" << _color << _name << ": Take that !" << std::endl
				<< "\033[2;3;31m" << _name << " caused " << _meleeAttackDamage
				<< " damages to " << target << "\033[0m" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
		return ;
	amount -= _armorDamageReduction;
	if (_hitPoints < amount)
		amount = _hitPoints;
	_hitPoints -= amount;
	if (_hitPoints == 0)
		std::cout	<< "\033[31m" << _name << " x_x\033[0m" << std::endl;
	else
		std::cout	<< "\033[" << _color << _name << ": Ouch !\033[0m" << std::endl;
	std::cout	<< "\033[2;3;31m" << _name << " -" << amount
				<< " damages\033[0m" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
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
	std::cout	<< "\033[0;" << _color << _name << ": Make my day. :D \033[0m" << std::endl;
}
