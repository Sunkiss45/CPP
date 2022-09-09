/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:27:14 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/09 14:14:15 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

WrongCat::WrongCat(void) {					// constructeur par défaut
	this->_type = "WrongCat";
	std::cout << "WrongCat Default constructor called." << std::endl;
	return; }

WrongCat::WrongCat(WrongCat const &copy) {					// constructeur par copie
	std::cout << "WrongCat Copy constructor called." << std::endl;
	*this = copy;
	return; }

WrongCat::~WrongCat(void) {					// destructeur
	std::cout << "WrongCat Destructor called." << std::endl;
	return; }

//------------------------------   SURCHARGES   ------------------------------//

WrongCat		&WrongCat::operator=(WrongCat const &rhs) {
	std::cout << "WrongCat Assignment operator called." << std::endl;
	this->_type = rhs._type;
	return(*this); }

//---------------------------   SETTER / GETTER   ----------------------------//

std::string const		&WrongCat::getType() const {
	return(this->_type); }

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	WrongCat::makeSound(void) const {
	std::cout << this->_type << " > MIAOUUUUUUUUUUUu" << std::endl;
	return; }
