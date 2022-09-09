/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:27:14 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/09 14:14:14 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Dog::Dog(void) {					// constructeur par défaut
	this->_type = "Dog";
	std::cout << "Dog Default constructor called." << std::endl;
	return; }

Dog::Dog(Dog const &copy) {					// constructeur par copie
	std::cout << "Dog Copy constructor called." << std::endl;
	*this = copy;
	return; }

Dog::~Dog(void) {					// destructeur
	std::cout << "Dog Destructor called." << std::endl;
	return; }

//------------------------------   SURCHARGES   ------------------------------//

Dog		&Dog::operator=(Dog const &rhs) {
	std::cout << "Dog Assignment operator called." << std::endl;
	this->_type = rhs._type;
	return(*this); }

//---------------------------   SETTER / GETTER   ----------------------------//

std::string const		&Dog::getType() const {
	return(this->_type); }

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	Dog::makeSound(void) const {
	std::cout << this->_type << " > WOUUUUUUUUUwUUUUUUUUUUUf" << std::endl;
	return; }
