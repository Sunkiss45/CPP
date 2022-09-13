/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:14:41 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/13 11:50:47 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

// ATTENTION : utiliser la forme canonique de Coplien !!

class Intern					// classe mere/abstraite/concrete/interface
{

	public :
		Intern(void);					// constructeur par défaut
		Intern(Intern const &copy);					// constructeur par copie
		~Intern(void);					// destructeur

		Intern &operator=(Intern const &rhs);					// surcharge d'assignation

		Form	*makeForm(std::string type, std::string target);

		class MakeFormInvalidException : public std::exception
		{
			virtual const char	*what(void) const throw() {
				return ("the type of Form is not valid !"); }
		};
		
};

std::ostream &operator<<(std::ostream &o, Intern const &rhs);