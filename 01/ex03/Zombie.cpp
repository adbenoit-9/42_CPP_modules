/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:16:15 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/04 15:20:10 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string n, std::string t)
{
    name = n;
    type = t;
}

void    Zombie::announce(void)
{
    std::cout << "< " << name << " (" << type
    << ") > Braiiiiiiinnnssss..." << std::endl;
}
