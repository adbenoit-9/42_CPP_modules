/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:26:14 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/13 17:30:02 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main()
{
    srand(time(NULL));
    {
        ZombieHorde horde1 = ZombieHorde(3);
        horde1.announce();
    }
    std::cout << std::endl;
    {
        ZombieHorde horde2 = ZombieHorde(5);
        horde2.announce();
    }
    return (0);
}