/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:24:55 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/27 15:06:15 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>
# include <string>
# include <sstream>

typedef struct	s_data
{
	// std::string	s1;
	char		s1[8];
	int			n;
	// std::string	s2;
	char		s2[8];
}				Data;

void	* serialize(void);
Data	* deserialize(void * raw);

#endif
