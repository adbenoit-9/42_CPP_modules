/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 23:05:41 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/13 19:20:17 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form*    Intern::makeForm(std::string const & name, std::string const & target)
{
    Form    *form;
    if (name.compare("presidential pardon") == 0)
        form = new PresidentialPardonForm(target);
    if (name.compare("robotomy request") == 0)
        form = new RobotomyRequestForm(target);
    if (name.compare("shrubbery creation") == 0)
        form = new ShrubberyCreationForm(target);
    std::cout << "Intern create " << *form;
    return (form);
}
