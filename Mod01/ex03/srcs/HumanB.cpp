/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:14:10 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/02 21:28:44 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {					// constructeur by string
	std::cout << "HumanB String constructor called." << std::endl;
	return; }

HumanB::~HumanB(void) {					// destructeur
	std::cout << "HumanB Destructor called." << std::endl;
	return; }

//---------------------------   SETTER / GETTER   ----------------------------//

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
	return; }

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	HumanB::attack(void) const {
	std::cout << this->_name << " attacks with their ";
	if (this->_weapon) {
		std::cout << this->_weapon->getType() << std::endl; }
	else {
		std::cout << "fists" << std::endl; }
	return; }
