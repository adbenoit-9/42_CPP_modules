/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 15:41:39 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/31 17:54:20 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template< typename T, typename F >
void	iter(T *array, int size, F fct)
{
	for(int i = 0; i < size; i++)
		fct(array[i]);
}

template<typename T>
void	display(T & elem)
{
	std::cout << elem << std::endl;
}

#endif
