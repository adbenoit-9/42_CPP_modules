/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 19:15:27 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/10 00:14:13 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void) : ISpaceMarine()
{
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine& toCopy) : ISpaceMarine(toCopy)
{
}

TacticalMarine::~TacticalMarine(void)
{
    std::cout << "Aaargh..." << std::endl;
}

ISpaceMarine*	TacticalMarine::clone(void) const
{
    ISpaceMarine    *clone = new TacticalMarine;
    return (clone);
}

void	        TacticalMarine::battleCry(void) const
{
    std::cout << "For the holy PLOT!" << std::endl;
}

void	        TacticalMarine::rangedAttack(void) const
{
    std::cout << "* attacks with a bolter *" << std::endl;
}

void			TacticalMarine::meleeAttack(void) const
{
    std::cout << "* attacks with a chainsword *" << std::endl;
}
