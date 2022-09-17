/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 14:05:01 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/17 12:35:37 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Bureaucrat::Bureaucrat(void) : _name("NoBody"), _g(42) {				// constructeur par défaut
	this->checkGrade();
//	std::cout << "Bureaucrat Default constructor called." << std::endl;
	return; }

Bureaucrat::Bureaucrat(Bureaucrat const &copy) {						// constructeur par copie
//	std::cout << "Bureaucrat Copy constructor called." << std::endl;
	*this = copy;
	return; }

Bureaucrat::Bureaucrat(std::string name, int g) : _name(name), _g(g) {	// constructeur by string
	this->checkGrade();
//	std::cout << "Bureaucrat String constructor called." << std::endl;
	return; }

Bureaucrat::~Bureaucrat(void) {											// destructeur
//	std::cout << "Bureaucrat Destructor called." << std::endl;
	return; }

//------------------------------   SURCHARGES   ------------------------------//

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs) {
//	std::cout << "Bureaucrat Assignment operator called." << std::endl;
	this->_name = rhs._name;
	this->_g = rhs._g;
	return(*this); }

//---------------------------   SETTER / GETTER   ----------------------------//

std::string const	&Bureaucrat::getName() const {
	return(this->_name); }

int const	&Bureaucrat::getGrade(void) const {
	return(this->_g); }

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	Bureaucrat::upGrade(void) {
	this->_g--;
	this->checkGrade();
	return; }

void	Bureaucrat::downGrade(void) {
	this->_g++;
	this->checkGrade();
	return; }

void	Bureaucrat::checkGrade(void) {
	if (this->_g > 150) {
		throw (Bureaucrat::GradeTooLowException()); }
	if (this->_g < 1) {
		throw (Bureaucrat::GradeTooHighException()); }
	return; }

void	Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(*this); }
	catch (std::exception &e) {
		std::cout << RED << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << RESET << std::endl; 
		return; }
	std::cout << GREEN << this->getName() << " signed " << form.getName() << RESET << std::endl;
	return; }

//-------------------------   NON MEMBER FUNCTIONS   -------------------------//

std::ostream		&operator<<(std::ostream &out, Bureaucrat const &rhs) {
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return(out); }
