/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 23:44:05 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/12 18:08:06 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        RobotomyRequestForm(void);
        std::string   _target;

    public:
        RobotomyRequestForm(const std::string & target);
        RobotomyRequestForm(RobotomyRequestForm const & toCopy);
        ~RobotomyRequestForm(void);
        RobotomyRequestForm&  operator = (RobotomyRequestForm const & toCopy);

        void    action();
};

#endif
