/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 09:45:06 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/07 14:03:55 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

ScavTrap::ScavTrap(void) : ClapTrap("Raichu", 100, 50, 20) {					// constructeur par défaut
	std::cout << "ScavTrap Default constructor called." << std::endl;
	return; }

ScavTrap::ScavTrap(ScavTrap const &copy) {					// constructeur par copie
	std::cout << "ScavTrap Copy constructor called." << std::endl;
	*this = copy;
	return; }

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {					// constructeur by string
	std::cout << "ScavTrap String constructor called." << std::endl;
	return; }

ScavTrap::~ScavTrap(void) {					// destructeur
	std::cout << "ScavTrap Destructor called." << std::endl;
	return; }

//------------------------------   SURCHARGES   ------------------------------//

ScavTrap		&ScavTrap::operator=(ScavTrap const &rhs) {
	std::cout << "ScavTrap Assignment operator called." << std::endl;
	this->_name = rhs._name;
	this->_health = rhs._health;
	this->_energy = rhs._energy;
	this->_damage = rhs._damage;
	return(*this); }

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	ScavTrap::attack(const std::string &target) {
	if (this->_health == 0) {
		std::cout << "ScavTrap " << this->_name << " is dead.. He can't attack !" << std::endl; 
		return; }
	if (this->_energy == 0) {
		std::cout << "ScavTrap " << this->_name << " don't have enough energy points to attack !" << std::endl; 
		return; }
	--this->_energy;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage ! Energy left : " << this->_energy << std::endl;
	return; }

void	ScavTrap::guardGate(void) {
	if (this->_health == 0) {
		std::cout << "ScavTrap " << this->_name << " is dead.. He can't use special abilities !" << std::endl; 
		return; }
	if (this->_energy <= 9) {
		std::cout << "ScavTrap " << this->_name << " don't have enough energy points to activate Gate Keeper !" << std::endl; 
		return; }
	this->_energy = this->_energy - 10;
	std::cout << "ScavTrap " << this->_name << " has mode Gate Keeper active ! Energy left : " << this->_energy << std::endl;
	return; }
