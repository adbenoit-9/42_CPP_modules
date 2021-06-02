/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:49:45 by adbenoit          #+#    #+#             */
/*   Updated: 2021/06/02 14:44:23 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int n) : _n(n), _i(0)
{
	this->_tab = new int[n];
}

// Span::Span(const Span &toCopy)
// {
// 	this->_tab = new int[n];
// }

Span::~Span(void)
{
	delete[] _tab;
}

// Span	&Span::operator = (const Span &toCopy)
// {

// 	return (*this);
// }

void	Span::addNumber(int n)
{
	if (this->_i == this->_n)
		throw std::exception();
	this->_tab[this->_i] = n;
	++this->_i;
}

int		abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
int		Span::shortestSpan(void)
{
	int	shortest;

	if (this->_i <= 1)
		throw std::exception();
	shortest = abs(this->_tab[0] - this->_tab[1]);
	for (int i = 0; i < this->_i; i++)
	{
		for (int j = 0; j < this->_i; j++)
		{
			if (i != j && shortest > abs(this->_tab[i] - this->_tab[j]))
				shortest = abs(this->_tab[i] - this->_tab[j]);
		}
	}
	return (shortest);
}

int		Span::longestSpan(void)
{
	int	upper;
	int	lower;

	if (this->_i <= 1)
		throw std::exception();
	lower = this->_tab[0];
	for (int i = 1; i < this->_i; i++)
	{
		if (this->_tab[i] < lower)
			lower = this->_tab[i];
	}
	upper = this->_tab[0];
	for (int i = 1; i < this->_i; i++)
	{
		if (this->_tab[i] > upper)
			upper = this->_tab[i];
	}
	return (upper - lower);
}
