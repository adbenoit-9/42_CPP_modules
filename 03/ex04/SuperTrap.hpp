/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 11:59:58 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/16 17:19:25 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include <string>

# include "NinjaTrap.hpp"

class	SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap(std::string name);
		SuperTrap(const SuperTrap& toCopy);
		~SuperTrap(void);
		SuperTrap&	operator = (const SuperTrap& toCopy);
};

#endif
