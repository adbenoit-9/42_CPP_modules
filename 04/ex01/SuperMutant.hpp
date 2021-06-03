/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 12:05:11 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/09 13:27:36 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant(void);
		SuperMutant(SuperMutant const & toCopy);
		virtual ~SuperMutant(void);
		SuperMutant&	operator = (const SuperMutant& toCopy);
		void			takeDamage(int amount);
};

#endif
