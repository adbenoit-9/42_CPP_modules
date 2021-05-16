/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 15:20:06 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/16 16:45:40 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

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

        NinjaTrap MichaelAngelo("Michael Angelo");

        MichaelAngelo.rangedAttack("John");
        John.takeDamage(5);
        Hodor.meleeAttack("John");
        John.takeDamage(20);
        John.meleeAttack("Hodor");
        Hodor.takeDamage(30);

        NinjaTrap Naruto("Naruto");

        MichaelAngelo.ninjaShoebox(Naruto);
        Naruto.takeDamage(15);
        MichaelAngelo.rangedAttack("Naruto");
        Naruto.takeDamage(5);
        MichaelAngelo.ninjaShoebox(John);
        Naruto.meleeAttack("Micheal Angelo");
        MichaelAngelo.takeDamage(60);
        John.takeDamage(20);
        John.vaulthunter_dot_exe("Hordor");
        Hodor.takeDamage(50);
        John.vaulthunter_dot_exe("Naruto");
        MichaelAngelo.takeDamage(30);
        Naruto.meleeAttack("John");
        John.takeDamage(60);
        Naruto.ninjaShoebox(Hodor);
        Hodor.takeDamage(30);
    }
    
}
