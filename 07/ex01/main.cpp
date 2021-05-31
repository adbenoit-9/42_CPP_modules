/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 15:41:15 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/31 17:55:50 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	display_char(char & elem)
{
	std::cout << elem << std::endl;
}

int main(void)
{
	char str[4] = {'t', 'e', 's', 't'};
	std::cout << "Array : test" << std::endl;
	iter<char, void(char &)>( str, 4 , display );

	int array[4] = {1, 2, 3, 4};
	std::cout << "Array : 1234" << std::endl;
	iter<int, void(int &)>( array, 4 , display );

	return 0;
}
