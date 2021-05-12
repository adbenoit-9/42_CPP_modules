/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:02:48 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/12 11:08:31 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    display(std::string str, int last)
{
    if (str.length() >= 10)
        std::cout << str.substr(0, 9) << ".";
    else
        std::cout << std::setw(10) << str;
    if (last == 0)
        std::cout << "|";
}

void	searchContact(Contact phonebook[8], int i)
{
	display("Index", 0);
	display("First Name", 0);
	display("Last Name", 0);
	display("Nickname", 1);
	std::cout	<< std::endl
				<< "----------|"
				<< "----------|"
				<< "----------|"
				<< "----------" << std::endl;
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
				std::cout << "\033[31mNo place left in your phone book.\033[0m" << std::endl;
			else
			{
				phonebook[i].addContact();
				++i;
			}
		}
		else if (input.compare("SEARCH") == 0)
			searchContact(phonebook, i);
		else if (input.compare("EXIT") == 0)
			return (0);
		else if (input.compare("") == 1)
			std::cout << "\033[31mUnknow request\033[0m" << std::endl;
	}
}
