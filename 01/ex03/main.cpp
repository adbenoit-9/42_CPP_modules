/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:26:14 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/04 15:42:15 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main()
{
    srand(time(NULL));
    ZombieHorde horde1 = ZombieHorde(3);
    std::cout << "Horde of 3 Zombies :" << std::endl;
    horde1.announce();
    ZombieHorde horde2 = ZombieHorde(10);
    std::cout << "\nHorde of 10 Zombies :" << std::endl;
    horde2.announce();
    return (0);
}