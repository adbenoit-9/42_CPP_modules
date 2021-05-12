/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 23:05:41 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/12 23:12:58 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form*    Intern::makeForm(std::string const & name, std::string const & target)
{
    if (name.compare("presidential pardon"))
        return (&PresidentialPardonForm(target));
    if (name.compare("robotomy request"))
        return (&RobotomyRequestForm(target));
    if (name.compare("shrubbery creation"))
        return (&ShrubberyCreationForm(target));
}
