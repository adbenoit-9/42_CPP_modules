/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 15:41:24 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/27 18:28:48 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex02.hpp"

int	main()
{
	srand(time(NULL));

	Base * p = generate();
	std::cout << "Identify type from pointer : ";
	identify_from_pointer(p);
	std::cout << "Identify type from reference : ";
	identify_from_reference(*p);
	return (0);
}
