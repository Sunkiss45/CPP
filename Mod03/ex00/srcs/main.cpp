/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:55:02 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/07 10:58:50 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main() {
	ClapTrap	pikachu;
	ClapTrap	bulbizarre("Bulbizarre");
	ClapTrap	pichu(pikachu);
	ClapTrap	tortipouss("Tortipouss");
	ClapTrap	poussifeu("Poussifeu");

	std::cout << std::endl;
	std::cout << std::endl;

	bulbizarre.attack("Pichu");
	pichu.takeDamage(21);
	pikachu.attack("Pichu");
	pichu.takeDamage(1000000);

	std::cout << std::endl;
	while (bulbizarre.getEnergy()) {
		bulbizarre.beRepaired(1); }
	bulbizarre.beRepaired(1);
	while (pikachu.getEnergy()) {
		pikachu.attack("Bulbizarre"); }
	pikachu.attack("Bulbizarre");
	bulbizarre.takeDamage(42);
	bulbizarre.beRepaired(1);
	tortipouss.attack("Pikachu");
	pikachu.takeDamage(100);

	std::cout << std::endl;

	poussifeu.beRepaired(140);
	tortipouss.attack("Poussifeu");
	poussifeu.takeDamage(100);
	poussifeu.attack("Tortipouss");
	tortipouss.takeDamage(1000000);

	std::cout << std::endl;

	std::cout << poussifeu.getName() << " is the winner ! (not op at all)" << std::endl << std::endl << std::endl;;
	return 0; }