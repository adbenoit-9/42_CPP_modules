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

static bool  isNumber(std::string str)
{
    if (!str.compare("inf") || !str.compare("-inf") || !str.compare("nan")
    || !str.compare("-inff") || !str.compare("inff") || !str.compare("nanf"))
        return (1);

    int point = 0;

    for (int i = 0; str[i]; i++)
    {
        if (!isdigit(str[i]))
        {
            if (str[i] == '-' && i == 0)
                ;
            else if (str[i] == 'f' && !str[i + 1])
                return (1);
            else if (str[i] == '.')
                ++point;
            else
                return (0);
        }
    }
    if (point > 1)
        return (0);
    return (1);  
}

int 		main(int ac, char **av)
{
	if (ac != 2 || (av[1][0] && av[1][1] && isNumber(av[1]) == 0) || !av[1][0])
	{
		std::cout << "Wrong scalar type" << std::endl;
		return (1);
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
	return (0);
}