/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:16:39 by ebarguil          #+#    #+#             */
/*   Updated: 2022/08/30 22:46:12 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main( void ) {
	int			i = 0;
	int			a = 0;
	PhoneBook	pb;
	std::string	input;

	pb.welcome();
	for (int x = 0; x == 0; std::cout << "> ") {
		std::getline(std::cin, input);
		if (input == "ADD") {
			if (pb.add(i)) {
				break; }
			if (++i == 8) {
				std::cout << "Attention, vous avez atteint les 8 contacts maximum !\nLa prochaine entrée supprimera la plus ancienne." << std::endl;
				i = 0; }
			if (a < 8) {
				a++; } }
		else if (input == "SEARCH") {
			if (a == 0) {
				std::cout << "Vous n'avez aucun contact.." << std::endl; }
			else {
				if (pb.search(a)) {
					break; } } }
		else if (input == "EXIT" || std::cin.eof() == 1) {
			x = 1; }
		else
			pb.error(); }
	std::cout << "\r- Fin du programme en cours, toutes les opérations sont effacées.." << std::endl;
	return 0; }