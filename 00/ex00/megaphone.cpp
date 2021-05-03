/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 11:21:39 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/03 16:03:56 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int ft_islower(char c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1 ; i < ac ; i++)
    {
        for (int j = 0 ; av[i][j] ; j++)
        {
            if (ft_islower(av[i][j]) == 1)
                av[i][j] -= 32;
        }
        std::cout << av[i];
    }
    std::cout << std::endl;
    return (0);
}