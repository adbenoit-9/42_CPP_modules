/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 15:20:06 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/07 16:53:22 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    srand(time(NULL));
    {
        std::cout << "Basic :" << std::endl;
        ScavTrap Hodor("Hodor");
        Hodor.meleeAttack("Suzanne");
        Hodor.rangedAttack("Suzanne");
        Hodor.takeDamage(20);
        Hodor.beRepaired(20);
        Hodor.challengeNewcomer("Suzanne");
    }
    
    {
        std::cout << "\nDead :" << std::endl;
        ScavTrap Hodor("Hodor");
        Hodor.meleeAttack("Suzanne");
        Hodor.rangedAttack("Suzanne");
        Hodor.takeDamage(20);
        Hodor.rangedAttack("Paul");
        Hodor.takeDamage(40);
        Hodor.rangedAttack("Anna");
        Hodor.takeDamage(40);
        Hodor.beRepaired(20);
        Hodor.takeDamage(40);
    }

    {
        std::cout << "\nEnergy :" << std::endl;
        ScavTrap Hodor("Hodor");
        Hodor.challengeNewcomer("Suzanne");
        Hodor.challengeNewcomer("Paul");
        Hodor.challengeNewcomer("Anna");
        Hodor.challengeNewcomer("Bob");
        Hodor.challengeNewcomer("Bob");
        Hodor.beRepaired(25);
        Hodor.challengeNewcomer("Jeanne");

    }
    
}
