/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 19:04:44 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/03 20:04:53 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Harl::Harl(void) {					// constructeur par défaut
	std::cout << "Harl Default constructor called." << std::endl;
	return; }

Harl::~Harl(void) {					// destructeur
	std::cout << "Harl Destructor called." << std::endl;
	return; }

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	Harl::complain(std::string level) {
	void	(Harl::*f[])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	std::string	poss[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	swi = 0;

	for (int i = 0; i <= 3; i++){
		if (swi) {
			(this->*f[i])(); }
		if (poss[i] == level) {
			swi = 1;
			(this->*f[i])(); } }
	return; }

void	Harl::_debug(void) {
	std::cout << std::endl << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl << std::endl;
	return; }

void	Harl::_info(void) {
	std::cout << std::endl << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
	return; }

void	Harl::_warning(void) {
	std::cout << std::endl << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
	return; }

void	Harl::_error(void) {
	std::cout << std::endl << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
	return; }
