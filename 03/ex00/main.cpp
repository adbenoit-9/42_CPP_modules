/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 15:20:06 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/16 16:46:37 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    srand(time(NULL));
    {
        std::cout << "Basic test:" << std::endl;
        FragTrap John("John");

        John.meleeAttack("Suzanne");
        John.rangedAttack("Suzanne");
        John.takeDamage(20);
        John.beRepaired(20);
        John.vaulthunter_dot_exe("Suzanne");
    }
    
    {
        std::cout << "\nDeath test:" << std::endl;
        FragTrap John("John");

        John.meleeAttack("Suzanne");
        John.rangedAttack("Suzanne");
        John.takeDamage(20);
        John.rangedAttack("Paul");
        John.takeDamage(40);
        John.rangedAttack("Anna");
        John.takeDamage(40);
        John.beRepaired(20);
        John.takeDamage(40);
    }

    {
        std::cout << "\nEnergy test:" << std::endl;
        FragTrap John("John");

        John.vaulthunter_dot_exe("Suzanne");
        John.vaulthunter_dot_exe("Paul");
        John.vaulthunter_dot_exe("Anna");
        John.vaulthunter_dot_exe("Bob");
        John.vaulthunter_dot_exe("Bob");
        John.beRepaired(25);
        John.vaulthunter_dot_exe("Jeanne");
        John.beRepaired(100);
        John.takeDamage(30);
        John.beRepaired(100);
    }
    
}
