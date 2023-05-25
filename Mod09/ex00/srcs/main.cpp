/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:23:54 by ebarguil          #+#    #+#             */
/*   Updated: 2023/05/25 17:01:09 by ebarguil         ###   ########.fr       */
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
		std::cerr << BRED << "Error input file ! could not open file." << RESET << std::endl;
		return (1); }

	BitcoinExchange	BitcoinExchange;

	try {
		BitcoinExchange.parsing();
	}
	catch(const std::exception& e) {
		std::cerr << BRED << e.what() << RESET << std::endl;
		return (1); }

	return (0); }