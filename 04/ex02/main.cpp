/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 19:00:50 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/10 00:17:08 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	ISquad* vlc = new Squad;

	vlc->push(bob);
	vlc->push(jim);
	std::cout << std::endl;
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << std::endl << "\033[1mTest assignement :\033[0m" << std::endl << std::endl;
	Squad* squad = new Squad;

	ISpaceMarine* jean = new AssaultTerminator;
	ISpaceMarine* dean = new TacticalMarine;

	squad->push(dean);
	squad->push(jean);
	
	Squad* squadCopy = new Squad;
	*squadCopy = *squad;

	std::cout << "Number unit squad : " << squad->getCount() << std::endl;
	std::cout << "Number unit squadCopy : " << squadCopy->getCount() << std::endl << std::endl;
	for (int i = 0; i < squadCopy->getCount(); ++i)
	{
		ISpaceMarine* cur = squadCopy->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << std::endl;
	delete vlc;
	delete squad;
	delete squadCopy;

	return 0;
}