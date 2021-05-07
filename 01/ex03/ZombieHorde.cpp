/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:27:48 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/07 12:58:56 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
    std::string names[7] = {"Boris", "Odile", "JC", "Manon", "George", "Louise", "Damien"};

    _horde = new Zombie [n];
    _nbZombie = n;
    for (int i = 0 ; i < n ; i++)
        _horde[i] = Zombie(names[rand() % 7], "basic zombie");
}

ZombieHorde::~ZombieHorde(void)
{
    delete[] _horde;
}

void    ZombieHorde::announce(void)
{
    for (int i = 0 ; i < _nbZombie ; i++)
        _horde[i].announce();
}