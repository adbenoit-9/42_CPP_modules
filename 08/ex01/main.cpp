/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:30:57 by adbenoit          #+#    #+#             */
/*   Updated: 2021/06/02 14:48:55 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	srand(time(NULL));
	{
		std::cout << "span : {5, 3, 17, 9, 11}" << std::endl;
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "longest span : " << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "random span of 1000 numbers" << std::endl;
		Span	sp = Span(1000);
		int		n;
		for (int i = 0; i < 1000; i++)
		{
			n = rand() % 1000;
			sp.addNumber(n);
		}
		std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "longest span : " << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		std::cout << "span : {5}" << std::endl;
		Span	sp = Span(5);
		sp.addNumber(5);
		std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "longest span : " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	try
	{
		std::cout << "empty span" << std::endl;
		Span	sp = Span(5);
		std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "longest span : " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	try
	{
		std::cout << "span size = 1, try to add 2 numbers" << std::endl;
		Span	sp = Span(1);
		sp.addNumber(5);
		sp.addNumber(5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		
}