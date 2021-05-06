/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:23:49 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/06 16:46:30 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	private:
		int					value;
		const static int	numberBits = 8;

	public:
		Fixed();
		Fixed(const Fixed& nb);
		~Fixed();
		Fixed&	operator = (const Fixed& nb) throw();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
