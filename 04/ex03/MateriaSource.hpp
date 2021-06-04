/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 18:14:19 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/10 21:54:49 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://cpp.developpez.com/faq/cpp/?page=Les-classes-en-Cplusplus#Comment-creer-deux-classes-qui-font-reference-l-une-a-l-autre

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*   _inventory[4];
		int         _count;

	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& toCopy);
		~MateriaSource(void);
		MateriaSource& operator = (const MateriaSource& toCopy);
		int				getCount(void) const;
		AMateria*		getMateria(int i) const;
		void 			learnMateria(AMateria* m);
		AMateria* 		createMateria(std::string const & type);
};

#endif
