/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:32:12 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/13 00:22:21 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form(), _target("None") {	// constructeur par défaut
	std::cout << "ShrubberyCreationForm Default constructor called." << std::endl;
	return; }

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : Form() {	// constructeur par copie
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
	this->setName(rhs.getName());
	this->setSign(rhs.getSign());
	this->setLvlSign(rhs.getLvlSign());
	this->setLvlExe(rhs.getLvlExe());
	this->_target = rhs._target;
	return(*this); }

//---------------------------   SETTER / GETTER   ----------------------------//

std::string const		&ShrubberyCreationForm::getTarget() const {
	return(this->_target); }

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (!this->getSign()) {
		throw (Form::FormNotSignException()); }
	else if (executor.getGrade() > this->getLvlExe()) {
		throw (Form::BurGradeTooLowException()); }
	else {
		try {
			std::ofstream	fd_out;
			std::string		fileName = this->_target;
			fileName += "_shrubbery";
			fd_out.open(fileName.c_str());
			fd_out << "                      ___ " << std::endl;
			fd_out << "                _,-'''   ''''`--. " << std::endl;
			fd_out << "             ,-'          __,,-- \\ " << std::endl;
			fd_out << "           ,'    __,--""""dF      ) " << std::endl;
			fd_out << "          /   .-'Hb_,--""dF      / " << std::endl;
			fd_out << "        ,'       _Hb ___dF'-._,-' " << std::endl;
			fd_out << "      ,'      _,-"""   """--..__ " << std::endl;
			fd_out << "     (     ,-'                  `. " << std::endl;
			fd_out << "      `._,'     _   _             ; " << std::endl;
			fd_out << "       ,'     ,' `-'Hb-.___..._,-' " << std::endl;
			fd_out << "       \\    ,''Hb.-'HH`-.dHF'' " << std::endl;
			fd_out << "        `--'   \"Hb  HH  dF\" " << std::endl;
			fd_out << "                \"Hb HH dF \"" << std::endl;
			fd_out << "                 \"HbHHdF \"" << std::endl;
			fd_out << "                  |HHHF " << std::endl;
			fd_out << "                  |HHH| " << std::endl;
			fd_out << "                  |HHH| " << std::endl;
			fd_out << "                  |HHH| " << std::endl;
			fd_out << "                  |HHH| " << std::endl;
			fd_out << "                  dHHHb " << std::endl;
			fd_out << "                .dFd|bHb.              o " << std::endl;
			fd_out << "      o       .dHFdH|HbTHb.         o / " << std::endl;
			fd_out << "  Y  |  __,dHHFdHH|HHhoHHb.__  | __  Y " << std::endl;
			fd_out.close(); }
		catch (std::exception &e) {
			std::cout << RED << "Problem during creation / execution of ShrubberyCreationForm.." << RESET << std::endl; } }
	return; }

//-------------------------   NON MEMBER FUNCTIONS   -------------------------//

std::ostream		&operator<<(std::ostream &out, ShrubberyCreationForm const &rhs) {
	out << "ShrubberyCreationForm " << rhs.getName() << " is ";
	if (rhs.getSign()) {
		out << "signed"; }
	else {
		out << "not signed"; }
	out << " and requires : " << rhs.getLvlSign() << " to be signed / " << rhs.getLvlExe() << " to be executed. +target : " << rhs.getTarget();
	return(out); }
