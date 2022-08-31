/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:55:02 by ebarguil          #+#    #+#             */
/*   Updated: 2022/08/31 19:33:28 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int n, std::string name) {
	Zombie  *Horde = new Zombie[n];
	std::cout << std::endl;
	for (int i = 0; i < n; i++) {
		Horde[i].names(name);
		Horde[i].annonce(); }
	return (Horde); }