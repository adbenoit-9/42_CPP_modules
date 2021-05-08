/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 15:20:06 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/08 19:50:38 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

int main()
{
    srand(time(NULL));
    {
        FragTrap John("John");
        ScavTrap Hodor("Hodor");
        SuperTrap Superman("Clark");
        Hodor.rangedAttack("John");
        John.takeDamage(15);
        John.rangedAttack("Hodor");
        Hodor.takeDamage(20);
        Superman.rangedAttack("John");
        John.takeDamage(20);
        John.meleeAttack("Hodor");
        Hodor.takeDamage(30);
        John.meleeAttack("Superman");
        Superman.takeDamage(30);
        Superman.meleeAttack("John");
        John.takeDamage(60);
        Hodor.beRepaired(50);
        Hodor.challengeNewcomer("John");
        Superman.beRepaired(50);
        NinjaTrap MichaelAngelo("Michael Angelo");
        MichaelAngelo.rangedAttack("Hodor");
        Hodor.takeDamage(5);
        Hodor.meleeAttack("John");
        John.takeDamage(15);
        Superman.ninjaShoebox(MichaelAngelo);
        MichaelAngelo.takeDamage(60);
        John.meleeAttack("Hodor");
        Hodor.takeDamage(30);
        Superman.vaulthunter_dot_exe("John");
        John.takeDamage(50);
        NinjaTrap Naruto("Naruto");
        Superman.rangedAttack("Naruto");
        Naruto.takeDamage(15);
        Hodor.challengeNewcomer("Naruto");
        Naruto.ninjaShoebox(Hodor);
        Hodor.takeDamage(20);
        Superman.vaulthunter_dot_exe("Naruto");
        Naruto.takeDamage(50);
    }
    
}
