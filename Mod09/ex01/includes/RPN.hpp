/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:52:38 by ebarguil          #+#    #+#             */
/*   Updated: 2023/06/25 16:53:15 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <sstream>
# include <string>
# include <cstdlib>
# include <stack>

class ReversePolish
{
	public:

		ReversePolish(char *input);
		~ReversePolish();

		void	parsingInput();
		void	calculation();

		class	RPNError : public std::exception
		{
			virtual const char*	what() const throw() {
				return ("Error"); }
		};

	private:

		std::string	_input;

		std::stack<int>			_number;
		std::stack<char>	_token;

		ReversePolish();
		ReversePolish& operator=(ReversePolish& tocopy);
		ReversePolish(ReversePolish const &tocopy);
};