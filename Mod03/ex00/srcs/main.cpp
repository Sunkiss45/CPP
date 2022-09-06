/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:55:02 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/06 18:55:06 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main() {
	ClapTrap	cinnard;
	ClapTrap	patrikk("Patrikk");
	ClapTrap	coplien(cinnard);
	ClapTrap	sibushi("Sibushi");

	std::cout << std::endl;
	patrikk.attack("Coplien");
	coplien.takeDamage(21);
	sibushi.attack("Coplien");
	coplien.takeDamage(1000000);
	std::cout << std::endl;
	cinnard.attack("Patrikk");
	patrikk.takeDamage(42);
	patrikk.beRepaired(1);
	std::cout << std::endl;
	sibushi.beRepaired(140);
	cinnard.attack("Sibushi");
	sibushi.takeDamage(42);
	sibushi.attack("Cinnard");
	cinnard.takeDamage(1000000);
	std::cout << std::endl;

	std::cout << "Sibushi is the winner ! (not op at all)" << std::endl << std::endl;;
	return 0; }