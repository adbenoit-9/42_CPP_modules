/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 14:57:24 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/11 15:34:06 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include <string>

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
		std::string	const	_name;
		int	const			_grade;
		int					_isSigned;
	
	public:
		Form(std::string const & name, int grade);
		Form(Form const & toCopy);
		~Form(void);
		Form const &	operator = (Form const & toCopy);

		void			getName(void);	
		void			getGrade(void);	
		void			getState(void);	
		void			beSigned(Bureaucrat const & b);
}

ostream &	operator << (ostream & os, Form const & f);

#endif