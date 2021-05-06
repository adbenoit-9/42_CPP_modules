/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 11:21:41 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/06 13:03:43 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

void	replace(std::string s1, std::string s2, std::string& buffer)
{
    size_t      found;

    found = buffer.find(s1, 0);
    while (found < buffer.length())
    {
        buffer.replace(found, s1.length(), s2, 0, s2.length());
        found = buffer.find(s1, 0);
    }
}
