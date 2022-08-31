/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:50:15 by ebarguil          #+#    #+#             */
/*   Updated: 2022/08/31 17:38:27 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	std::cout << std::endl;

	Zombie  ConstruStack = Zombie("Albert");
	ConstruStack.annonce();
	std::cout << std::endl;

	randomChump("Nico");
	std::cout << std::endl;

	Zombie  *NonMembreHead = newZombie("Clovis");
	NonMembreHead->annonce();
	std::cout << std::endl;

	delete NonMembreHead;
	return 0; }