/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:26:50 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/06 15:05:58 by ebarguil         ###   ########.fr       */
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

Fixed::Fixed(int const n) {
	std::cout << "Fixed Int constructor called." << std::endl;
	this->_raw = n << this->_frac;
	return; }
	
Fixed::Fixed(float const n) {
	std::cout << "Fixed Float constructor called." << std::endl;
	this->_raw = roundf(n * (1 << this->_frac));
	return; }

Fixed::~Fixed(void) {	// destructeur
	std::cout << "Fixed Destructor called." << std::endl;
	return; }

//------------------------------   SURCHARGES   ------------------------------//

Fixed		&Fixed::operator=(Fixed const &rhs) {
	std::cout << "Fixed Assignment operator '=' called." << std::endl;
	this->_raw = rhs.getRawBits();
	return(*this); }

//---------------------------   SETTER / GETTER   ----------------------------//

int		Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_raw); }

void	Fixed::setRawBits(int const raw) {
	this->_raw = raw;
	return; }

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

int		Fixed::toInt(void) const {
	int ret = (int)this->_raw / (1 << this->_frac);
	return (ret); }

float	Fixed::toFloat(void) const {
	float ret = (float)this->_raw / (1 << this->_frac);
	return (ret); }

//-------------------------   NON MEMBER FUNCTIONS   -------------------------//

std::ostream		&operator<<(std::ostream &out, Fixed const &rhs) {
	// std::cout << "Rdm Assignment operator '<<' called." << std::endl;
	out << rhs.toFloat();
	return(out); }
