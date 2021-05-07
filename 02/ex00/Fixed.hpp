/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:23:49 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/07 12:51:44 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	private:
		int					_value;
		const static int	_fractionalBits = 8;

	public:
		Fixed(void);
		Fixed(const Fixed& nb);
		~Fixed(void);
		Fixed&	operator = (const Fixed& nb) throw();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
