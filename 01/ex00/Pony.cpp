/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:18:07 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/04 12:57:32 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony()
{
    age = 0;
    std::cout << "Pony created." << std::endl;
}

Pony::~Pony()
{
    std::cout << "Pony detroyed." << std::endl;
}

void    ponyOnTheStack(void)
{
    Pony    pony;

    std::cout << "Pony on the stack !" << std::endl;
}

void    ponyOnTheHeap(void)
{
    Pony *pony = new Pony;

    std::cout << "Pony on the heap !" << std::endl;
    delete pony;
}