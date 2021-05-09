/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 12:05:11 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/09 12:51:08 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{	
	public:
		PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle const & toCopy);
		~PlasmaRifle(void);
		PlasmaRifle&	operator = (const PlasmaRifle& toCopy);
		void	    attack(void) const;  
};

#endif
