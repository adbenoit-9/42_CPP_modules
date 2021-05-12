/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:59:23 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/12 11:22:36 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void        Contact::addContact(void)
{
    std::cout << "\n";
    std::cout << "First name : ";
    std::getline(std::cin, firstName);
    std::cout << "Last name : ";
    std::getline(std::cin, lastName);
    std::cout <<  "Nickname : ";
    std::getline(std::cin, nickname);
    std::cout <<  "Login : ";
    std::getline(std::cin, login);
    std::cout <<  "Postal address : ";
    std::getline(std::cin, postalAddr);
    std::cout <<  "Email address: ";
    std::getline(std::cin, emailAddr);
    std::cout <<  "Phone number : ";
    std::getline(std::cin, phoneNum);
    std::cout <<  "Birthday Date : ";
    std::getline(std::cin, birthdayDate);
    std::cout <<  "Favorite meal : ";
    std::getline(std::cin, favoriteMeal);
    std::cout <<  "Underwear color : ";
    std::getline(std::cin, underwearColor);
    std::cout <<  "Darkest Secret : ";
    std::getline(std::cin, darkestSecret);
}

void        Contact::displayContact(int i) const
{
    std::cout << std::setw(10) << i << "|";
    display(firstName, 0);
    display(lastName, 0); 
    display(nickname, 1);
    std::cout << std::endl;
}

void        Contact::displayCoor(void) const
{
    std::cout   << "First name: " << firstName << std::endl
                << "Last name: " << lastName << std::endl
                << "Postal Address: " << postalAddr << std::endl
                << "Email Address: " << emailAddr << std::endl
                << "Phone Number: " << phoneNum << std::endl;
}
