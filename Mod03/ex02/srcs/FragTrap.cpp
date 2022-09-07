/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 11:30:14 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/07 14:21:57 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

FragTrap::FragTrap(void) : ClapTrap("Dialga", 100, 100, 30) {					// constructeur par défaut
	std::cout << "FragTrap Default constructor called." << std::endl;
	return; }

FragTrap::FragTrap(FragTrap const &copy) {					// constructeur par copie
	std::cout << "FragTrap Copy constructor called." << std::endl;
	*this = copy;
	return; }

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {					// constructeur by string
	std::cout << "FragTrap String constructor called." << std::endl;
	return; }

FragTrap::~FragTrap(void) {					// destructeur
	std::cout << "FragTrap Destructor called." << std::endl;
	return; }

//------------------------------   SURCHARGES   ------------------------------//

FragTrap		&FragTrap::operator=(FragTrap const &rhs) {
	std::cout << "FragTrap Assignment operator called." << std::endl;
	this->_name = rhs._name;
	this->_health = rhs._health;
	this->_energy = rhs._energy;
	this->_damage = rhs._damage;
	return(*this); }

//---------------------------   SETTER / GETTER   ----------------------------//

bool	FragTrap::getReponse(void) {
	return(this->_rep); }

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	FragTrap::highFivesGuys(void) {
	if (this->_health == 0) {
		std::cout << "FragTrap " << this->_name << " is dead.. He can't use special abilities !" << std::endl; 
		return; }
	if (this->_energy <= 98) {
		std::cout << "FragTrap " << this->_name << " don't have enough energy points to activate a High Five !" << std::endl; 
		return; }
	std::cout << "FragTrap " << this->_name << " want to annihilate the world with a High Five, are you okay with that ? Y / N" << std::endl;
	std::cout << "> ";
	std::string	input;
	for (int x = 0; !x; std::cout << "> ") {
		std::getline(std::cin, input);
		if (input == "Y") {
			this->_rep = true;
			this->_energy = this->_energy - 99;
			std::cout << "FragTrap " << this->_name << " just annihilate the other's pokemon with your's High Five ! Energy left : " << this->_energy << std::endl;
			return; }
		else if (input == "N" || std::cin.eof() == 1) {
			this->_rep = false;
			std::cout << "FragTrap " << this->_name << " is disappointed with this refusal.." << std::endl;
			return; }
	}
	return; }
