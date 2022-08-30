/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 20:44:09 by ebarguil          #+#    #+#             */
/*   Updated: 2022/08/29 20:44:10 by ebarguil         ###   ########.fr       */
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
	//std::cout << i << buff[0] << buff[1] << buff[2] << buff[3] << buff[4] << std::endl;
	//std::cout << this->_ind << this->_first << this->_last << this->_nick << this->_phone << this->_dark << std::endl;
	return; }
