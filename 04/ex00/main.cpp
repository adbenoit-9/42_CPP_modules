/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 21:23:11 by adbenoit          #+#    #+#             */
/*   Updated: 2021/06/03 12:11:46 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Wizard.hpp"
#include "Peon.hpp"

int main(void)
{
    Sorcerer robert("Robert", "the Magnificent");

    Victim jim("Jimmy");
    Peon joey("Joe");

    std::cout << std::endl << robert << jim << joey << std::endl;
    robert.polymorph(jim);
    robert.polymorph(joey);

    Wizard tim("Tim", "the Hermit");

    Victim sam("Sam");
    tim.polymorph(sam);

    Sorcerer robertBis("Robert2.0", "the Magnificent");
    robert = robertBis;
    std::cout << std::endl << robert << std::endl;

    Victim jim2(jim);
    std::cout << std::endl << jim2 << std::endl;
    return 0;
}