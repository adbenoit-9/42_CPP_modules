/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 21:25:30 by adbenoit          #+#    #+#             */
/*   Updated: 2021/06/03 12:03:53 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
# define PEON_H

# include "Victim.hpp"

class   Peon : public Victim
{
    private:
        Peon(void);
    public:
        Peon(std::string name);
        Peon(const Peon& toCopy);
        virtual ~Peon(void);
        Peon&           operator = (const Peon& toCopy);
        virtual void    getPolymorphed(void) const;
};

#endif
