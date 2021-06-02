/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 14:53:15 by adbenoit          #+#    #+#             */
/*   Updated: 2021/06/02 17:54:34 by adbenoit         ###   ########.fr       */
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
		MutantStack(void) : std::stack<T>() {}
		typedef    typename std::stack<T>::container_type::iterator iterator;
		iterator	begin(void)
		{
			return(std::stack<T>::c.begin());
		}
		iterator	end(void)
		{
			return(std::stack<T>::c.end());
		}

};

#endif
