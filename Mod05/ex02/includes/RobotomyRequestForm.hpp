/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 00:50:44 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/13 00:50:57 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

// ATTENTION : utiliser la forme canonique de Coplien !!

class RobotomyRequestForm : public Form				// classe mere/abstraite/concrete/interface
{

	public :
		RobotomyRequestForm(void);					// constructeur par défaut
		RobotomyRequestForm(RobotomyRequestForm const &copy);					// constructeur par copie
		RobotomyRequestForm(std::string name, int lvlsign, int lvlexe, std::string target);					// constructeur by string
		~RobotomyRequestForm(void);					// destructeur

		RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);					// surcharge d'assignation

		std::string const	&getTarget(void) const;

		void	execute(Bureaucrat const &executor) const;

	private :
		std::string	_target;
		
};

std::ostream &operator<<(std::ostream &o, RobotomyRequestForm const &rhs);