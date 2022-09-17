/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:59:05 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/17 20:51:29 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Form.hpp"

#define RESET "\e[0m"
#define RED "\e[0;31m"
#define BRED "\e[1;31m"
#define SRED "\e[4;31m"
#define GREEN "\e[0;32m"
#define BGREEN "\e[1;32m"
#define SGREEN "\e[4;32m"
#define YELLOW "\e[0;33m"
#define BYELLOW "\e[1;33m"
#define SYELLOW "\e[4;33m"
#define BLUE "\e[0;34m"
#define BBLUE "\e[1;34m"
#define SBLUE "\e[4;34m"
#define PURPLE "\e[0;35m"
#define BPURPLE "\e[1;35m"
#define SPURPLE "\e[4;35m"
#define CYAN "\e[0;36m"
#define BCYAN "\e[1;36m"
#define SCYAN "\e[4;36m"

// ATTENTION : utiliser la forme canonique de Coplien !!

class Form;

class Bureaucrat					// classe mere/abstraite/concrete/interface
{

	public :
		Bureaucrat(void);					// constructeur par défaut
		Bureaucrat(Bureaucrat const &copy);					// constructeur par copie
		Bureaucrat(std::string name, int g);					// constructeur by string
		~Bureaucrat(void);					// destructeur

		Bureaucrat &operator=(Bureaucrat const &rhs);					// surcharge d'assignation

		std::string const	&getName(void) const;
		int const			&getGrade(void) const;

		void	upGrade(void);
		void	downGrade(void);
		void	checkGrade(void);
		void	signForm(Form &form);
		void	executeForm(Form const & form);

		class GradeTooHighException : public std::exception
		{
			virtual const char	*what(void) const throw() {
				return ("Grade of bureaucrat is too high !"); }
		};

		class GradeTooLowException : public std::exception
		{
			virtual const char	*what(void) const throw() {
				return ("Grade of bureaucrat is too low !"); }
		};

	private :
		std::string	_name;
		int			_g;
		
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);