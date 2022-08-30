/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:54:21 by ebarguil          #+#    #+#             */
/*   Updated: 2022/08/24 17:54:22 by ebarguil         ###   ########.fr       */
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

int	PhoneBook::search(void) {
	int	i = 0;

	std::cout << "+-------------------------------------------+" << std::endl;
	std::cout << "+index     |firstname |lastname  |nickname  +" << std::endl;
	std::cout << "+-------------------------------------------+" << std::endl;
}

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
