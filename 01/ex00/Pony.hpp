/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:10:14 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/07 12:38:24 by adbenoit         ###   ########.fr       */
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
        std::string _name;
        std::string _heigh;
        std::string _color;
        std::string _sex;
        int         _age;

    public:
        Pony(void);
        ~Pony(void);
};

void    ponyOnTheStack(void);
void    ponyOnTheHeap(void);

#endif