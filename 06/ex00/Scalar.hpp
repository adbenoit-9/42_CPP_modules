/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:50:13 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/14 21:04:35 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
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
		Scalar(std::string str);
		~Scalar(void) {}
		char	getChar(void) const;
		int		getInt(void) const;
		float	getFloat(void) const;
		double	getDouble(void) const;
};

std::ostream&	operator << (std::ostream& os, const Scalar & scalar);

#endif