/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 13:05:36 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/10 21:55:55 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string _type;
		unsigned int _xp;

	public:
		AMateria(std::string const & type);
		AMateria(const AMateria& toCopy);
		virtual ~AMateria(void);
		AMateria&			operator = (const AMateria& toCopy);
		std::string const & getType(void) const;
		unsigned int		getXP(void) const;
		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter& target);
};

#endif
