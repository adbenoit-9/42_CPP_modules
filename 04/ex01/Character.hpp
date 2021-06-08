/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 13:34:33 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/09 16:25:07 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include <iostream>
# include <string>

# include "Enemy.hpp"
# include "AWeapon.hpp"

class Character
{
	private:
		Character(void);
		std::string _name;
		int			_AP;
        AWeapon     *_weapon;
		
	public:
		Character(std::string const & name);
		Character(Character const & toCopy);
		~Character(void);
		Character&		operator = (const Character& toCopy);
        void            recoverAP(void);
        void            equip(AWeapon *weapon);
        void            attack(Enemy *enemy);
		std::string 	getName(void) const;
		int          	getAP(void) const;
		AWeapon         *getWeapon(void) const;
};

std::ostream&	operator << (std::ostream& os, const Character& character);


#endif
