/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:31:35 by ebarguil          #+#    #+#             */
/*   Updated: 2023/05/25 17:10:42 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <fstream>
# include <string>

class BitcoinExchange
{
	public:

		BitcoinExchange();
		~BitcoinExchange();

		void		parsing();

		std::string GetData();

		class	DataCantOpen : public std::exception
		{
			virtual const char*	what() const throw() {
				return ("Error data file ! could not open file."); }
		};

	private:

		std::string _data;

		BitcoinExchange& operator=(BitcoinExchange& tocopy);
		BitcoinExchange(BitcoinExchange const &tocopy);
};