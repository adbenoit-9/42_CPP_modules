/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:13:28 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/13 17:34:20 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class   Zombie
{
	private:
		std::string _name;
		std::string _type;
	
	public:
		Zombie(void) {}
		Zombie(std::string name, std::string type);
		~Zombie(void) {}
		void    announce(void);
		
};

#endif