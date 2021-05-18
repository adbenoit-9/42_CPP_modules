/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 11:59:58 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/18 17:55:34 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	NinjaTrap : public virtual ClapTrap
{
	public:
		NinjaTrap(std::string name);
		NinjaTrap(const NinjaTrap& toCopy);
		~NinjaTrap(void);
		NinjaTrap&	operator = (const NinjaTrap& toCopy);
		void	ninjaShoebox(FragTrap& target);
		void	ninjaShoebox(ScavTrap& target);
		void	ninjaShoebox(NinjaTrap& target);
		void	ninjaShoebox(ClapTrap& target);
};

#endif
