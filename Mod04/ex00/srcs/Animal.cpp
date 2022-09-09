/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:02:31 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/09 14:14:15 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Animal::Animal(void) : _type("NULL") {					// constructeur par défaut
	std::cout << "Animal Default constructor called." << std::endl;
	return; }

Animal::Animal(Animal const &copy) {					// constructeur par copie
	std::cout << "Animal Copy constructor called." << std::endl;
	*this = copy;
	return; }

Animal::~Animal(void) {					// destructeur
	std::cout << "Animal Destructor called." << std::endl;
	return; }

//------------------------------   SURCHARGES   ------------------------------//

Animal		&Animal::operator=(Animal const &rhs) {
	std::cout << "Animal Assignment operator called." << std::endl;
	this->_type = rhs._type;
	return(*this); }

//---------------------------   SETTER / GETTER   ----------------------------//

std::string const		&Animal::getType() const {
	return(this->_type); }

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	Animal::makeSound(void) const {
	std::cout << this->_type << " > I make a sound that I don't know" << std::endl;
	return; }
