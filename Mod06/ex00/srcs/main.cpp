/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:12 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/16 14:31:24 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	main(int ac, char **av) {
	ac--;

	if (ac != 1 || !av[ac][0]) {
		std::cout << RED << "! Error arguments !" << RESET << std::endl;
		return 1; }

	Convert convert;

	try {
		convert.setType(av[ac]); }
	catch (std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl; 
		return 1; }

	try {
		convert.printType(av[ac]); }
	catch (std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl; }

	return 0; }