/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 11:09:04 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/09 16:28:31 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H

# include <iostream>
# include <string>
# include <fstream>

class Enemy
{
	private:
		Enemy(void);

	protected:
		std::string _type;
		int			_hp;
		
	public:
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const & toCopy);
		virtual ~Enemy(void);
		Enemy&		operator = (const Enemy& toCopy);
		std::string 	getType(void) const;
		int 			getHP(void) const;
		virtual void 	takeDamage(int amount);
};

#endif
