/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:26:50 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/06 11:53:44 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Fixed::Fixed(void) : _raw(0) {	// constructeur par défaut
	std::cout << "Fixed Default constructor called." << std::endl;
	return; }

Fixed::Fixed(Fixed const &copy) {	// constructeur par copie
	std::cout << "Fixed Copy constructor called." << std::endl;
	this->_raw = copy.getRawBits();
	return; }

Fixed::~Fixed(void) {	// destructeur
	std::cout << "Fixed Destructor called." << std::endl;
	return; }

//------------------------------   SURCHARGES   ------------------------------//

Fixed		&Fixed::operator=(Fixed const &rhs) {
	std::cout << "Fixed Assignment operator called." << std::endl;
	this->_raw = rhs.getRawBits();
	return(*this); }

//---------------------------   SETTER / GETTER   ----------------------------//

int	Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_raw); }

void	Fixed::setRawBits(int const raw) {
	this->_raw = raw;
	return;}

//---------------------------   MEMBER FUNCTIONS   ---------------------------//


