/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:07:20 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/04 14:08:33 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void memoryLeak()
{
    std::string*        panther = new std::string("String panther");

    std::cout << *panther << std::endl;
    delete panther;
}
