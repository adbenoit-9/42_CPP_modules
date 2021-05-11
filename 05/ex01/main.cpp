/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 23:16:57 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/11 21:38:07 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat lise("Lise", 5);
		std::cout << lise;
		Form		form1("Form one", 50);
		std::cout << form1;
		lise.signForm(&form1);
		std::cout << form1;
		Form		form2("Form two", 3);
		std::cout << form2;
		lise.signForm(&form2);
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}