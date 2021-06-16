/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 14:52:30 by adbenoit          #+#    #+#             */
/*   Updated: 2021/06/16 19:10:51 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mutantstack.hpp"

void	ft_list(void)
{	
	std::list lst;

	lst.push(5);
	lst.push(17);

	std::cout << lst.top() << std::endl;

	lst.pop();

	std::cout << lst.size() << std::endl;

	lst.push(3);
	lst.push(5);
	lst.push(737);
	lst.push(0);

	MutantStack<int>::iterator it = lst.begin();
	MutantStack<int>::iterator ite = lst.end();
	
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

int main(void)
{
	std::cout << "---- SUBJECT TESTS ----" << std::endl;
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << std::endl;

	std::cout << "---- SAME WITH STD::LIST ----" << std::endl;
	ft_list();
	
	std::cout << "---- ASSIGNEMENT TESTS ----" << std::endl;
	MutantStack<int> ms(mstack);
	MutantStack<int> msCopy;
	msCopy = ms;
	
	return 0;
}
