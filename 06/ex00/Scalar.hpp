/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:50:13 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/15 15:05:30 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>
#include <math.h>
#include <exception>

class Scalar
{
	private:
		Scalar(void);
		float   _float;
		double	_double;
		int		_int;
		char	_char;
	
	public:
		class	WrongScalarType : virtual public std::exception
		{
			public:
				WrongScalarType(void) {}
				virtual const char* what() const throw();
		};

		Scalar(std::string str);
		Scalar(const Scalar& toCopy);
		~Scalar(void);
		Scalar&	operator = (const Scalar& toCopy);

		char	getChar(void) const;
		int		getInt(void) const;
		float	getFloat(void) const;
		double	getDouble(void) const;
};

std::ostream&	operator << (std::ostream& os, const Scalar & scalar);

#endif
