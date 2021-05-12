/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:20:17 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/12 11:01:02 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

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
        Contact(void) {}
        ~Contact(void) {}
        void    addContact(void);
        void    searchContact(int i);
        void    displayContact(int i);
        void    displayCoor(void);
};

void    display(std::string str, int last);

#endif
