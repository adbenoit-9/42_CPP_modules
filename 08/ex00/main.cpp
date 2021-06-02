/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 10:34:25 by adbenoit          #+#    #+#             */
/*   Updated: 2021/06/02 12:15:12 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	{
		std::array<int, 3>	tab = {10, 20, 44};
		std::array<int, 3>::iterator n = easyfind(tab, 20);
		std::cout << "Search 20 in vector {10, 20, 44}\t:\t" << *n << std::endl;

		try
		{
			n = easyfind(tab, 40);
			std::cout << "Search 40 in vector {10, 20, 44}\t:\t" << *n << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	try
	{
		std::array<int, 3>	emp;
		std::array<int, 3>::iterator n = easyfind(emp, 20);
		std::cout << "Search 12 in empty container\t\t:\t" << *n << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	{
		std::vector<int>	v(4, 12);
		std::vector<int>::iterator n = easyfind(v, 12);
		std::cout << "Search 12 in vector {12, 12, 12, 12}\t:\t" << *n << std::endl;
	}
}