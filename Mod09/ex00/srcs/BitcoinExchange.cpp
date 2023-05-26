/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:32:58 by ebarguil          #+#    #+#             */
/*   Updated: 2023/05/26 03:03:22 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include "ft_color.hpp"

BitcoinExchange::BitcoinExchange() {
	this->_data = "data.csv";
}

BitcoinExchange::~BitcoinExchange() {
}

bool	BitcoinExchange::IsLeapYear(int year) {
	if (!year) {
		throw (DataLineError());}
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				return true; } }
		else {
			return true; } }
	return false;
}

bool	BitcoinExchange::IsValidDate(int y, int m, int d) {
	// std::cout << BYELLOW << y << "/" << m << "/" << d << RESET << std::endl;
	// std::cout << BYELLOW << 1 << RESET << std::endl;
	if (m < 0 || d < 0) {
		return false; }
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
		if (d > 31) {
			return false; } }
	else if (m == 4 || m == 6 || m == 9 || m == 11) {
		if (d > 30) {
			return false; } }
	else if (m == 2) {
		if (IsLeapYear(y)) {
			if (d > 29) {
				return false; } }
		else if (d > 28) {
			return false; } }
	else if (m > 12) {
		return false; }

	return true;
}

void	BitcoinExchange::parsing() {
	std::ifstream data_file(this->GetData().c_str(), std::ifstream::in);
	if (!data_file.is_open()) {
		throw (DataCantOpen()); }
	
	std::string	l;
	std::getline(data_file, l);
	int	e;

	for(e = 1; std::getline(data_file, l); e++) {
		std::stringstream rest(l);
		std::string date, value;
		std::getline(rest, date, ',');
		std::getline(rest, value, ',');

		std::stringstream dateS(date);
		int y, m, d;
		char sep[2];
		dateS >> y >> sep[0] >> m >> sep[1] >> d;
		if (dateS.fail() || dateS.get() == false
		|| sep[0] != '-' || sep[1] != '-') {
			throw (DataLineError()); }
		if (!IsValidDate(y, m, d)) {
			throw (DataLineError()); }
	}

	return;
}

std::string	BitcoinExchange::GetData() {
	return (this->_data); }