/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 23:44:05 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/12 18:07:22 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        PresidentialPardonForm(void);
        std::string   _target;

    public:
        PresidentialPardonForm(const std::string & target);
        PresidentialPardonForm(PresidentialPardonForm const & toCopy);
        ~PresidentialPardonForm(void);
        PresidentialPardonForm&  operator = (PresidentialPardonForm const & toCopy);

        void    action();
};

#endif
