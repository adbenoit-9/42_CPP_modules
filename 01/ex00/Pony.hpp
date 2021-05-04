/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:10:14 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/04 12:53:50 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <iomanip>
# include <string>

class   Pony
{
    private:
        std::string name;
        std::string heigh;
        std::string color;
        std::string sex;
        int         age;

    public:
        Pony();
        ~Pony();
};

void    ponyOnTheStack(void);
void    ponyOnTheHeap(void);

#endif