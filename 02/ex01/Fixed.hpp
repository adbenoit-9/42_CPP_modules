/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:23:49 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/06 23:46:42 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	private:
		int					value;
		const static int	fractionalBits = 8;

	public:
		Fixed();
		Fixed(const Fixed& nb);
		Fixed(const int v);
		Fixed(const float v);
		~Fixed();
		Fixed&		operator = (const Fixed& nb) throw();
		int			getRawBits(void) const;
		void		setRawBits(int const raw);
		float		toFloat(void) const;
		int			toInt(void) const;

};

std::ostream&	operator << (std::ostream& os, const Fixed& nb) throw();

#endif
