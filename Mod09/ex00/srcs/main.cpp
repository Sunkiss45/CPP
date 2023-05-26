/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:23:54 by ebarguil          #+#    #+#             */
/*   Updated: 2023/05/26 02:15:34 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include "ft_color.hpp"

int	main(int ac, char **av) {

	if (ac != 2) {
		std::cerr << BRED << "Error in use ! ./btc <input file>" << RESET << std::endl;
		return (1); }

	std::ifstream input_file(av[1], std::ifstream::in);
	if (!input_file.is_open()) {
		std::cerr << BRED << "Error input file ! Could not open file (not exist or access forbidden)." << RESET << std::endl;
		return (1); }

	BitcoinExchange	BitcoinExchange;

	try {
		BitcoinExchange.parsing();
	}
	catch(const std::exception& e) {
		std::cerr << BRED << e.what() << RESET << std::endl;
		return (1); }

	return (0); }