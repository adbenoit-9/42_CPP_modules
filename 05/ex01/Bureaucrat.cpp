/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 23:20:36 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/11 15:37:17 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const & name, int grade)
{
	_name = name;
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else 
		_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& toCopy) : _name(toCopy.getName())
{
	_name = toCopy.getName();
	_grade = toCopy.getGrade();
}
		
Bureaucrat&	Bureaucrat::operator = (const Bureaucrat& toCopy)
{
	_name = toCopy.getName();
	_grade = toCopy.getGrade();
	return (*this);
}

std::string const &	Bureaucrat::getName(void) const
{
	return (_name);
}

int			Bureaucrat::getGrade(void) const
{
	return (_grade);
}

std::ostream&	operator << (std::ostream& os, const Bureaucrat& b)
{
	std::cout << b.getName() << ", bureaucrat garde " << b.getGrade() << std::endl;
	return (os);
}

void		Bureaucrat::incrementGrade(void)
{
	if (_grade < 2)
		throw GradeTooHighException();
	else
		--_grade;
}

void		Bureaucrat::decrementGrade(void)
{
	if (_grade > 149)
		throw GradeTooLowException();
	else
		++_grade;
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw ()
{
    return "Grade too high exception.";
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw ()
{
    return "Grade too low exception.";
}

void		Bureaucrat::signForm(Form const & f)
{
	try
	{
		f.beSigned();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
