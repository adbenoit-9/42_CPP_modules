/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 15:42:20 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/27 18:22:51 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_HPP
# define EX02_HPP

# include <iostream>

class Base 
{
	public:
		virtual ~Base(void) {}
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base	* generate(void);
void	identify_from_pointer(Base * p);
void	identify_from_reference(Base & p);

#endif
