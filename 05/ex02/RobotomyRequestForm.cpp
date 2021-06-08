/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 23:43:47 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/12 22:47:27 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string & target) :
Form("robotomy request", 25, 5), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & toCopy) : Form(toCopy) , _target(toCopy._target) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm&  RobotomyRequestForm::operator = (RobotomyRequestForm const & toCopy)
{
	this->Form::operator=(toCopy);
	return (*this); 
}

void					RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getGradeExec() < executor.getGrade())
		throw GradeTooLowException();
	else
		std::cout << "Bzzzzz... " << _target << " has been robotomized successfully 50\% of the time" << std::endl;
}
