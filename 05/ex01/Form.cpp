/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 14:57:09 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/11 21:34:57 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const & name, int grade)
{
	_name = name;
	_isSigned = 0;
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		_grade = grade;
}

Form::Form(Form const & toCopy)
{
	_name = toCopy._name;
	_grade = toCopy._grade;  
	_isSigned = toCopy._isSigned;
}

Form const &	Form::operator = (Form const & toCopy)
{
	_name = toCopy._name;
	_grade = toCopy._grade;  
	_isSigned = toCopy._isSigned;
	return (*this);
}

std::string	Form::getName(void) const
{
	return (_name);
}

int	        Form::getGrade(void) const
{
	return (_grade);
}

int	        Form::getState(void) const
{
	return (_isSigned);
}

void		Form::beSigned(Bureaucrat *b)
{
	if (_grade < b->getGrade())
		throw GradeTooLowException();
	else
		_isSigned = 1;
}

std::ostream &	operator << (std::ostream & os, Form const & f)
{
	if (f.getState() == 0)
	{
		std::cout << f.getName() << " (grade " << f.getGrade()
		<< " requiered to sign)" << std::endl;
	}
	else
	{
		std::cout << f.getName() << " (signed)" << std::endl;
	}
	return (os);
}

const char* Form::GradeTooHighException::what(void) const throw ()
{
    return "Grade too high.";
}

const char* Form::GradeTooLowException::what(void) const throw ()
{
    return "Grade too low.";
}
