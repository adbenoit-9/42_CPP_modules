/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 23:16:57 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/13 19:23:14 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern randomIntern;
		Form *f;
		f = randomIntern.makeForm("presidential pardon", "maison");
		delete f;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Intern randomIntern;
		Form *f;
		f = randomIntern.makeForm("robotomy request", "maison");
		delete f;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Intern randomIntern;
		Form *f;
		f = randomIntern.makeForm("shrubbery creation", "maison");
		delete f;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Intern randomIntern;
		Form *f;
		f = randomIntern.makeForm("unknow", "maison");
		delete f;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}