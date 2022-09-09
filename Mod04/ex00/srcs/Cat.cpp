/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:27:14 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/09 14:14:15 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Cat::Cat(void) {					// constructeur par défaut
	this->_type = "Cat";
	std::cout << "Cat Default constructor called." << std::endl;
	return; }

Cat::Cat(Cat const &copy) {					// constructeur par copie
	std::cout << "Cat Copy constructor called." << std::endl;
	*this = copy;
	return; }

Cat::~Cat(void) {					// destructeur
	std::cout << "Cat Destructor called." << std::endl;
	return; }

//------------------------------   SURCHARGES   ------------------------------//

Cat		&Cat::operator=(Cat const &rhs) {
	std::cout << "Cat Assignment operator called." << std::endl;
	this->_type = rhs._type;
	return(*this); }

//---------------------------   SETTER / GETTER   ----------------------------//

std::string const		&Cat::getType() const {
	return(this->_type); }

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	Cat::makeSound(void) const {
	std::cout << this->_type << " > MIAOUUUUUUUUUUUu" << std::endl;
	return; }
