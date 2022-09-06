/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:26:50 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/06 17:30:49 by ebarguil         ###   ########.fr       */
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


bool		Fixed::operator>(Fixed const &rhs) const {
	std::cout << "Fixed Assignment operator '>' called." << std::endl;
	return (this->_raw > rhs.getRawBits()); }

bool		Fixed::operator<(Fixed const &rhs) const {
	std::cout << "Fixed Assignment operator '<' called." << std::endl;
	return (this->_raw < rhs.getRawBits()); }

bool		Fixed::operator>=(Fixed const &rhs) const {
	std::cout << "Fixed Assignment operator '>=' called." << std::endl;
	return (this->_raw >= rhs.getRawBits()); }

bool		Fixed::operator<=(Fixed const &rhs) const {
	std::cout << "Fixed Assignment operator '<=' called." << std::endl;
	return (this->_raw <= rhs.getRawBits()); }

bool		Fixed::operator==(Fixed const &rhs) const {
	std::cout << "Fixed Assignment operator '==' called." << std::endl;
	return (this->_raw == rhs.getRawBits()); }

bool		Fixed::operator!=(Fixed const &rhs) const {
	std::cout << "Fixed Assignment operator '!=' called." << std::endl;
	return (this->_raw != rhs.getRawBits()); }


Fixed	Fixed::operator+(Fixed const &rhs) const {
	Fixed	ret;
	ret.setRawBits(this->_raw + rhs.getRawBits());
	return (ret); }

Fixed	Fixed::operator-(Fixed const &rhs) const {
	Fixed	ret;
	ret.setRawBits(this->_raw - rhs.getRawBits());
	return (ret); }

Fixed	Fixed::operator*(Fixed const &rhs) const {
	Fixed	ret;
	ret.setRawBits(this->_raw * rhs.getRawBits() / (1 << this->_frac));
	return (ret); }

Fixed	Fixed::operator/(Fixed const &rhs) const {
	Fixed	ret;
	ret.setRawBits((float)this->_raw / (float)rhs.getRawBits() * (1 << this->_frac));
	return (ret); }


Fixed	&Fixed::operator++(void) {
	++this->_raw;
	return (*this); }

Fixed	&Fixed::operator--(void) {
	--this->_raw;
	return(*this); }

Fixed	Fixed::operator++(int) {
	Fixed	tmp(*this);

	++this->_raw;
	return(tmp); }

Fixed	Fixed::operator--(int) {
	Fixed	tmp(*this);

	--this->_raw;
	return(tmp); }

//---------------------------   SETTER / GETTER   ----------------------------//

int		Fixed::getRawBits() const {
	// std::cout << "getRawBits member function called" << std::endl;
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

Fixed	Fixed::min(Fixed &lhs, Fixed &rhs) {
	if (lhs < rhs) {
		return (lhs); }
	return (rhs); }

Fixed	Fixed::max(Fixed &lhs, Fixed &rhs) {
	if (lhs > rhs) {
		return (lhs); }
	return (rhs); }

const Fixed	Fixed::min(Fixed const &lhs, Fixed const &rhs) {
	if (lhs < rhs) {
		return (lhs); }
	return (rhs); }

const Fixed	Fixed::max(Fixed const &lhs, Fixed const &rhs) {
	if (lhs > rhs) {
		return (lhs); }
	return (rhs); }

//-------------------------   NON MEMBER FUNCTIONS   -------------------------//

std::ostream		&operator<<(std::ostream &out, Fixed const &rhs) {
	// std::cout << "Rdm Assignment operator '<<' called." << std::endl;
	out << rhs.toFloat();
	return(out); }
