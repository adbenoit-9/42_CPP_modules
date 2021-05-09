/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 11:41:26 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/09 17:04:28 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main()
{
	Character*	johnny = new Character("Johnny");
	std::cout << *johnny;
	
	Enemy*		b = new RadScorpion();

	std::cout << std::endl << "--- Test attack without weapon ----" << std::endl;
	johnny->attack(b);
	std::cout << "* attack fonction called *\n" << std::endl;

	AWeapon*	pr = new PlasmaRifle();
	AWeapon*	pf = new PowerFist();

	johnny->equip(pr);
	std::cout << *johnny;
	johnny->equip(pf);

	std::cout << std::endl << "--- Test HP ----" << std::endl;
	johnny->attack(b);
	std::cout << *johnny;
	johnny->equip(pr);
	std::cout << *johnny;
	johnny->attack(b);
	std::cout << b->getType() << " has " << b->getHP() << " HP\n";
	std::cout << *johnny;
	johnny->attack(b);
	std::cout << b->getType() << " has " << b->getHP() << " HP\n";
	std::cout << *johnny << std::endl;

	std::cout << "--- Test AP ----" << std::endl;
	Enemy*		c = new SuperMutant();
	johnny->attack(c);
	std::cout << *johnny;
	johnny->equip(pf);
	johnny->attack(c);
	std::cout << b->getType() << " has " << b->getHP() << " HP\n";
	johnny->attack(c);
	std::cout << *johnny;
	std::cout << "Need " << pf->getAPCost() << " AP to attack with " << pf->getName() << std::endl;
	std::cout << b->getType() << " has " << b->getHP() << " HP\n";
	johnny->attack(c);
	std::cout << "* attack fonction called *" << std::endl;
	std::cout << b->getType() << " has " << b->getHP() << " HP\n";
	
	return 0;
}
