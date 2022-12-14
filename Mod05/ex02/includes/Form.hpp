/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:33:42 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/13 00:18:32 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <fstream>
# include "Bureaucrat.hpp"

// ATTENTION : utiliser la forme canonique de Coplien !!

class Bureaucrat;

class Form					// classe mere/abstraite/concrete/interface
{

	public :
		Form(void);					// constructeur par défaut
		Form(Form const &copy);					// constructeur par copie
		Form(std::string name, int lvlsign, int lvlexe);					// constructeur by string
		virtual ~Form(void);					// destructeur

		Form &operator=(Form const &rhs);					// surcharge d'assignation

		std::string const	&getName(void) const;
		bool	getSign(void) const;
		int		getLvlSign(void) const;
		int		getLvlExe(void) const;

		void	setName(std::string name);
		void	setSign(bool sign);
		void	setLvlSign(int lvlsign);
		void	setLvlExe(int lvlexe);

		void	checkGrade(void) const;
		void	beSigned(Bureaucrat &bur);

		virtual void	execute(Bureaucrat const &executor) const = 0;

		class GradeTooHighException : public std::exception
		{
			virtual const char	*what(void) const throw() {
				return ("One of Grade required for a Form is too high !"); }
		};

		class GradeTooLowException : public std::exception
		{
			virtual const char	*what(void) const throw() {
				return ("One of Grade required for a Form is too low !"); }
		};

		class BurGradeTooLowException : public std::exception
		{
			virtual const char	*what(void) const throw() {
				return ("Bureaucrat is not high grade enougth to manage Form !"); }
		};

		class FormAlreadySignedException : public std::exception
		{
			virtual const char	*what(void) const throw() {
				return ("the Form is alrdeay signed !"); }
		};

		class FormNotSignException : public std::exception
		{
			virtual const char	*what(void) const throw() {
				return ("the Form is not signed, so he can't be executed !"); }
		};

	private :
		std::string	_name;
		bool		_sign;
		int			_lvlsign;
		int			_lvlexe;

};

std::ostream &operator<<(std::ostream &o, Form const &rhs);