/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 23:20:36 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/11 23:41:39 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else 
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& toCopy) : _name(toCopy.getName()), _grade(toCopy.getGrade()) {}
		
Bureaucrat&	Bureaucrat::operator = (const Bureaucrat& toCopy)
{
	this->_grade = toCopy.getGrade();
	return (*this);
}

std::string const	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int			Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

std::ostream&	operator << (std::ostream& os, const Bureaucrat& b)
{
	std::cout << b.getName() << ", bureaucrat garde " << b.getGrade() << std::endl;
	return (os);
}

void		Bureaucrat::incrementGrade(void)
{
	if (this->_grade < 2)
		throw GradeTooHighException();
	else
		--this->_grade;
}

void		Bureaucrat::decrementGrade(void)
{
	if (this->_grade > 149)
		throw GradeTooLowException();
	else
		++this->_grade;
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw ()
{
    return "Grade too high.";
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw ()
{
    return "Grade too low.";
}
