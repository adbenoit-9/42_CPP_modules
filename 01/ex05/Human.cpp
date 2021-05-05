/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 00:42:13 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/06 00:54:03 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Brain	    Human::getBrain(void) const
{
    return (brain);
}


std::string	Human::identify(void) const
{
    std::string ptr;

    ptr = brain.identify();
    return (ptr);
}