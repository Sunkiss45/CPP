/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:50:15 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/03 21:09:19 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	std::cout << std::endl;

	Zombie	*Horde = zombieHorde(4, "Francis");
	std::cout << std::endl;

	delete [] Horde;
	return 0; }