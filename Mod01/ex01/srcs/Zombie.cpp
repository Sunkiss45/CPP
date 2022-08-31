/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 14:04:46 by ebarguil          #+#    #+#             */
/*   Updated: 2022/08/31 19:31:24 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Zombie::Zombie(void)				// constructeur par defaut
{
//	std::cout << "Zombie Constructor called." << std::endl;
	std::cout << "Random Zombie wakes up from the dead !" << std::endl;
	return;
}

Zombie::~Zombie(void)					// destructeur
{
//	std::cout << "Zombie Destructor called." << std::endl;
	std::cout << "Zombie " << this->_name << " return to his grave.." << std::endl;
	return;
}

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	Zombie::annonce() const {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return; }

void	Zombie::names(std::string name) {
	this->_name = name;
	return; }
