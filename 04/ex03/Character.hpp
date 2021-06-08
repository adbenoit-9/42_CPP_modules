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
		const std::string&	_name;
		AMateria*			_inventory[4];
		int					_count;
		

	public:
		Character(const std::string& name);
		Character(const Character& toCopy);
		virtual ~Character(void);
		Character& 			operator = (const Character& toCopy);
		std::string const & getName(void) const;
		int					getCount(void) const;
		AMateria*			getMateria(int i) const;
		void 				equip(AMateria* m);
		void 				unequip(int idx);
		void 				use(int idx, ICharacter& target);
};

#endif
