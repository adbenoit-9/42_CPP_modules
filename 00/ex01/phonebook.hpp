/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:20:17 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/07 12:37:30 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>

class   Contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string login;
        std::string postalAddr;
        std::string emailAddr;
        std::string phoneNum;
        std::string birthdayDate;
        std::string favoriteMeal;
        std::string underwearColor;
        std::string darkestSecret;

    public:
        void    addContact(void);
        void    searchContact(int i);
        void    displayContact(int i);
        void    displayCoor(void);
};

#endif
