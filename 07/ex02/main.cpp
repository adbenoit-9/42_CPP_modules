/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 18:56:50 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/31 19:50:19 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array<int> tab(10);
	
	for (int i = 0; i < 10; i++)
		tab[i] = i;

	try
	{
		std::cout << "tab = ";
		for (int i = 0; i < 15; i++)
			std::cout << tab[i] << " ";
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	{
		Array<int> copy;

		copy = tab;
			std::cout << "copy = ";
		for (int i = 0; i < copy.size(); i++)
				std::cout << copy[i] << " ";
		std::cout << std::endl;
	}

	{
		Array<int> copy(tab);

		std::cout << "constructor copy = ";
		for (int i = 0; i < copy.size(); i++)
				std::cout << copy[i] << " ";
		std::cout << std::endl;
	}

	std::cout << std::endl;

	Array<char> str(5);

	for (int i = 0; i < 5; i++)
		str[i] = '!';

	std::cout << "str = ";
	for (int i = 0; i < str.size(); i++)
		std::cout << str[i];
	std::cout << std::endl;
	return 0;
}