/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 18:30:14 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/10 00:11:21 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

# include <iostream>
# include <string>

class   ISpaceMarine
{
	public:
		virtual ~ISpaceMarine(void) {}
		virtual ISpaceMarine*	clone(void) const = 0;
		virtual void			battleCry(void) const = 0;
		virtual void			rangedAttack(void) const = 0;
		virtual void			meleeAttack(void) const = 0;
};

#endif
