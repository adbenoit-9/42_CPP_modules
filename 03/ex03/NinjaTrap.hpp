/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 11:59:58 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/08 16:19:07 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap(std::string name);
		NinjaTrap(const NinjaTrap& toCopy);
		~NinjaTrap(void);
		void	ninjaShoebox(FragTrap& target);
		void	ninjaShoebox(ScavTrap& target);
		void	ninjaShoebox(NinjaTrap& target);
};

#endif
