/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 19:52:08 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/09 20:38:53 by adbenoit         ###   ########.fr       */
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
	   int				getCount(void);
	   ISpaceMarine*	getUnit(int n);
	   int				push(ISpaceMarine*); 
};

#endif
