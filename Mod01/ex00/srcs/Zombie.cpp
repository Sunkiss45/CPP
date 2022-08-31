/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 14:04:46 by ebarguil          #+#    #+#             */
/*   Updated: 2022/08/31 17:37:50 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Zombie::Zombie(std::string name) : _name(name)					// constructeur par string
{
//	std::cout << "Zombie Constructor called." << std::endl;
	std::cout << "Zombie " << this->_name << " wakes up from the dead !" << std::endl;
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
