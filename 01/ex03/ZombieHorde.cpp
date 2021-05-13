/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:27:48 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/13 17:30:19 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
    std::string names[7] = {"Boris", "Odile", "Greg", "Manon", "George", "Louise", "Damien"};

    _zombies = new Zombie [n];
    _nbZombie = n;
    for (int i = 0 ; i < n ; i++)
        _zombies[i] = Zombie(names[rand() % 7], "basic zombie");
    std::cout << "Horde of " << n << " zombies created" << std::endl;
}

ZombieHorde::~ZombieHorde(void)
{
    delete[] _zombies;
    std::cout << "Horde destroyed" << std::endl;
}

void    ZombieHorde::announce(void)
{
    for (int i = 0 ; i < _nbZombie ; i++)
        _zombies[i].announce();
}