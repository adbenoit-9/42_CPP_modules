/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:27:48 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/05 11:16:33 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
    std::string names[7] = {"Boris", "Odile", "JC", "Manon", "George", "Louise", "Damien"};

    horde = new Zombie [n];
    nbZombie = n;
    for (int i = 0 ; i < n ; i++)
        horde[i] = Zombie(names[rand() % 7], "basic zombie");
}

ZombieHorde::~ZombieHorde()
{
    delete[] horde;
}

void    ZombieHorde::announce(void)
{
    for (int i = 0 ; i < nbZombie ; i++)
        horde[i].announce();
}