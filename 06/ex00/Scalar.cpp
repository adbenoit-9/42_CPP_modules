/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:13:22 by adbenoit          #+#    #+#             */
/*   Updated: 2021/06/18 15:47:18 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar(std::string str)
{
    if (str.length() == 1 && !isdigit(str[0]))
    {
        this->_float = static_cast<float>(str[0]);
        this->_double = static_cast<double>(str[0]);
        this->_int = static_cast<int>(str[0]);
        this->_char = str[0];
    }
    else
    {
	    this->_float = std::stof(str);
        this->_double = std::stod(str);
        this->_int = this->_double > 0 ? static_cast<int>(this->_double + 0.5)
                        : static_cast<int>(this->_double - 0.5) ;
        this->_char = static_cast<char>(this->_int);
    }
}

Scalar::Scalar(const Scalar& toCopy)
{
    *this = toCopy;
}

Scalar::~Scalar(void) {}

Scalar&	Scalar::operator = (const Scalar& toCopy)
{
    if (this == &toCopy)
        return *this;

    this->_char = toCopy.getChar();
    this->_double = toCopy.getDouble();
    this->_float = toCopy.getFloat();
    this->_int = toCopy.getInt();

    return *this;
}

char        Scalar::getChar(void) const
{
    return this->_char;
}

int        Scalar::getInt(void) const
{
    return this->_int;
}

float        Scalar::getFloat(void) const
{
    return this->_float;
}

double        Scalar::getDouble(void) const
{
    return this->_double;
}

std::ostream&	operator << (std::ostream& os, const Scalar & scalar)
{
    if (scalar.getInt() >= 32 && scalar.getInt() <= 127)
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

    return os;
}
