/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wizard.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 21:25:30 by adbenoit          #+#    #+#             */
/*   Updated: 2021/06/03 11:54:48 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WIZARD_H
# define WIZARD_H

# include "Sorcerer.hpp"

class   Wizard : public Sorcerer
{
    private:
        Wizard(void);
    public:
        Wizard(std::string name, std::string title);
        Wizard(const Wizard& toCopy);
        ~Wizard(void);
        Wizard&         operator = (const Wizard& toCopy);
};

#endif
