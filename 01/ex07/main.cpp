/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 11:21:08 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/07 13:05:42 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int			errorMessage(std::string error)
{
	std::cout << error << std::endl;
	return (1);
}

std::string	getBuffer(const std::ifstream& ifs)
{
	std::stringstream buffer;
	
	buffer << ifs.rdbuf();
	return (buffer.str());
}

int 		main(int ac, char **av)
{
	if (ac != 4)
		return (errorMessage("Arguments error."));
	if (!av[1][0] || !av[2][0] || !av[3][0])
		return (errorMessage("Arguments error."));
    std::ifstream	ifs(av[1]);
	if (!ifs)
		return (errorMessage("Open input file error."));
	std::string		buffer = getBuffer(ifs);
	ifs.close();
	replace(av[2], av[3], buffer);
	std::string	outputFile;
	outputFile = av[1];
	outputFile += ".replace";
	std::ofstream	ofs(outputFile);
	if (!ofs)
		return (errorMessage("Open output file error."));
	ofs << buffer;
	ofs.close();
	return (0);
}
