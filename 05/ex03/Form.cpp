/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 14:57:09 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/11 23:40:08 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const & name, int gradeSign, int gradeExec) : _name(name),
					_gradeSign(gradeSign), _gradeExec(gradeExec), _isSigned(0)
{
	if (_gradeSign < 1 || _gradeExec < 1)
		throw GradeTooHighException();
	else if (_gradeSign > 150 || _gradeExec > 150)
		throw GradeTooLowException();
}

Form::Form(Form const & toCopy) : _name(toCopy._name), _gradeSign(toCopy._gradeSign),
								_gradeExec(toCopy._gradeExec), _isSigned(toCopy._isSigned) {}

Form const &	Form::operator = (Form const & toCopy)
{
	_isSigned = toCopy._isSigned;
	return (*this);
}

std::string	Form::getName(void) const
{
	return (_name);
}

int	        Form::getGradeSign(void) const
{
	return (_gradeSign);
}

int	        Form::getGradeExec(void) const
{
	return (_gradeExec);
}

int	        Form::getState(void) const
{
	return (_isSigned);
}

void		Form::beSigned(Bureaucrat *b)
{
	if (_gradeSign < b->getGrade())
		throw GradeTooLowException();
	else
		_isSigned = 1;
}

std::ostream &	operator << (std::ostream & os, Form const & f)
{
	if (f.getState() == 0)
		std::cout	<< f.getName() << " (unsigned) :" << std::endl;
	else
		std::cout << f.getName() << " (signed) :" << std::endl;
	std::cout	<< "\tgrade requiered to sign : " << f.getGradeSign() << std::endl
				<< "\tgrade requiered to execute : " << f.getGradeExec() << std::endl;
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
