/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 16:57:23 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/10 17:59:04 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class	Character : public ICharacter
{
	private:
		Character(void);
		std::string	_name;
		AMateria*	_materia[4];
		int			_numberMateria;
		

	public:
		Character(const std::string& name);
		Character(const Character& toCopy);
		~Character(void);
		Character& 			operator = (const Character& toCopy);
		std::string const & getName(void) const;
		void 				equip(AMateria* m);
		void 				unequip(int idx);
		void 				use(int idx, ICharacter& target);
};

#endif
