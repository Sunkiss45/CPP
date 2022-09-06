/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:55:08 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/06 18:43:11 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

ClapTrap::ClapTrap(void) : _name("Cinnard"), _energy(10), _health(10), _damage(0) {					// constructeur par défaut
	std::cout << "ClapTrap Default constructor called." << std::endl;
	return; }

ClapTrap::ClapTrap(ClapTrap const &copy) {					// constructeur par copie
	std::cout << "ClapTrap Copy constructor called." << std::endl;
	*this = copy;
	return; }

ClapTrap::ClapTrap(std::string name) : _name(name), _energy(10), _health(10), _damage(0) {					// constructeur by string
	std::cout << "ClapTrap String constructor called." << std::endl;
	return; }

ClapTrap::~ClapTrap(void) {					// destructeur
	std::cout << "ClapTrap Destructor called." << std::endl;
	return; }

//------------------------------   SURCHARGES   ------------------------------//

ClapTrap		&ClapTrap::operator=(ClapTrap const &rhs) {
	std::cout << "ClapTrap Assignment operator called." << std::endl;
	this->_name = rhs._name;
	this->_energy = rhs._energy;
	this->_health = rhs._health;
	this->_damage = rhs._damage;
	return(*this); }

//---------------------------   SETTER / GETTER   ----------------------------//

std::string const		&ClapTrap::getName() const {
	return(this->_name); }

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage !" << std::endl;
	return; }

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_health <= 0) {
		std::cout << "ClapTrap " << this->_name << " is already dead !" << std::endl;
		return; }
	this->_health = this->_health - amount;
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage ! ";
	if (this->_health <= 0) {
		std::cout << "He died !" << std::endl;
		return; }
	std::cout << "Current health : " << this->_health << std::endl;
	return; }

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_health <= 0) {
		std::cout << "ClapTrap " << this->_name << " is dead... It's a little too late to use that !" << std::endl;
		return; }
	this->_health = this->_health + amount;
	std::cout << "ClapTrap " << this->_name << " repairs himself for " << amount << " points of health ! Current health : " << this->_health << std::endl;
	return; }
