/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:32:12 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/11 20:44:27 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form(), _target("None") {	// constructeur par défaut
	std::cout << "ShrubberyCreationForm Default constructor called." << std::endl;
	return; }

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) {	// constructeur par copie
	std::cout << "ShrubberyCreationForm Copy constructor called." << std::endl;
	*this = copy;
	return; }

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, int lvlsign, int lvlexe, std::string target) 
	: Form(name, lvlsign, lvlexe), _target(target) {	// constructeur by string
	std::cout << "ShrubberyCreationForm String constructor called." << std::endl;
	return; }

ShrubberyCreationForm::~ShrubberyCreationForm(void) {	// destructeur
	std::cout << "ShrubberyCreationForm Destructor called." << std::endl;
	return; }

//------------------------------   SURCHARGES   ------------------------------//

ShrubberyCreationForm		&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
	std::cout << "ShrubberyCreationForm Assignment operator called." << std::endl;
	this->_target = rhs._target;
	return(*this); }

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	execute(Bureaucrat const &executor) {
	
	return; }

//-------------------------   NON MEMBER FUNCTIONS   -------------------------//

std::ostream		&operator<<(std::ostream &out, ShrubberyCreationForm const &rhs) {
	out << "ShrubberyCreationForm " << rhs.getName() << " is ";
	if (rhs.getSign()) {
		out << "signed"; }
	else {
		out << "not signed"; }
	out << " and requires : " << rhs.getLvlSign() << " to be signed / " << rhs.getLvlExe() << " to be executed.";
	return(out); }
