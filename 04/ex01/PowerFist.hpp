/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 12:05:11 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/09 12:51:13 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_H
# define POWERFIST_H

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	private:
		
	public:
		PowerFist(void);
		PowerFist(PowerFist const & toCopy);
		virtual ~PowerFist(void);
		PowerFist&	operator = (const PowerFist& toCopy);
		void	    attack(void) const;  
};

#endif
