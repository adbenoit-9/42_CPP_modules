/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 15:54:23 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/14 22:12:33 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

static bool  isNumber(const std::string& str)
{
    if (str == "inf" || str == "-inf" || str == "nan" || str == "-inf"
        || str == "inff" || str == "nanf")
        return true;

    size_t i;
    int point = 0;

    i = str[0] == '-' ? 1 : 0;
    for (; i < str.size(); i++)
    {
        if (!isdigit(str[i]))
        {
            if (str[i] == 'f' && i == str.size() - 1)
                return true;
            else if (str[i] == '.' && ++point > 1)
                return false;
            else if (str[i] != '.')
                return false;
        }
    }
    return true;  
}

int 		main(int ac, char **av)
{
	if (ac != 2 || (av[1][0] && av[1][1] && isNumber(av[1]) == 0) || !av[1][0])
	{
		std::cout << "Wrong scalar type" << std::endl;
		return 1;
	}

	try
	{
		Scalar scalar(av[1]);
		std::cout << scalar;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}