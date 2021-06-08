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

Intern::Intern(void) {}

Intern::Intern(const Intern &toCopy)
{
    *this = toCopy;
}

Intern::~Intern(void) {}

Intern& Intern::operator = (const Intern &toCopy)
{
    (void)toCopy;
    return (*this);
}

Form*   Intern::makeForm(std::string const & name, std::string const & target)
{
    Form    *form[3] = {new PresidentialPardonForm(target), new RobotomyRequestForm(target), new ShrubberyCreationForm(target)};

    for (int i = 0; i < 3; i++)
    {
        if (name.compare(form[i]->getName()) == 0)
        {
            std::cout << "Intern create " << *form[i] << std::endl;
            return (form[i]);
        }
        delete form[i];
    }
    std::cout << "Unknow form" << std::endl;
    return (0);
}
