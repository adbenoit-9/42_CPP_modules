/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 23:16:57 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/11 14:44:19 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat lise("Lise", 2);
		std::cout << lise;
		lise.incrementGrade();
		std::cout << lise;
		lise.incrementGrade();
		std::cout << lise;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat robert("Robert", 149);
		std::cout << robert;
		robert.decrementGrade();
		std::cout << robert;
		robert.decrementGrade();
		std::cout << robert;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

    try
	{
		Bureaucrat tom("Tom", 200);
		std::cout << tom;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

    try
	{
		Bureaucrat tom("Tom", 0);
		std::cout << tom;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
}