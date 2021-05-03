/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:02:48 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/03 23:23:35 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
	std::string	input;
	int			i;
	Contact		phonebook[8];

	std::cout << "\033[33;1m----- PHONE BOOK -----\033[0m" << std::endl;
	i = 0;
	while (1)
	{
		std::cout << "\n\033[1mWhat do you need ?\033[0m" << std::endl;
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
		{
			if (i >= 8)
				std::cout << "Your Phone Book is full." << std::endl;
			else
				phonebook[i].addContact();
			++i;
		}
		else if (input.compare("SEARCH") == 0)
		{
			for (int j = 0 ; j < i ; j++)
				phonebook[j].displayContact(j);
			std::cout << "\nEnter the index :" << std::endl;
			std::string j;
			std::getline(std::cin, j);
			if (j.length() != 1 || j[0] < '0' || j[0] > i + 47)
				std::cout << "\033[31mContact number " << j << " not found.\033[0m" << std::endl;
			else
				phonebook[j[0] - 48].displayCoor();
		}
		else if (input.compare("EXIT") == 0)
			return (0);
		else if (input.compare("") == 1)
			std::cout << "\033[31mUnknow request\033[0m" << std::endl;
	}
}
