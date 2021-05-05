/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 23:40:56 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/06 00:54:15 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	qi = 150;
}

std::string	Brain::identify(void) const
{
	std::string			ptr;
	std::stringstream	tmp;

	tmp << this;
	ptr = tmp.str();
	return (ptr);
}
