/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:27:14 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/09 17:28:37 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Cat::Cat(void) {					// constructeur par défaut
	std::cout << "Cat Default constructor called." << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	return; }

Cat::Cat(Cat const &copy) {					// constructeur par copie
	std::cout << "Cat Copy constructor called." << std::endl;
	this->_brain = new Brain();
	*this = copy;
	return; }

Cat::~Cat(void) {					// destructeur
	delete _brain;
	std::cout << "Cat Destructor called." << std::endl;
	return; }

//------------------------------   SURCHARGES   ------------------------------//

Cat		&Cat::operator=(Cat const &rhs) {
	std::cout << "Cat Assignment operator called." << std::endl;
	this->_type = rhs._type;
	*this->_brain = *rhs._brain;
	return(*this); }

//---------------------------   SETTER / GETTER   ----------------------------//

std::string const		&Cat::getType() const {
	return(this->_type); }

std::string const		Cat::getIdeas(int n) const {
	return(this->_brain->getIdeas(n)); }

void	Cat::setIdeas(std::string const str, int n) {
	this->_brain->setIdeas(str, n);
	return; }

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	Cat::makeSound(void) const {
	std::cout << this->_type << " > MIAOUUUUUUUUUUUu" << std::endl;
	return; }
