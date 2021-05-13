/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 00:42:13 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/13 18:08:24 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

const Brain&	Human::getBrain(void) const
{
	return (_brain);
}

std::string		Human::identify(void) const
{
	std::string ptr;

	ptr = _brain.identify();
	return (ptr);
}