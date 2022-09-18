/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:12 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/18 14:46:20 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	main(int ac, char **av) {
	ac--;

	if (ac != 1 || !av[ac][0]) {
		std::cout << BRED << " ! Error arguments !" << RESET << std::endl;
		return 1; }

	Convert convert;

	try {
		convert.setType(av[ac]); }
	catch (std::exception &e) {
		std::cout << BRED << e.what() << RESET << std::endl; 
		return 1; }

	std::cout << std::endl;

	try {
		convert.printType(av[ac]); }
	catch (std::exception &e) {
		std::cout << BRED << e.what() << RESET << std::endl; }

	std::cout << std::endl;

	return 0; }