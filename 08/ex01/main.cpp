/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:30:57 by adbenoit          #+#    #+#             */
/*   Updated: 2021/06/23 21:50:29 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	srand(time(NULL));
	{
		std::cout << "\033[1mspan : {5, 3, 17, 9, 11}\033[0m" << std::endl;
		Span	sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "longest span : " << sp.longestSpan() << std::endl;

		std::cout << "\033[1m\nAssignement test :\033[0m" << std::endl;
		Span	copy;
		copy = sp;
		std::cout << "shortest span : " << copy.shortestSpan() << std::endl;
		std::cout << "longest span : " << copy.longestSpan() << std::endl;
		
		
	}

	std::cout << std::endl;

	try
	{
		std::cout << "\033[1mspan : {0, ..., 9999}\033[0m" << std::endl;
		Span	sp = Span(10000);
		std::vector<int>	v;
		
		sp.addNumber(-4);
		for (int i = 1; i < 10000; i++)
			v.push_back(i);
		sp.addRange(v.begin(), v.end());
		v.clear();
		std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "longest span : " << sp.longestSpan() << std::endl;
		
		std::cout << "\033[1m\nTry to add another number\033[0m" << std::endl;
		sp.addNumber(0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	try
	{
		std::cout << "\033[1mspan : {5}\033[0m" << std::endl;
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
		std::cout << "\033[1mempty span\033[0m" << std::endl;
		Span	sp = Span(5);
		std::cout << "longest span : " << sp.longestSpan() << std::endl;
		std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	try
	{
		std::cout << "\033[1mspan size = 1, try to add 2 numbers\033[0m" << std::endl;
		Span	sp = Span(1);
		sp.addNumber(5);
		sp.addNumber(5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		
}