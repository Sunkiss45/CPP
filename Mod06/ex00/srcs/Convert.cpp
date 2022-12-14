/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:38:49 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/17 22:15:52 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Convert::Convert(void) : _type(-1) {	// constructeur par défaut
	// std::cout << "Convert Default constructor called." << std::endl;
	return; }

Convert::Convert(Convert const &copy) {	// constructeur par copie
	// std::cout << "Convert Copy constructor called." << std::endl;
	*this = copy;
	return; }

Convert::~Convert(void) {	// destructeur
	// std::cout << "Convert Destructor called." << std::endl;
	return; }

//------------------------------   SURCHARGES   ------------------------------//

Convert		&Convert::operator=(Convert const &rhs) {
	// std::cout << "Convert Assignment operator called." << std::endl;
	this->_type = rhs._type;
	return(*this); }

//---------------------------   SETTER / GETTER   ----------------------------//

void	Convert::setType(char const *str) {
	bool	(*isTab[4])(char const *str) = {isChar, isInt, isFloat, isDouble};
	int		typeTab[4] = {0, 1, 2, 3};

	for (int i = 0; i < 4; i++) {
		if (isTab[i](str)) {
			this->_type = typeTab[i];
			break; } }
	if (this->_type == -1) {
		throw (Convert::NotConvertible()); }
	
	
	// switch (this->_type) {
	// 	case 0:
	// 		std::cout << PURPLE << "CHAR" << RESET << std::endl; break;
	// 	case 1:
	// 		std::cout << PURPLE << "INT" << RESET << std::endl; break;
	// 	case 2:
	// 		std::cout << PURPLE << "FLOAT" << RESET << std::endl; break;
	// 	case 3:
	// 		std::cout << PURPLE << "DOUBLE " << RESET << std::endl; break; }
	
	
	return; }

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	Convert::printType(char const *str) const {
	switch (this->_type) {
		case 0: 
			printChar(str[0]); break;
		case 1:
			printInt(std::atoi(str)); break;
		case 2: 
			printFloat(std::strtod(str, 0)); break;
		case 3: 
			printDouble(std::strtod(str, 0)); break; }
	return; }

//-------------------------   NON MEMBER FUNCTIONS   -------------------------//

bool 	isChar(char const *value)
{
	std::string		newValue(value);

	if (newValue.length() != 1 || isdigit(value[0])) {
		return false; }
	return true;
}

bool	isInt(char const *value)
{
	std::string		newValue(value);

	for (size_t y = 0; y < newValue.length(); y++) {
		if (!isdigit(value[y]) && (y != 0 && (value[y] != '-' || value[y] != '+'))) {
			return false; } }

	long	i = std::atol(value);

	if (i > INT_MAX || i < INT_MIN) {
		return false; }

	if (i == 0) {
		for (size_t y = 0; y < newValue.length(); y++) {
			if (value[y] != '0') {
				return false; } } }
	
	return true;
}

bool	isFloat(char const *value)
{
	char	*end = NULL;
	double	d = std::strtod(value, &end);

	if (end == value || d > FLT_MAX || d < -FLT_MAX) {
		return false; }

	return true;
}

bool	isDouble(char const *value)
{
	char	*end = NULL;
	double	d = std::strtod(value, &end);

	if (end == value && d == d) {
		return false; }

	return true;
}

//========================================================================//

void	printChar(char c)
{
	std::cout << BGREEN << "char :		" << GREEN << c << RESET << std::endl;
	std::cout << BGREEN << "int : 		" << GREEN << static_cast<int>(c) << RESET << std::endl;
	std::cout << BGREEN << "float :		" << GREEN << static_cast<float>(c) << "f" << RESET << std::endl;
	std::cout << BGREEN << "double :	" << GREEN << static_cast<double>(c) << RESET << std::endl;
	return;
}

void	printInt(int i)
{
	std::cout << BGREEN << "char :		";
	if (i < 0 || i > 127) {
		std::cout << RED << "Impossible" << RESET << std::endl; }
	else if (!isprint(i)) {
		std::cout << YELLOW << "Non printable" << RESET << std::endl; }
	else {
		std::cout << GREEN << static_cast<char>(i) << RESET << std::endl; }
	std::cout << BGREEN << "int : 		" << GREEN << i << RESET << std::endl;
	std::cout << BGREEN << "float :		" << GREEN << static_cast<float>(i) << "f" << RESET << std::endl;
	std::cout << BGREEN << "double :	" << GREEN << static_cast<double>(i) << RESET << std::endl;
}

void	printFloat(float f)
{
	std::cout << BGREEN << "char :		";
	int	i = roundf(f);
	if (i < 0 || i > 127) {
		std::cout << RED << "Impossible" << RESET << std::endl; }
	else if (!isprint(i)) {
		std::cout << YELLOW << "Non printable" << RESET << std::endl; }
	else {
		std::cout << GREEN << static_cast<char>(i) << RESET << std::endl; }
	std::cout << BGREEN << "int : 		";
	if (f > INT_MAX * 1.0 || f < INT_MIN * 1.0 || isnan(f)) {
		std::cout << RED << "Impossible" << RESET << std::endl; }
	else {
		std::cout << GREEN << static_cast<int>(f) << RESET << std::endl; }
	std::cout << BGREEN << "float :		" << GREEN << f << "f" << RESET << std::endl;
	std::cout << BGREEN << "double :	" << GREEN << static_cast<double>(f) << RESET << std::endl;
}

void	printDouble(double d)
{
	std::cout << BGREEN "char :		";
	int	i = round(d);
	if (i < 0 || i > 127) {
		std::cout << RED << "Impossible" << RESET << std::endl; }
	else if (!isprint(i)) {
		std::cout << YELLOW << "Non displayable" << RESET << std::endl; }
	else {
		std::cout << GREEN << static_cast<char>(i) << RESET << std::endl; }
	std::cout << BGREEN << "int : 		";
	if (d > INT_MAX * 1.0 || d < INT_MIN * 1.0 || isnan(d)) {
		std::cout << RED << "Impossible" << RESET << std::endl; }
	else {
		std::cout << GREEN << static_cast<int>(d) << RESET << std::endl; }
	std::cout << BGREEN << "float :		" << GREEN << static_cast<float>(d) << "f" << RESET << std::endl;
	std::cout << BGREEN << "double :	" << GREEN << d << RESET << std::endl;
}