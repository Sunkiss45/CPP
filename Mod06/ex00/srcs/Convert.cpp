/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:38:49 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/15 16:14:24 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Convert::Convert(void) {	// constructeur par défaut
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
	return(*this); }

//---------------------------   MEMBER FUNCTIONS   ---------------------------//


