/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:33:28 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/04 15:17:51 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void    ZombieEvent::setZombieType(void)
{
    type = "basic Zombie";
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie* zombie = new Zombie(name, type);

    return (zombie);
}

void    ZombieEvent::randomChump(void)
{
    std::string names[5] = {"Boris", "Odile", "JC", "Manon", "George"};
    Zombie zombie = Zombie(names[rand() % 5], type);
    zombie.announce();
}
