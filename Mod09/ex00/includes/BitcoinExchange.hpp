/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:31:35 by ebarguil          #+#    #+#             */
/*   Updated: 2023/06/21 17:46:37 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <sstream>
# include <fstream>
# include <string>
# include <map>

class BitcoinExchange
{
	public:

		BitcoinExchange();
		~BitcoinExchange();

		void	parsingData();
		void	parsingInput(char *f);

		std::string GetData();

		class	DataCantOpen : public std::exception
		{
			virtual const char*	what() const throw() {
				return ("Error data.csv file ! Could not open file (not exist or access forbidden)."); }
		};

		class	DataHeaderError : public std::exception
		{
			virtual const char*	what() const throw() {
				return ("Error data.csv file ! Header is not valid \"date,exchange_rate\"."); }
		};

		class	DataLineError : public std::exception
		{
			virtual const char*	what() const throw() {
				return ("Error data.csv file ! One line is wrong."); }
		};


		class	InputCantOpen : public std::exception
		{
			virtual const char*	what() const throw() {
				return ("Error input file ! Could not open file (not exist or access forbidden)."); }
		};

		class	InputHeaderError : public std::exception
		{
			virtual const char*	what() const throw() {
				return ("Error input file ! Header is not valid \"date | value\"."); }
		};


		class	InputBadInputError : public std::exception
		{
			virtual const char*	what() const throw() {
				return ("Error: bad input => "); }
		};

		class	InputLineEmptyError : public std::exception
		{
			virtual const char*	what() const throw() {
				return ("Error: line empty."); }
		};

		class	InputDateError : public std::exception
		{
			virtual const char*	what() const throw() {
				return ("Error: invalid date => "); }
		};

		class	InputValueError : public std::exception
		{
			virtual const char*	what() const throw() {
				return ("Error: invalid value => "); }
		};

		class	InputNegValueError : public std::exception
		{
			virtual const char*	what() const throw() {
				return ("Error: not a positive number."); }
		};

		class	InputBigValueError : public std::exception
		{
			virtual const char*	what() const throw() {
				return ("Error: too large a number."); }
		};

	private:

		std::map<std::string, float> _data;
		std::string _datafile;

		bool	IsValidDate(int y, int m, int d);
		bool	IsLeapYear(int year);

		BitcoinExchange& operator=(BitcoinExchange& tocopy);
		BitcoinExchange(BitcoinExchange const &tocopy);
};