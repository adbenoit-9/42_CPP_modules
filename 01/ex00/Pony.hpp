/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:10:14 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/13 17:34:44 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>	
# include <string>

class   Pony
{
	private:
		std::string _name;
		std::string _color;
		int         _age;

	public:
		Pony(std::string name, std::string color, int age);
		~Pony(void);
		std::string	getName(void) const;
		std::string	getColor(void) const;
		int			getAge(void) const;
		
};

#endif