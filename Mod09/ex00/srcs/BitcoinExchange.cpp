/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:32:58 by ebarguil          #+#    #+#             */
/*   Updated: 2023/06/21 18:49:24 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include "ft_color.hpp"

BitcoinExchange::BitcoinExchange() {
	this->_datafile = "data.csv";
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

void	BitcoinExchange::parsingData() {
	std::ifstream data_file(this->GetData().c_str(), std::ifstream::in);
	if (!data_file.is_open()) {
		throw (DataCantOpen()); }
	
	std::string	l;
	std::getline(data_file, l);
	if (l != "date,exchange_rate") {
		throw(DataHeaderError()); }

	while (std::getline(data_file, l)) {
		std::stringstream rest(l);
		std::string date, value;
		std::getline(rest, date, ',');
		std::getline(rest, value, ',');

		std::stringstream dateS(date);
		int y, m, d;
		char sep[2];
		dateS >> y >> sep[0] >> m >> sep[1] >> d;
		if (dateS.fail() || dateS.get() == false
		|| sep[0] != '-' || sep[1] != '-'
		|| !IsValidDate(y, m, d)) {
			throw (DataLineError()); }

		std::stringstream valueS(value);
		float val;
		valueS >> val;
		if (valueS.fail() || val < 0) {
			throw (DataLineError()); }

		this->_data[date] = val;
	}

	return;
}

void	BitcoinExchange::parsingInput(char *f) {

	std::ifstream input_file(f, std::ifstream::in);
	if (!input_file.is_open()) {
		throw(InputCantOpen()); }

	std::string l;
	std::getline(input_file, l);
	if (l != "date | value") {
		throw(InputHeaderError()); }

	int er = 0;

	while (std::getline(input_file, l)) {
		try {
			if (l.empty()) {
				throw (InputLineEmptyError()); }
			
			if (l.find(" | ") == std::string::npos) {
				er = 1;
				throw (InputBadInputError()); }
			
			std::string date;
			date = l.substr(0, l.find(" | "));
			std::stringstream dateS(date);
			int y, m, d;
			char sep[2];
			dateS >> y >> sep[0] >> m >> sep[1] >> d;
			if (dateS.fail() || dateS.get() == false
			|| sep[0] != '-' || sep[1] != '-'
			|| !IsValidDate(y, m, d)) {
				er = 1;
				throw (InputDateError()); }
			
			std::string value;
			value = l.substr(l.find(" | ") + 3);
			std::stringstream valueS(value);
			float	val;
			int		sun = 0;
			std::string	end;
			valueS >> val;
			if (valueS.fail()) {
				sun = 1; }
			valueS >> val >> end;

			std::cout << BCYAN << "[" << val << "] - " << BGREEN << "[" << end << "]" << RESET << std::endl;
			
			if ((sun == 1 && (!end.empty() || val == 0)) || !end.empty()) {
				er = 1;
				throw (InputValueError()); }
			else if (val < 0) {
				throw (InputNegValueError()); }
			else if (val > 1000) {
				throw (InputBigValueError()); }
		}
		catch(const std::exception& e) {
			std::cerr << BYELLOW << e.what();
			if (er == 1) {
				std::cerr << l; 
				er = 0; }
			std::cerr << RESET << std::endl; }
	}

	return;
}

std::string	BitcoinExchange::GetData() {
	return (this->_datafile); }