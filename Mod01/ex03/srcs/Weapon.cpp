/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:14:12 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/02 21:11:39 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Weapon::Weapon(std::string type) : _type(type) {					// constructeur by string
	std::cout << "Weapon String constructor called." << std::endl;
	return; }

Weapon::~Weapon(void) {					// destructeur
	std::cout << "Weapon Destructor called." << std::endl;
	return; }

//---------------------------   SETTER / GETTER   ----------------------------//

std::string const		&Weapon::getType(void) const {
	return(this->_type); }

void	Weapon::setType(std::string weapon) {
	this->_type = weapon;
	return; }

//---------------------------   MEMBER FUNCTIONS   ---------------------------//
