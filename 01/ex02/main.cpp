/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:12:08 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/04 15:24:21 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
    Zombie      *zombie;
    ZombieEvent event;
    
    std::cout << "Random zombies :" << std::endl;
    event.setZombieType();
    event.randomChump();
    event.setZombieType();
    event.randomChump();
    event.setZombieType();
    event.randomChump();
    event.setZombieType();
    event.randomChump();
    std::cout << "\nOthers :" << std::endl;
    zombie = event.newZombie("Jean");
    zombie->announce();
    delete zombie;
    zombie = event.newZombie("Huguette");
    zombie->announce();
    delete zombie;
    zombie = event.newZombie("Camille");
    zombie->announce();
    delete zombie;
    return (0);
}