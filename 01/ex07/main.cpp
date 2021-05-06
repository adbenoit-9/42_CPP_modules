/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 11:21:08 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/06 12:59:35 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	errorMessage(std::string error)
{
	std::cout << error << std::endl;
	return (1);
}

int main(int ac, char **av)
{
    if (ac != 4)
        return (errorMessage("Arguments error."));
    std::ifstream    file(av[1]);
    if (!file)
        return (errorMessage("Open file error."));
    std::string    line;
    std::string    buffer;
    while (file)
    {
        std::getline(file, line);
        buffer += line;
        if (file)
            buffer += '\n';
    }
	file.close();
    replace(av[2], av[3], buffer);
    std::ofstream	result("FILENAME.replace");
	if (!result)
        return (errorMessage("Open file error."));
	result << buffer;
	result.close();
    return (0);
}