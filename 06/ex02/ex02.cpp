/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 15:49:37 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/27 18:28:46 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex02.hpp"

Base	* generate(void)
{
	int i = rand() % 3;
	if (i == 0)
	{
		A *pa = new A;
		std::cout << "A generate" << std::endl;
		return pa;
	}
	else if (i == 1)
	{
		B *pb = new B;
		std::cout << "B generate" << std::endl;
		return pb;
	}
	else
	{
		C *pc = new C;
		std::cout << "C generate" << std::endl;
		return pc;
	}
}

void	identify_from_pointer(Base * p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void	identify_from_reference(Base & p)
{
	if (dynamic_cast<A *>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(&p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Error" << std::endl;
}
