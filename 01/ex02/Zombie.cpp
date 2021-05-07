/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:16:15 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/07 12:41:23 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
    _name = name;
    _type = type;
}

void    Zombie::announce(void)
{
    std::cout << "< " << _name << " (" << _type
    << ") > Braiiiiiiinnnssss..." << std::endl;
}
