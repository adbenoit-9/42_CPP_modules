/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 10:22:38 by adbenoit          #+#    #+#             */
/*   Updated: 2021/06/02 12:29:44 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <array>
# include <vector>
# include <algorithm>

template<typename T>
typename T::iterator	easyfind(T &container, int n)
{
	typename T::iterator	it;

	it = std::find(container.begin(), container.end(), n);
	if (it == container.end())
		throw std::exception();
	return (it);
}

#endif
