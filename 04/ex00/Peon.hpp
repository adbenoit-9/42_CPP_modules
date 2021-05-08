/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 21:25:30 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/08 23:23:56 by adbenoit         ###   ########.fr       */
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
        ~Peon(void);
        Peon&   operator = (const Peon& toCopy);
        virtual void    getPolymorphed(void) const;
};

#endif
