/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 19:15:27 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/09 20:53:14 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void) : ISpaceMarine()
{
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator& toCopy) : ISpaceMarine(toCopy)
{
}

AssaultTerminator::~AssaultTerminator(void)
{
    std::cout << "I’ll be back..." << std::endl;
}

ISpaceMarine*	AssaultTerminator::clone(void)
{
    return (new AssaultTerminator);
}

void	        AssaultTerminator::battleCry(void)
{
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void	        AssaultTerminator::rangedAttack(void)
{
    std::cout << "* does nothing *" << std::endl;
}

void			AssaultTerminator::meleeAttack(void)
{
    std::cout << "* attacks with chainfists *" << std::endl;
}
