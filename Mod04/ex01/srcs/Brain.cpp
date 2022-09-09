/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:12:58 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/09 15:17:31 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Brain::Brain(void) {					// constructeur par défaut
	std::cout << "Brain Default constructor called." << std::endl;
	return; }

Brain::Brain(Brain const &copy) {					// constructeur par copie
	std::cout << "Brain Copy constructor called." << std::endl;
	*this = copy;
	return; }

Brain::~Brain(void) {					// destructeur
	std::cout << "Brain Destructor called." << std::endl;
	return; }

//------------------------------   SURCHARGES   ------------------------------//

Brain		&Brain::operator=(Brain const &rhs) {
	std::cout << "Brain Assignment operator called." << std::endl;
	for (int n = 0; n <= 99; n++) {
		this->_ideas[n] = rhs._ideas[n]; }
	return(*this); }

//---------------------------   SETTER / GETTER   ----------------------------//

std::string const		&Brain::getName() const {
	return(this->_name); }

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

