/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:13:22 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/15 15:08:29 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

static bool  isNumber(std::string str)
{
    if (!str.compare("inf") || !str.compare("-inf") || !str.compare("nan")
    || !str.compare("-inff") || !str.compare("inff") || !str.compare("nanf"))
        return (1);
    for (int i = 0; str[i]; i++)
    {
        if (!isdigit(str[i]))
        {
            if (str[i] == '-' && i == 0)
                ;
            else if (str[i] == 'f' && !str[i + 1])
                return (1);
            else
                return (0);
        }
    }
    return (1);  
}

Scalar::Scalar(std::string str)
{
    if (isNumber(str) == 1)
    {
	    _float = std::stof(str);
        _double = std::stod(str);
        _int = _float;
        _char = _int;
    }
    else if (str.length() == 1)
    {
        _float = str[0];
        _double = str[0];
        _int = str[0];
        _char = str[0]; 
    }
    else
        throw WrongScalarType();
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

const char* Scalar::WrongScalarType::what() const throw()
{
	return "Wrong scalar type";
}