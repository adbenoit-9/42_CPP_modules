/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 21:31:19 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/08 23:24:00 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
# define SORCERER_H

# include <iostream>
# include <string>

#include "Victim.hpp"

class   Sorcerer
{
    private:
        std::string _name;
        std::string _title;
        Sorcerer(void);

    public:
        Sorcerer(std::string name, std::string title);
        Sorcerer(const Sorcerer& toCopy);
        ~Sorcerer();
        Sorcerer&   operator = (const Sorcerer& toCopy) throw();
        std::string getName(void) const;
        std::string getTitle(void) const;
        void        polymorph(Victim const & v) const;
};

std::ostream&    operator << (std::ostream& os, const Sorcerer& s) throw();

#endif
