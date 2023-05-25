/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:32:58 by ebarguil          #+#    #+#             */
/*   Updated: 2023/05/25 17:29:40 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include "ft_color.hpp"

BitcoinExchange::BitcoinExchange() {
	this->_data = "data.csv";
}

BitcoinExchange::~BitcoinExchange() {
}

void	BitcoinExchange::parsing() {
	std::ifstream data_file(BitcoinExchange.GetData(), std::ifstream::in);
	if (!data_file.is_open()) {
		throw (DataCantOpen()); }
	
	std::string	l;
	std::getline(data_file, l);

	while(std::getline(file, line)) {
		std::
	}
	
	return; }

std::string	BitcoinExchange::GetData() {
	return (this->_data); }