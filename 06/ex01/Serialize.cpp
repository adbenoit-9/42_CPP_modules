/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:18:56 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/27 15:37:30 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

void	* serialize(void)
{
	char	*raw = new char[20];

	std::string str = "-Hello-\0";
	for (int i = 0; i < 8; i++)
		*raw++ = str[i];

	int n = rand();
	std::cout << "n : " << n << std::endl;
	*(reinterpret_cast<int*>(raw)) = n;
	raw += sizeof(int);

	str = "-World-\0";
	for (int i = 0; i < 8; i++)
		*raw++ = str[i];

	raw -= (16 + sizeof(int));

	return ((void *)raw);
}

Data	* deserialize(void * raw)
{
	Data * data = new Data;
	char * ptr = static_cast<char*>(raw);

	data->s1.resize(8);
	data->s2.resize(8);

	for (int i = 0; i < 8; i++)
		data->s1[i] = *ptr++;

	data->n = *(reinterpret_cast<int*>(ptr));
	ptr += sizeof(int);

	for (int i = 0; i < 8; i++)
		data->s2[i] = *ptr++;

	return (data);
}
