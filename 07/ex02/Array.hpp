/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 18:00:29 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/31 19:45:20 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template<class T>
class Array
{
	private:
		T				*_array;
		unsigned int	_size;

	public:
		Array(void);
		Array(unsigned int n);
		~Array(void);
		Array(Array const & toCopy);
		Array<T> &		operator = (Array<T> const & toCopy);
		T &				operator [] (unsigned int i);
		unsigned int	size(void) const;

};

template<class T>
Array<T>::Array(void)
{
	this->_array = new T;
	this->_size = 0;
}

template<class T>
Array<T>::Array(unsigned int n) : _size(n)
{
	this->_array = new T[n];
}

template<class T>
Array<T>::~Array(void)
{
	delete[] this->_array;
}

template<class T>
Array<T>::Array(Array const & toCopy) : _size(toCopy.size())
{
	this->_array = new T[this->_size];
	for(unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = toCopy._array[i];
}

template<class T>
Array<T> &		Array<T>::operator = (Array<T> const & toCopy) 
{
	this->_size = toCopy.size();
	this->_array = new T[this->_size];
	for(unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = toCopy._array[i];
	return (*this);
}

template<class T>
T &				Array<T>::operator [] (unsigned int i)
{
	if (i >= this->_size)
		throw std::exception();
	return (this->_array[i]);
}

template<class T>
unsigned int	Array<T>::size(void) const
{
	return (this->_size);
}

#endif
