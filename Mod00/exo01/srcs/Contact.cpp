/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 20:44:09 by ebarguil          #+#    #+#             */
/*   Updated: 2022/08/31 01:21:51 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Contact::Contact(void)					// constructeur par dÃ©faut
{
	//std::cout << "Contact Default constructor called." << std::endl;
	return;
}

Contact::~Contact(void)					// destructeur
{
	//std::cout << "Contact Destructor called." << std::endl;
	return;
}

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	Contact::takeinfo(int i) {
	int	info = 0;
	std::string	input;
	std::string	buff[5];

	std::cout << std::endl << "Veuillez entrer les inforamtions suivantes :" << std::endl;
	while (info <= 4) {
		if (info == 0) {
			std::cout << "Prénom : "; }
		else if (info == 1) {
			std::cout << "Nom : "; }
		else if (info == 2) {
			std::cout << "Surnom : "; }
		else if (info == 3) {
			std::cout << "Numéro de téléphone : "; }
		else if (info == 4) {
			std::cout << "Petit secret : "; }
		std::getline(std::cin, input);
		if (std::cin.eof() == 1)
			return;
		if (input == "") {
			std::cout << "! Entrée invalide !" << std::endl; }
		else {
			buff[info] = input;
			info++; } }
	this->_ind = i + 1;
	this->_first = buff[0];
	this->_last = buff[1];
	this->_nick = buff[2];
	this->_phone = buff[3];
	this->_dark = buff[4];
	std::cout << "Informations enregistrées !" << std::endl << std::endl;
	return; }

void	Contact::displaygen(void) {
	std::cout << "+" << std::setw(10) << this->_ind << "|";
	this->_displayline(this->_first);
	std::cout << "|";
	this->_displayline(this->_last);
	std::cout << "|";
	this->_displayline(this->_nick);
	std::cout << "+" << std::endl; }

void	Contact::displaycont(void) {
	std::cout << std::endl;
	std::cout << "Index : " << this->_ind << std::endl;
	std::cout << "Prénom : " << this->_first << std::endl;
	std::cout << "Nom : " << this->_last << std::endl;
	std::cout << "Surnom : " << this->_nick << std::endl;
	std::cout << "Numéro de téléphone : " << this->_phone << std::endl;
	std::cout << "Petit secret : " << this->_dark << std::endl << std::endl; }

void	Contact::_displayline(std::string str) {
	if (str.length() < 11) {
		std::cout << std::setw(10) << str; }
	else {
		str.resize(9);
		std::cout << str << "."; } }
