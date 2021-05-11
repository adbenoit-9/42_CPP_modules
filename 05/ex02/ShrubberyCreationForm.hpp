/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 23:44:05 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/11 23:52:00 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    private:
        ShrubberyCreationForm(void);
        std::string   target;

    public:
        ShrubberyCreationForm(const std::string & target);
        ShrubberyCreationForm(ShrubberyCreationForm const & toCopy);
        ~ShrubberyCreationForm(void);
        ShrubberyCreationForm&  operator = (ShrubberyCreationForm const & toCopy);

        void    action();
}

#endif
