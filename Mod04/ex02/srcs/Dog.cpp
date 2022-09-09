/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:27:14 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/09 17:28:30 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Dog::Dog(void) {					// constructeur par défaut
	std::cout << "Dog Default constructor called." << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	return; }

Dog::Dog(Dog const &copy) {					// constructeur par copie
	std::cout << "Dog Copy constructor called." << std::endl;
	this->_brain = new Brain();
	*this = copy;
	return; }

Dog::~Dog(void) {					// destructeur
	delete _brain;
	std::cout << "Dog Destructor called." << std::endl;
	return; }

//------------------------------   SURCHARGES   ------------------------------//

Dog		&Dog::operator=(Dog const &rhs) {
	std::cout << "Dog Assignment operator called." << std::endl;
	this->_type = rhs._type;
	*this->_brain = *rhs._brain;
	return(*this); }

//---------------------------   SETTER / GETTER   ----------------------------//

std::string const		&Dog::getType() const {
	return(this->_type); }

std::string const		Dog::getIdeas(int n) const {
	return(this->_brain->getIdeas(n)); }

void	Dog::setIdeas(std::string const str, int n) {
	this->_brain->setIdeas(str, n);
	return; }

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	Dog::makeSound(void) const {
	std::cout << this->_type << " > WOUUUUUUUUUwUUUUUUUUUUUf" << std::endl;
	return; }
