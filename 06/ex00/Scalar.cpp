/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:13:22 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/14 21:04:28 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar(std::string str)
{
	_float = std::stof(str);
    _double = std::stod(str);
    _int = _float;
    _char = _int;
}

char        Scalar::getChar(void) const
{
    return (_char);
}

int        Scalar::getInt(void) const
{
    return (_int);
}

float        Scalar::getFloat(void) const
{
    return (_float);
}

double        Scalar::getDouble(void) const
{
    return (_double);
}

const char* Scalar::ConversionFailed::what() const throw ()
{
    return ("Conversion Failed");
}

std::ostream&	operator << (std::ostream& os, const Scalar & scalar)
{
    if (scalar.getChar() >= 32 && scalar.getChar() <= 127)
        std::cout << "char: '" << scalar.getChar() << "'" << std::endl;
    else if (isnan(scalar.getFloat()))
        std::cout << "char: impossible" << std::endl;
    else
        std::cout << "char: Non displayable" <<std::endl;

    if (isnan(scalar.getFloat()))
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << scalar.getInt() << std::endl;

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << scalar.getFloat() << "f" << std::endl;
    std::cout << "double: " << scalar.getDouble() << std::endl;
    return (os);
}

