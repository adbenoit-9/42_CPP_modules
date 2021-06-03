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
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << std::endl << "\033[1mTest assignement :\033[0m" << std::endl;
	ISquad* vlc2;
	vlc2 = vlc;

	std::cout << &vlc << std::endl << &vlc2 << std::endl;
	for (int i = 0; i < vlc2->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc2->getUnit(i);
		std::cout << vlc->getUnit(i) << std::endl << vlc2->getUnit(i) << std::endl;
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	// delete vlc;
	delete vlc2;

	return 0;
}