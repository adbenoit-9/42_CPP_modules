/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbenoit <adbenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 23:19:51 by adbenoit          #+#    #+#             */
/*   Updated: 2021/05/11 23:16:16 by adbenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include <string>

# include "Form.hpp"

class Form;

class Bureaucrat
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
		Bureaucrat(void) {}
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat(std::string const & name, int grade);
		Bureaucrat(const Bureaucrat& toCopy);
		~Bureaucrat(void) {}
		Bureaucrat&			operator = (const Bureaucrat& toCopy);
		
		std::string const &	getName(void) const;
		int					getGrade(void) const;
		void				incrementGrade(void);
		void				decrementGrade(void);
		void				signForm(Form* f);
};

std::ostream&	operator << (std::ostream& os, const Bureaucrat& b);

#endif
