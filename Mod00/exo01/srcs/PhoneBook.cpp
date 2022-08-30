/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:54:21 by ebarguil          #+#    #+#             */
/*   Updated: 2022/08/31 01:28:31 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

PhoneBook::PhoneBook(void)					// constructeur par dÃ©faut
{
	//std::cout << "PhoneBook Default constructor called." << std::endl;
	return;
}

PhoneBook::~PhoneBook(void)					// destructeur
{
	//std::cout << "PhoneBook Destructor called." << std::endl;
	return;
}

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

int	PhoneBook::add(int i) {
	if (std::cin.eof() == 1)
		return 1;
	this->cont[i].takeinfo(i);
	return 0; }

int	PhoneBook::search(int a) {
	std::string	input;
	std::stringstream	ss;
	int	ind = -1;
	int	i = -1;

	std::cout << std::endl;
	std::cout << "+-------------------------------------------+" << std::endl;
	std::cout << "+     index| firstname|  lastname|  nickname+" << std::endl;
	std::cout << "+-------------------------------------------+" << std::endl;
	for (i = 0; i < a; i++) {
		this->cont[i].displaygen();	}
	std::cout << "+-------------------------------------------+" << std::endl << std::endl;
	std::cout << "Veuillez entrer un contact à consulter : (1 - " << a << ")" << std::endl;
	std::cout << "> ";
	std::getline(std::cin, input);
	ss << input;
	ss >> ind;
	if (std::cin.eof() == 1) {
		return 1; }
	else if (input.length() != 1 || ind <= 0 || ind > a) {
		std::cout << std::endl << "Entrée invalide !" << std::endl << std::endl; }
	else {
		this->cont[ind - 1].displaycont(); }
	std::cout << "Retour au menu.. (ADD, SEARCH, EXIT)" << std::endl; 
	return 0; }

void	PhoneBook::welcome(void) {
	std::cout << "+-------------------------------------------+" << std::endl;
	std::cout << "+-----   MY AWESOME PHONEBOOK (VF) !   -----+" << std::endl;
	std::cout << "+-------------------------------------------+" << std::endl;
	std::cout << "+                                           +" << std::endl;
	std::cout << "+-----      Options disponibles:       -----+" << std::endl;
	std::cout << "+ - ADD (pour ajouter un contact)           +" << std::endl;
	std::cout << "+ - SEARCH (pour afficher vos contacts)     +" << std::endl;
	std::cout << "+ - EXIT (pour sortir du programme)         +" << std::endl;
	std::cout << "+-------------------------------------------+" << std::endl;
	std::cout << "> "; }

void	PhoneBook::error(void) {
	std::cout << std::endl;
	std::cout << "+-------------------------------------------+" << std::endl;
	std::cout << "+            ! Entré invalide !             +" << std::endl;
	std::cout << "+-----      Options disponibles:       -----+" << std::endl;
	std::cout << "+ - ADD (pour ajouter un contact)           +" << std::endl;
	std::cout << "+ - SEARCH (pour afficher vos contacts)     +" << std::endl;
	std::cout << "+ - EXIT (pour sortir du programme)         +" << std::endl;
	std::cout << "+-------------------------------------------+" << std::endl; }
