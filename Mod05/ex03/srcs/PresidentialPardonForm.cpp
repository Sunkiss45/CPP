/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 01:09:04 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/13 12:31:00 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

PresidentialPardonForm::PresidentialPardonForm(void) : Form(), _target("None") {	// constructeur par défaut
	std::cout << "PresidentialPardonForm Default constructor called." << std::endl;
	return; }

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : Form() {	// constructeur par copie
	std::cout << "PresidentialPardonForm Copy constructor called." << std::endl;
	*this = copy;
	return; }

PresidentialPardonForm::PresidentialPardonForm(std::string name, int lvlsign, int lvlexe, std::string target) 
	: Form(name, lvlsign, lvlexe), _target(target) {	// constructeur by string
	std::cout << "PresidentialPardonForm String constructor called." << std::endl;
	return; }

PresidentialPardonForm::~PresidentialPardonForm(void) {	// destructeur
	std::cout << "PresidentialPardonForm Destructor called." << std::endl;
	return; }

//------------------------------   SURCHARGES   ------------------------------//

PresidentialPardonForm		&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
	std::cout << "PresidentialPardonForm Assignment operator called." << std::endl;
	this->setName(rhs.getName());
	this->setSign(rhs.getSign());
	this->setLvlSign(rhs.getLvlSign());
	this->setLvlExe(rhs.getLvlExe());
	this->_target = rhs._target;
	return(*this); }

//---------------------------   SETTER / GETTER   ----------------------------//

std::string const		&PresidentialPardonForm::getTarget() const {
	return(this->_target); }

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (!this->getSign()) {
		throw (Form::FormNotSignException()); }
	else if (executor.getGrade() > this->getLvlExe()) {
		throw (Form::BurGradeTooLowException()); }
	else {
		std::cout << CYAN << "The president Zaphod Beeblebrox inform all Bureaucrat that " << this->_target << " has been pardonned." << std::endl; }
	return; }

//-------------------------   NON MEMBER FUNCTIONS   -------------------------//

std::ostream		&operator<<(std::ostream &out, PresidentialPardonForm const &rhs) {
	out << "PresidentialPardonForm " << rhs.getName() << " is ";
	if (rhs.getSign()) {
		out << "signed"; }
	else {
		out << "not signed"; }
	out << " and requires : " << rhs.getLvlSign() << " to be signed / " << rhs.getLvlExe() << " to be executed. +target : " << rhs.getTarget();
	return(out); }
