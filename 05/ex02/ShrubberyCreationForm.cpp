/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 23:43:47 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/12 18:09:31 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target) :
Form("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & toCopy) : Form(toCopy) , _target(toCopy._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm&  ShrubberyCreationForm::operator = (ShrubberyCreationForm const & toCopy)
{
	*this = toCopy;
	return (*this); 
}

static std::string		setTree(void)
{
	std::string	tree;
	
	tree = "      (  (    )\n";
	tree += "   ( (     )   )\n";
	tree += "   ( (         )\n";
	tree += "  (           / )\n";
	tree += " ( ( \\\\       )\n";
	tree += "     ( |  // )\n";
	tree += "       |   |\n";
	tree += "       |   |\n";
	tree += "       |   |\n";
	tree += "       |   |\n";
	tree += "       |   |\n";
	return (tree);
}

void    ShrubberyCreationForm::action(void)
{
	std::ofstream file;

	file.open(_target + "_shrubbery");
	file << setTree() << std::endl;
	file << setTree();
	
}
