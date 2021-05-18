/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 15:20:06 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/18 17:51:42 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    srand(time(NULL));
    {
        FragTrap John("John");
        ScavTrap Hodor("Hodor");

        Hodor.rangedAttack("John");
        John.takeDamage(15);
        John.rangedAttack("Hodor");
        Hodor.takeDamage(20);
        Hodor.meleeAttack("John");
        John.takeDamage(20);
        John.meleeAttack("Hodor");
        Hodor.takeDamage(30);
        Hodor.beRepaired(20);
        Hodor.challengeNewcomer("John");
        John.meleeAttack("Hodor");
        Hodor.takeDamage(30);
        John.vaulthunter_dot_exe("Hordor");
        Hodor.takeDamage(25);
        John.vaulthunter_dot_exe("Hordor");
        Hodor.takeDamage(25);
        Hodor.challengeNewcomer("John");
        John.vaulthunter_dot_exe("Hordor");
        Hodor.takeDamage(25);
    }
    
}
