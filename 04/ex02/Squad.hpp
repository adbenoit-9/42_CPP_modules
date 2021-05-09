/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 19:52:08 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/10 00:00:11 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISpaceMarine.hpp"
# include "ISquad.hpp"

class   Squad : public ISquad
{
	private:
		ISpaceMarine**	_spaceMarine;
		int				_numberUnit;

	public:
		Squad(void);
		Squad(const Squad& toCopy);
		~Squad(void);
		int				getCount(void) const;
		int				push(ISpaceMarine*); 
		ISpaceMarine*	getUnit(int n) const;
		Squad&	operator = (const Squad& toCopy);
};

#endif
