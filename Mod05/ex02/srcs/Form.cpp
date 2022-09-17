/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:35:13 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/17 19:05:13 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Form::Form(void) : _name("Random"), _sign(false), _lvlsign(84), _lvlexe(21) {	// constructeur par défaut
	this->checkGrade();
	// std::cout << "Form Default constructor called." << std::endl;
	return; }

Form::Form(Form const &copy) {	// constructeur par copie
	// std::cout << "Form Copy constructor called." << std::endl;
	*this = copy;
	return; }

Form::Form(std::string name, int lvlsign, int lvlexe) : 
	_name(name), _sign(false), _lvlsign(lvlsign), _lvlexe(lvlexe) {	// constructeur by string
	this->checkGrade();
	// std::cout << "Form String constructor called." << std::endl;
	return; }

Form::~Form(void) {	// destructeur
	// std::cout << "Form Destructor called." << std::endl;
	return; }

//------------------------------   SURCHARGES   ------------------------------//

Form		&Form::operator=(Form const &rhs) {
	// std::cout << "Form Assignment operator called." << std::endl;
	this->_name = rhs._name;
	this->_sign = rhs._sign;
	this->_lvlsign = rhs._lvlsign;
	this->_lvlexe = rhs._lvlexe;
	return(*this); }

//---------------------------   SETTER / GETTER   ----------------------------//

std::string const		&Form::getName() const {
	return(this->_name); }

bool	Form::getSign(void) const {
	return(this->_sign); }

int	Form::getLvlSign(void) const {
	return(this->_lvlsign); }

int	Form::getLvlExe(void) const {
	return(this->_lvlexe); }

void	Form::setName(std::string name) {
	this->_name = name;
	return; }

void	Form::setSign(bool sign) {
	this->_sign = sign;
	return; }

void	Form::setLvlSign(int lvlsign) {
	this->_lvlsign = lvlsign;
	return; }

void	Form::setLvlExe(int lvlexe) {
	this->_lvlexe = lvlexe;
	return; }

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	Form::checkGrade(void) const {
	if (this->_lvlsign > 150) {
		throw (Form::GradeTooLowException()); }
	if (this->_lvlsign < 1) {
		throw (Form::GradeTooHighException()); }
	if (this->_lvlexe > 150) {
		throw (Form::GradeTooLowException()); }
	if (this->_lvlexe < 1) {
		throw (Form::GradeTooHighException()); }
	return; }

void	Form::beSigned(Bureaucrat &bur) {
	if (this->_sign) {
		throw (Form::FormAlreadySignedException()); }
	else if (bur.getGrade() > this->getLvlSign()) {
		throw (Form::BurGradeTooLowException()); }
	this->_sign = true;
	return; }

//-------------------------   NON MEMBER FUNCTIONS   -------------------------//

std::ostream		&operator<<(std::ostream &out, Form const &rhs) {
	out << "Form " << rhs.getName() << " is ";
	if (rhs.getSign()) {
		out << "signed"; }
	else {
		out << "not signed"; }
	out << " and requires : " << rhs.getLvlSign() << " to be signed / " << rhs.getLvlExe() << " to be executed.";
	return(out); }
