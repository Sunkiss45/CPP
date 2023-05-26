/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:31:35 by ebarguil          #+#    #+#             */
/*   Updated: 2023/05/26 03:03:18 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <sstream>
# include <fstream>
# include <string>

class BitcoinExchange
{
	public:

		BitcoinExchange();
		~BitcoinExchange();

		void	parsing();

		std::string GetData();

		class	DataCantOpen : public std::exception
		{
			virtual const char*	what() const throw() {
				return ("Error data.csv file ! Could not open file (not exist or access forbidden)."); }
		};

		class	DataLineError : public std::exception
		{
			virtual const char*	what() const throw() {
				return ("Error data.csv file ! One line is wrong."); }
		};

		bool	IsLeapYear(int year);

	private:

		std::string _data;

		// bool	IsLeapYear(int year);
		bool	IsValidDate(int y, int m, int d);

		BitcoinExchange& operator=(BitcoinExchange& tocopy);
		BitcoinExchange(BitcoinExchange const &tocopy);
};