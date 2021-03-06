/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 14:53:15 by adbenoit          #+#    #+#             */
/*   Updated: 2021/06/23 21:56:50 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <vector>
# include <list>

template<class T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack(const MutantStack &toCopy);
		~MutantStack(void);
		MutantStack& operator = (const MutantStack &toCopy);
		
		typedef    typename std::stack<T>::container_type::iterator iterator;
		iterator	begin(void);
		iterator	end(void);
};

template<class T>
MutantStack<T>::MutantStack(void) : std::stack<T>() {}

template<class T>
MutantStack<T>::MutantStack(const MutantStack & toCopy) : std::stack<T>(toCopy) {}

template<class T>
MutantStack<T>::~MutantStack(void) {}

template<class T>
MutantStack<T>& MutantStack<T>::operator = (const MutantStack<T> &toCopy)
{
    this->c = toCopy.c;
    return (*this);
}

template<class T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return(this->c.begin());
}

template<class T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
	return(this->c.end());
}

#endif
