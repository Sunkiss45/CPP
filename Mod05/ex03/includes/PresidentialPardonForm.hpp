/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 01:08:27 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/13 01:08:47 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

// ATTENTION : utiliser la forme canonique de Coplien !!

class PresidentialPardonForm : public Form				// classe mere/abstraite/concrete/interface
{

	public :
		PresidentialPardonForm(void);					// constructeur par défaut
		PresidentialPardonForm(PresidentialPardonForm const &copy);					// constructeur par copie
		PresidentialPardonForm(std::string name, int lvlsign, int lvlexe, std::string target);					// constructeur by string
		~PresidentialPardonForm(void);					// destructeur

		PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);					// surcharge d'assignation

		std::string const	&getTarget(void) const;

		void	execute(Bureaucrat const &executor) const;

	private :
		std::string	_target;
		
};

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm const &rhs);