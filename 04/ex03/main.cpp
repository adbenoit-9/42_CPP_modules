/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:59:41 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/10 22:12:29 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int	main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);



	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl << "\033[1mTest copy constructor :\033[0m" << std::endl;
	AMateria* tmpCopy(tmp);
	tmp->use(*bob);
	tmpCopy->use(*bob);

	std::cout << std::endl;
	Character *john = new Character("john");
	john->equip(src->createMateria("ice"));
	john->use(0, *me);


	Character *luc = new Character("luc");

	std::cout << std::endl << "\033[1mTest assignement :\033[0m" << std::endl;
	*luc = *john;

	std::cout << "John materia[0] XP = " << john->getMateria(0)->getXP() << std::endl;
	std::cout << "Luc materia[0] XP = " <<  luc->getMateria(0)->getXP() << std::endl;
	john->use(0, *me);
	std::cout << "John materia[0] XP = " << john->getMateria(0)->getXP() << std::endl;
	std::cout << "Luc materia[0] XP = " <<  luc->getMateria(0)->getXP() << std::endl;

	delete bob;
	delete me;
	delete src;
	delete luc;
	delete john;

	return 0;
}