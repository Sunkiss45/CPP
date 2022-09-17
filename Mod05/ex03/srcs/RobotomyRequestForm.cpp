/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 00:58:01 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/17 21:24:22 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequest", 72, 45), _target("None") {	// constructeur par défaut
	// std::cout << "RobotomyRequestForm Default constructor called." << std::endl;
	return; }

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : Form() {	// constructeur par copie
	// std::cout << "RobotomyRequestForm Copy constructor called." << std::endl;
	*this = copy;
	return; }

RobotomyRequestForm::RobotomyRequestForm(std::string name, int lvlsign, int lvlexe, std::string target) 
	: Form(name, lvlsign, lvlexe), _target(target) {	// constructeur by string
	// std::cout << "RobotomyRequestForm String constructor called." << std::endl;
	return; }

RobotomyRequestForm::~RobotomyRequestForm(void) {	// destructeur
	// std::cout << "RobotomyRequestForm Destructor called." << std::endl;
	return; }

//------------------------------   SURCHARGES   ------------------------------//

RobotomyRequestForm		&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
	// std::cout << "RobotomyRequestForm Assignment operator called." << std::endl;
	this->setName(rhs.getName());
	this->setSign(rhs.getSign());
	this->setLvlSign(rhs.getLvlSign());
	this->setLvlExe(rhs.getLvlExe());
	this->_target = rhs._target;
	return(*this); }

//---------------------------   SETTER / GETTER   ----------------------------//

std::string const		&RobotomyRequestForm::getTarget() const {
	return(this->_target); }

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (!this->getSign()) {
		throw (Form::FormNotSignException()); }
	else if (executor.getGrade() > this->getLvlExe()) {
		throw (Form::BurGradeTooLowException()); }
	else {
		static int	i;
		std::cout << CYAN << "Bbbbbbbrrrrr...bbbbrrr...BBBbbbrrrr...BbbBbbrr..." << std::endl;
		if (i % 2 == 0)
			std::cout << this->_target << " has been robotomized successfully." << RESET << std::endl;
		else
			std::cout << this->_target << " robotomization failed." << RESET << std::endl;
		i++; }
	return; }

//-------------------------   NON MEMBER FUNCTIONS   -------------------------//

std::ostream		&operator<<(std::ostream &out, RobotomyRequestForm const &rhs) {
	out << "RobotomyRequestForm " << rhs.getName() << " is ";
	if (rhs.getSign()) {
		out << "signed"; }
	else {
		out << "not signed"; }
	out << " and requires : " << rhs.getLvlSign() << " to be signed / " << rhs.getLvlExe() << " to be executed. +target : " << rhs.getTarget();
	return(out); }
