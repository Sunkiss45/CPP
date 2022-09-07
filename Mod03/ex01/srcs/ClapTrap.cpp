/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:55:08 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/07 13:49:29 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

ClapTrap::ClapTrap(void) : _name("Pikachu"), _health(10), _energy(10), _damage(0) {					// constructeur par défaut
	std::cout << "ClapTrap Default constructor called." << std::endl;
	return; }

ClapTrap::ClapTrap(ClapTrap const &copy) {					// constructeur par copie
	std::cout << "ClapTrap Copy constructor called." << std::endl;
	*this = copy;
	return; }

ClapTrap::ClapTrap(std::string name) : _name(name), _health(10), _energy(10), _damage(0) {					// constructeur by string
	std::cout << "ClapTrap String constructor called." << std::endl;
	return; }

ClapTrap::ClapTrap(std::string name, int HP, int EP, int AD) : _name(name), _health(HP), _energy(EP), _damage(AD) {
	std::cout << "ClapTrap Default constructor called." << std::endl;
	return; }

ClapTrap::~ClapTrap(void) {					// destructeur
	std::cout << "ClapTrap Destructor called." << std::endl;
	return; }

//------------------------------   SURCHARGES   ------------------------------//

ClapTrap		&ClapTrap::operator=(ClapTrap const &rhs) {
	std::cout << "ClapTrap Assignment operator called." << std::endl;
	this->_name = rhs._name;
	this->_health = rhs._health;
	this->_energy = rhs._energy;
	this->_damage = rhs._damage;
	return(*this); }

//---------------------------   SETTER / GETTER   ----------------------------//

std::string const		&ClapTrap::getName() const {
	return(this->_name); }

int const		&ClapTrap::getEnergy() const {
	return(this->_energy); }

int const		&ClapTrap::getDamage() const {
	return(this->_damage); }

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	ClapTrap::attack(const std::string &target) {
	if (this->_health == 0) {
		std::cout << "ClapTrap " << this->_name << " is dead.. He can't attack !" << std::endl; 
		return; }
	if (this->_energy == 0) {
		std::cout << "ClapTrap " << this->_name << " don't have enough energy points to attack !" << std::endl; 
		return; }
	--this->_energy;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage ! Energy left : " << this->_energy << std::endl;
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
		std::cout << "ClapTrap " << this->_name << " is dead... It's a little too late to use a repair !" << std::endl;
		return; }
	if (this->_energy == 0) {
		std::cout << "ClapTrap " << this->_name << " don't have enough energy points to repair !" << std::endl; 
		return; }
	--this->_energy;
	this->_health = this->_health + amount;
	std::cout << "ClapTrap " << this->_name << " repairs himself for " << amount << " points of health ! Current health : " << this->_health << " / Energy left : " << this->_energy << std::endl;
	return; }
