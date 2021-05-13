/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:17:42 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/13 16:51:23 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void    ponyOnTheStack(void)
{
    Pony    pony("Tom", "grey", 5);

    std::cout << pony.getColor() << " pony, " << pony.getName()
	<< ", run on the stack !" << std::endl;
}

void    ponyOnTheHeap(void)
{
    Pony *pony = new Pony("Jerry", "brown", 7);

    std::cout << pony->getColor() << " pony, " << pony->getName()
	<< ", run on the heap !" << std::endl;
    delete pony;
}

int	main()
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (0);
}
