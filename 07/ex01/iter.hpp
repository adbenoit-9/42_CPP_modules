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

template< typename T >
void	iter(T *array, int size, void fct(T const &))
{
	for(int i = 0; i < size; i++)
		fct(array[i]);
}

template< typename T >
void	display(T const & elem)
{
	std::cout << elem << std::endl;
}

#endif
