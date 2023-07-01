/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:52:38 by ebarguil          #+#    #+#             */
/*   Updated: 2023/07/01 15:11:47 by ebarguil         ###   ########.fr       */
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

		int		GetNum();

		class	RPNError : public std::exception
		{
			virtual const char*	what() const throw() {
				return ("Error"); }
		};

	private:

		std::string	_input;

		void	calculation(char tok);
		void	operant(char tok, int one, int two);

		std::stack<int>			_number;

		ReversePolish();
		ReversePolish& operator=(ReversePolish& tocopy);
		ReversePolish(ReversePolish const &tocopy);
};