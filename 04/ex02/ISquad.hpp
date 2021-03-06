/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 17:52:59 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/09 23:34:20 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

class	ISquad
{
	public:
		virtual ~ISquad() {}
		virtual int				getCount(void) const = 0;
		virtual ISpaceMarine*	getUnit(int n) const = 0;
		virtual int				push(ISpaceMarine* newSM) = 0;
};

#endif
