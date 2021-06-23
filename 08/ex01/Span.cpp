/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:49:45 by adbenoit          #+#    #+#             */
/*   Updated: 2021/06/23 21:39:23 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _N(0) {}

Span::Span(unsigned int n) : _N(n) {}

Span::Span(const Span &toCopy)
{
	*this = toCopy;
}

Span::~Span(void)
{
	this->_tab.clear();
}

Span	&Span::operator = (const Span &toCopy)
{
	if (this == &toCopy)
		return (*this);
	this->_N = toCopy._N;
	this->_tab = toCopy._tab;
	return (*this);
}

void	Span::addNumber(int n)
{
	if (this->_tab.size() == this->_N)
		throw std::exception();
	this->_tab.push_back(n);
}

void	Span::addNumbers(std::vector<int>::iterator const &first,
		std::vector<int>::iterator const &last)
{
	for (std::vector<int>::iterator it = first; it < last; it++)
	{
		if (this->_tab.size() >= this->_N)
			throw std::exception();
		else
			this->_tab.push_back(*it);
	}
}

int		Span::shortestSpan(void)
{
	if (this->_tab.size() < 2)
		throw std::exception();

	std::vector<int>	sortTab(this->_tab);
	std::sort(sortTab.begin(), sortTab.end());

	int shortest = sortTab[1] - sortTab[0];
	for (int i = 1; i < sortTab.size() - 1; i++)
		if (shortest > sortTab[i + 1] - sortTab[i])
			shortest = sortTab[i + 1] - sortTab[i];

	return (shortest);
}

int		Span::longestSpan(void)
{
	if (this->_tab.size() < 2)
		throw std::exception();

	std::vector<int>	sortTab(this->_tab);

	std::sort(sortTab.begin(), sortTab.end());
	return (sortTab.back() - sortTab.front());
}
