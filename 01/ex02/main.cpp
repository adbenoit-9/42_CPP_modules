/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:12:08 by adbenoit          #+#    #+#             */
/*   Updated: 2021/06/02 17:31:34 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
    Zombie      *zombie;
    ZombieEvent event;
    
	srand(time(NULL));

    std::cout << "Random zombies :" << std::endl;

    event.setZombieType("Generic Zombie");
    event.randomChump();

    event.setZombieType("Runner Zombie");
    event.randomChump();

    event.setZombieType("Voodoo Zombie");
    event.randomChump();

    event.setZombieType("Walking Zombie");
    event.randomChump();

    std::cout << "\nOthers :" << std::endl;

    Zombie jean("Jean", "Runner Zombie");
    jean.announce();

    zombie = event.newZombie("Huguette");
    zombie->announce();
    delete zombie;

    zombie = event.newZombie("Camille");
    zombie->announce();
    delete zombie;

    return (0);
}