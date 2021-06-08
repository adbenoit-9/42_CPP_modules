/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 23:43:47 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/12 22:42:16 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string & target) :
Form("presidential pardon", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & toCopy) : Form(toCopy) , _target(toCopy._target) {}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm&  PresidentialPardonForm::operator = (PresidentialPardonForm const & toCopy)
{
	this->Form::operator=(toCopy);
	return (*this); 
}

void					PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getGradeExec() < executor.getGrade())
		throw GradeTooLowException();
	else
		std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
