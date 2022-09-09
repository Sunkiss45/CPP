/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:21:20 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/09 14:21:26 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

WrongAnimal::WrongAnimal(void) : _type("NULL") {					// constructeur par défaut
	std::cout << "WrongAnimal Default constructor called." << std::endl;
	return; }

WrongAnimal::WrongAnimal(WrongAnimal const &copy) {					// constructeur par copie
	std::cout << "WrongAnimal Copy constructor called." << std::endl;
	*this = copy;
	return; }

WrongAnimal::~WrongAnimal(void) {					// destructeur
	std::cout << "WrongAnimal Destructor called." << std::endl;
	return; }

//------------------------------   SURCHARGES   ------------------------------//

WrongAnimal		&WrongAnimal::operator=(WrongAnimal const &rhs) {
	std::cout << "WrongAnimal Assignment operator called." << std::endl;
	this->_type = rhs._type;
	return(*this); }

//---------------------------   SETTER / GETTER   ----------------------------//

std::string const		&WrongAnimal::getType() const {
	return(this->_type); }

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	WrongAnimal::makeSound(void) const {
	std::cout << this->_type << " > I make a sound that I don't know" << std::endl;
	return; }
