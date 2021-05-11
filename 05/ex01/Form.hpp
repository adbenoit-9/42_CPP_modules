/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 14:57:24 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/11 21:21:47 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	class GradeTooHighException : virtual public std::exception
	{
		public:
			GradeTooHighException(void) {}

			virtual const char* what() const throw ();
			
	};
	
	class GradeTooLowException : virtual public std::exception
	{
		public:
			GradeTooLowException(void) {}

			virtual const char* what() const throw ();
	};

	private:
		Form(void);
		std::string	_name;
		int			_grade;
		int					_isSigned;
	
	public:
		Form(std::string const & name, int grade);
		Form(Form const & toCopy);
		~Form(void) {}
		Form const &	operator = (Form const & toCopy);

		std::string		getName(void) const;	
		int				getGrade(void) const;	
		int				getState(void) const;	
		void			beSigned(Bureaucrat* b);
};

std::ostream &	operator << (std::ostream & os, Form const & f);

#endif
