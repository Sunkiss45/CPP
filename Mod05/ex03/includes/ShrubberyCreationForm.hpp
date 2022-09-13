/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 16:12:26 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/13 12:23:25 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

// ATTENTION : utiliser la forme canonique de Coplien !!

class ShrubberyCreationForm : public Form				// classe mere/abstraite/concrete/interface
{

	public :
		ShrubberyCreationForm(void);					// constructeur par défaut
		ShrubberyCreationForm(ShrubberyCreationForm const &copy);					// constructeur par copie
		ShrubberyCreationForm(std::string name, int lvlsign, int lvlexe, std::string target);					// constructeur by string
		~ShrubberyCreationForm(void);					// destructeur

		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);					// surcharge d'assignation

		std::string const	&getTarget(void) const;

		void	execute(Bureaucrat const &executor) const;

	private :
		std::string	_target;
		
};

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &rhs);