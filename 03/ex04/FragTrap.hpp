/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 11:59:58 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/08 18:52:16 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>

# include "ClapTrap.hpp"

class	FragTrap : public virtual ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap& toCopy);
		~FragTrap(void);
		FragTrap&	operator = (const FragTrap& toCopy) throw();
		void		vaulthunter_dot_exe(std::string const & target);
};

#endif
