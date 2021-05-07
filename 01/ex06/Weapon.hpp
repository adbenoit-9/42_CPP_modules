/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 00:58:36 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/07 12:50:19 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class	Weapon
{
	private:
		std::string	_type;

	public:
		Weapon(void);
		Weapon(std::string type);
		const std::string&	getType(void) const;
		void				setType(std::string type);
};

#endif
