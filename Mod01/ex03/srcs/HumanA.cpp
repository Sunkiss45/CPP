/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:14:07 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/02 21:17:20 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {					// constructeur by string
	std::cout << "HumanA String constructor called." << std::endl;
	return; }

HumanA::~HumanA(void) {					// destructeur
	std::cout << "HumanA Destructor called." << std::endl;
	return; }

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	HumanA::attack(void) const {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
	return; }
