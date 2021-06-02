/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:52:38 by adbenoit          #+#    #+#             */
/*   Updated: 2021/06/02 14:18:36 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>

class Span
{
	private:
		unsigned int	_n;
		unsigned int	_i;
		int				*_tab;

	public:
		Span(unsigned int n);
		// Span(const Span &toCopy);
		~Span(void);
		// Span	&operator = (const Span &toCopy);
		void	addNumber(int n);
		int		shortestSpan(void);
		int		longestSpan(void);
};

#endif
