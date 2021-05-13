/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 00:38:35 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/13 18:07:46 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class   Human
{
	private:
		const Brain _brain;
	
	public:
		Human(void) {}
		~Human(void) {}
		std::string 	identify(void) const;
		const Brain&	getBrain(void) const;
};

#endif