/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 19:15:27 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/09 20:46:51 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void) : ISpaceMarine()
{
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine& toCopy)
{
}

TacticalMarine::~TacticalMarine(void)
{
    std::cout << "Aaargh..." << std::endl;
}

ISpaceMarine*	TacticalMarine::clone(void)
{
    return (new TacticalMarine);
}

void	        TacticalMarine::battleCry(void)
{
    std::cout << "For the holy PLOT!" << std::endl;
}

void	        TacticalMarine::rangedAttack(void)
{
    std::cout << "* attacks with a bolter *" << std::endl;
}

void			TacticalMarine::meleeAttack(void)
{
    std::cout << "* attacks with a chainsword *" << std::endl;
}
