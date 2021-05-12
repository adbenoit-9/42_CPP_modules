/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 23:16:57 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/12 23:15:29 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{

	Bureaucrat lise("Lise", 6);
	std::cout << lise;
	
	try
	{
		ShrubberyCreationForm SCF("maison");
		std::cout << SCF;
		lise.signForm(&SCF);
		SCF.execute(lise);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		PresidentialPardonForm PPF("maison");
		std::cout << PPF;
		lise.signForm(&PPF);
		PPF.execute(lise);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		lise.incrementGrade();
		std::cout << lise;
		RobotomyRequestForm RRF("maison");
		std::cout << RRF;
		lise.signForm(&RRF);
		RRF.execute(lise);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		PresidentialPardonForm PPF("maison");
		std::cout << PPF;
		lise.signForm(&PPF);
		PPF.execute(lise);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Intern randomIntern;
	randomIntern.makeForm("presidential request", "maison");
}