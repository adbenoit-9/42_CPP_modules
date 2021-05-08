/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 22:27:35 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/08 23:24:07 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
# define VICTIM_H

# include <iostream>
# include <string>

class   Victim
{
    protected:
        std::string _name;
        Victim(void);

    public:
        Victim(std::string name);
        Victim(const Victim& toCopy);
        ~Victim();
        Victim&     operator = (const Victim& toCopy) throw();
        std::string getName(void) const;
        virtual void        getPolymorphed(void) const;
};

std::ostream&    operator << (std::ostream& os, const Victim& s) throw();

#endif
