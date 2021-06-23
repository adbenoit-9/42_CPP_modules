/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:52:38 by adbenoit          #+#    #+#             */
/*   Updated: 2021/06/23 21:31:08 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <string>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
	private:
		unsigned int		_N;
		std::vector<int>	_tab;

	public:
		Span(void);
		Span(unsigned int n);
		Span(const Span &toCopy);
		~Span(void);
		Span			&operator = (const Span &toCopy);
		void			addNumber(int n);
		void			addNumbers(const std::vector<int>::iterator & first,
						const std::vector<int>::iterator & last);
		int				shortestSpan(void);
		int				longestSpan(void);
};

#endif
