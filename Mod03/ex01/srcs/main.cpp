/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:55:02 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/07 14:28:41 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main() {
	ClapTrap	pikachu;
	ScavTrap	raichu;
	ScavTrap	pichu_s("Pichu shiny");

	std::cout << std::endl << std::endl;

	pikachu.beRepaired(5);
	raichu.beRepaired(20);
	pichu_s.beRepaired(50);
	
	std::cout << std::endl;

	pikachu.attack(raichu.getName());
	raichu.takeDamage(pikachu.getDamage());
	pichu_s.attack(raichu.getName());
	raichu.takeDamage(pichu_s.getDamage());

	raichu.attack("Pikachu & Pichu shiny");
	pikachu.takeDamage(raichu.getDamage());
	pichu_s.takeDamage(raichu.getDamage());

	std::cout << std::endl;

	pichu_s.guardGate();
	int i = 5;
	while (i--) {
		pichu_s.attack(raichu.getName()); }
	raichu.takeDamage(pichu_s.getDamage() * (4 - i));
	raichu.attack(raichu.getName());
	raichu.takeDamage(raichu.getDamage());

	std::cout << std::endl;

	std::cout << pichu_s.getName() << " is the winner ! (by misstake of raichu..)" << std::endl;

	std::cout << std::endl << std::endl;

	return 0; }