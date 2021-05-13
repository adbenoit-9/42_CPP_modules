/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:33:28 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/13 17:14:21 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void    ZombieEvent::setZombieType(std::string type)
{
    _type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie* zombie = new Zombie(name, _type);

    return (zombie);
}

void    ZombieEvent::randomChump(void)
{
    std::string names[5] = {"Boris", "Odile", "Greg", "Manon", "George"};
	Zombie zombie = Zombie(names[rand() % 5], _type);
    zombie.announce();
}
