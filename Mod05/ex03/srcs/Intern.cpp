/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:17:07 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/17 21:26:21 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Intern::Intern(void) {	// constructeur par défaut
	// std::cout << "Intern Default constructor called." << std::endl;
	return; }

Intern::Intern(Intern const &copy) {	// constructeur par copie
	// std::cout << "Intern Copy constructor called." << std::endl;
	*this = copy;
	return; }

Intern::~Intern(void) {	// destructeur
	// std::cout << "Intern Destructor called." << std::endl;
	return; }

//------------------------------   SURCHARGES   ------------------------------//

Intern		&Intern::operator=(Intern const &rhs) {
	// std::cout << "Intern Assignment operator called." << std::endl;
	(void)rhs;
	return(*this); }

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

Form	*Intern::makeForm(std::string type, std::string target) {
	try {
		std::string form_type[3] = {"shrubbery creation", "robotomy request", "president pardon"};
		int	i;
		for (i = 0; i <= 3; i++) {
			if (type == form_type[i])
				break; }
		switch (i) {
			case 0 :
				std::cout << GREEN << "Intern creates ShrubberyCreationForm" << RESET << std::endl;;
				return (new ShrubberyCreationForm("ShrubberyCreation", 145, 137, target));
			case 1 :
				std::cout << GREEN << "Intern creates RobotomyRequestForm" << RESET << std::endl;;
				return (new RobotomyRequestForm("RobotomyRequest", 72, 45, target));
			case 2 :
				std::cout << GREEN << "Intern creates PresidentialPardonForm" << RESET << std::endl;;
				return (new PresidentialPardonForm("PresidentialPardon", 25, 5, target));
			default :
				throw(Intern::MakeFormInvalidException()); } }
	catch (std::exception &e) {
		std::cout << YELLOW << "Intern couldn't creates [" << type << "] because " << e.what() << RESET << std::endl; }
	return NULL; 
}
