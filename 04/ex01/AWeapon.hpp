/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 11:09:04 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/09 11:45:21 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
# define AWEAPON_H

# include <iostream>
# include <string>

class AWeapon
{
	private:
		AWeapon();

	protected:
		std::string _name;
		int			_damage;
		int			_APCost;
		
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const & toCopy);
		~AWeapon(void);
		AWeapon&		operator = (const AWeapon& toCopy);
		std::string 	getName(void) const;
		int 			getAPCost(void) const;
		int 			getDamage(void) const;
		virtual void	attack(void) const = 0;  
};

#endif
