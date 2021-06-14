/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:36:30 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/31 15:29:40 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>


template<typename T>
void	swap(T & a, T & b)
{
	T tmp = a;

	a = b;
	b = tmp;
}

template<typename T>
T		min(T const & a, T const & b)
{
	if (a < b)
		return (a);
	return (b);
}

template<typename T>
T		max(T const & a, T const & b)
{
	if (a > b)
		return (a);
	return (b);
}

/*class Awesome
{
	public:
		Awesome( int n ) : _n( n ) {}
		int getn(void) const { return(this->_n); }
		bool operator==( Awesome const & rhs ) const { return (this->_n == rhs.getn()); }
		bool operator!=( Awesome const & rhs ) const { return (this->_n != rhs.getn()); }
		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs.getn()); }
		bool operator<( Awesome const & rhs ) const { return (this->_n < rhs.getn()); }
		bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs.getn()); }
		bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs.getn()); }

	private:
		int _n;
};

#include <fstream>
std::ostream& operator<<(std::ostream& os, Awesome const & rhs )
{
	std::cout << rhs.getn();
	return (os);
}*/

#endif
