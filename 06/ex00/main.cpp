/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 15:54:23 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/14 21:50:10 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Arguments error." << std::endl;
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