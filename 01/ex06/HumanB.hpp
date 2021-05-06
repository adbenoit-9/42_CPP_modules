/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 01:13:58 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/06 02:06:14 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class   HumanB
{
	private:
		Weapon*		weapon;
		std::string	name;
	
	public:
        HumanB(std::string n);
		void	attack(void) const;
        void    setWeapon(Weapon& w);
};

#endif
