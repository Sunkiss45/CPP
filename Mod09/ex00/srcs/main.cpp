/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:23:54 by ebarguil          #+#    #+#             */
/*   Updated: 2023/06/25 14:45:10 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include "ft_color.hpp"

int	main(int ac, char **av) {

	if (ac != 2) {
		std::cerr << BRED << "Error in use ! ./btc <input file>" << RESET << std::endl;
		return (1); }

	BitcoinExchange	BitcoinExchange;

	try {
		BitcoinExchange.parsingData();
	}
	catch(const std::exception& e) {
		std::cerr << BRED << e.what() << RESET << std::endl;
		return (1); }

	try {
		BitcoinExchange.parsingInput(av[1]);
	}
	catch(const std::exception& e) {
		std::cerr << BRED << e.what() << RESET << std::endl;
		return (1); }

	return (0); }