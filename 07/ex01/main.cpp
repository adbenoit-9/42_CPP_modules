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

int main(void)
{
	char str[4] = {'t', 'e', 's', 't'};
	std::cout << "Array : test" << std::endl;
	iter(str, 4 , display);

	std::cout << std::endl;

	int tab[] = {0, 1, 2, 3, 4};
	std::cout << "Array : 1234" << std::endl;
	iter(tab, 5, display);

	return 0;
}
