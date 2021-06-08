/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 14:57:24 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/11 23:37:58 by adbenoit         ###   ########.fr       */
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
		const std::string	_name;
		const int			_gradeSign;
		const int			_gradeExec;
		bool				_isSigned;
	
	public:
		Form(std::string const & name, int gradeSign, int gradeExec);
		Form(Form const & toCopy);
		~Form(void);
		Form const &	operator = (Form const & toCopy);

		std::string		getName(void) const;	
		int				getGradeSign(void) const;	
		int				getGradeExec(void) const;	
		int				getState(void) const;	
		void			beSigned(Bureaucrat* b);
};

std::ostream &	operator << (std::ostream & os, Form const & f);

#endif
