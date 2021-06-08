/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 19:11:48 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/10 00:14:25 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
#include "ISpaceMarine.hpp"

class   TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine(void);
		TacticalMarine(const TacticalMarine& toCopy);
		virtual ~TacticalMarine(void);
		TacticalMarine&	operator = (const TacticalMarine& toCopy);
		ISpaceMarine*	clone(void) const;
		void			battleCry(void) const;
		void			rangedAttack(void) const;
		void			meleeAttack(void) const;
};

#endif
