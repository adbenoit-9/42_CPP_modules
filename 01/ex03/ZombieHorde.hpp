/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:28:09 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/13 17:23:49 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include <cstdlib>

class   ZombieHorde
{
    private:
        Zombie *_zombies;
        int     _nbZombie;

    public:
        ZombieHorde(int n);
        ~ZombieHorde(void);
        void    announce(void);
};

#endif