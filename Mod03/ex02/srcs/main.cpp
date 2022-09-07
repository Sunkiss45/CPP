/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:55:02 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/07 14:33:03 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main() {
	ClapTrap	pikachu;
	std::cout << std::endl;
	ScavTrap	raichu;
	std::cout << std::endl;
	FragTrap	dialga;

	std::cout << std::endl << std::endl;

	pikachu.beRepaired(10);
	raichu.beRepaired(30);
	dialga.beRepaired(50);

	std::cout << std::endl;

	pikachu.attack(dialga.getName());
	dialga.takeDamage(pikachu.getDamage());
	raichu.guardGate();
	int i = 5;
	while (i--) {
		raichu.attack(dialga.getName()); }
	dialga.takeDamage(raichu.getDamage() * (4 - i));

	std::cout << std::endl;

	dialga.highFivesGuys();
	if (dialga.getReponse()) {
		pikachu.takeDamage(1000000);
		raichu.takeDamage(1000000);
		std::cout << std::endl;
		std::cout << "..." << std::endl << "We can say it's a victory.. i suppose ?" << std::endl;
		std::cout << std::endl << std::endl;
		return 0; }

	std::cout << std::endl;
	pikachu.attack(dialga.getName());
	dialga.takeDamage(pikachu.getDamage());
	raichu.guardGate();
	i = 5;
	while (i--) {
		raichu.attack(dialga.getName()); }
	dialga.takeDamage(raichu.getDamage() * (4 - i));

	std::cout << std::endl;

	std::cout << "Maybe " << dialga.getName() << " would win if you help next time ..?" << std::endl;
	std::cout << "ANYWAY, victory of " << pikachu.getName() << " and " << raichu.getName() << " !" << std::endl;

	std::cout << std::endl << std::endl;

	return 0; }