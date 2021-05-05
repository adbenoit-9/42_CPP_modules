/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:28:09 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/04 15:44:02 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include <cstdlib>

class   ZombieHorde
{
    private:
        Zombie *horde;
        int     nbZombie;

    public:
        ZombieHorde(int n);
        ~ZombieHorde();
        void    announce();
};

#endif