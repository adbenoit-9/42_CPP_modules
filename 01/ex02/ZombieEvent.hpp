/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:19:51 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/13 17:06:00 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <cstdlib>

class   ZombieEvent
{
    private:
        std::string _type;

    public:
        void    setZombieType(std::string type);
        Zombie* newZombie(std::string name);
        void    randomChump(void);
};

#endif