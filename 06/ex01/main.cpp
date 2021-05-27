/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:18:30 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/27 15:37:20 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serialize.hpp"

int	main()
{
	Data	* data;
	void	* raw;

	srand(time(NULL));

	std::cout << "\033[1m---- Serialize ----\033[0m" << std::endl;
	std::cout << "s1 : \"-Hello- \"" <<std::endl;
	raw = serialize();
	std::cout << "s2 : \" -World-\"" <<std::endl;
	std::cout << std::endl;

	std::cout << "\033[1m---- Deserialize ----\033[0m" << std::endl;
	data = deserialize(raw);
	std::cout << "s1 : \"" << data->s1 << "\"" <<std::endl;
	std::cout << "n : " << data->n << std::endl;
	std::cout << "s2 : \"" << data->s2 << "\"" <<std::endl;

	return (0);
}
