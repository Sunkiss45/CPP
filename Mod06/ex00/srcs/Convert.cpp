/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:38:49 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/15 18:58:36 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Convert::Convert(void) : _type(-1) {	// constructeur par défaut
	std::cout << "Convert Default constructor called." << std::endl;
	return; }

Convert::Convert(Convert const &copy) {	// constructeur par copie
	std::cout << "Convert Copy constructor called." << std::endl;
	*this = copy;
	return; }

Convert::~Convert(void) {	// destructeur
	std::cout << "Convert Destructor called." << std::endl;
	return; }

//------------------------------   SURCHARGES   ------------------------------//

Convert		&Convert::operator=(Convert const &rhs) {
	std::cout << "Convert Assignment operator called." << std::endl;
	this->_type = rhs._type;
	return(*this); }

//---------------------------   SETTER / GETTER   ----------------------------//

void	Convert::setType(char const *str) {
	
	return; }

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

bool 	isChar(const char* value)
{
	std::string		newValue(value);

	if (newValue.length() != 1)
		return false;
	if (isdigit(value[0]))
		return false;
	return true;
}

bool	isFloat(const char* value)
{
	char	*end = NULL;
	double	d = std::strtod(value, &end);

	if (end == value || d > FLT_MAX || d < FLT_MIN) {
		return false; }

	return true;
}

bool	isDouble(const char* value)
{
	char	*end = NULL;
	double	d = std::strtod(value, &end);

	if (end == value) {
		return false; }

	return true;
}

bool	isInt(const char* value)
{
	std::string		newValue(value);

	if (newValue.length() == 0) {
		return false; }

	int	i = std::atoi(value);

	if (i == 0) {
		for (int y = 0; y < newValue.length(); y++) {
			if (value[y] != '0') {
				return false; } } }
	
	return true;
}
