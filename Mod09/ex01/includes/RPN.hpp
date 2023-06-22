/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:52:38 by ebarguil          #+#    #+#             */
/*   Updated: 2023/06/22 17:54:57 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <sstream>
# include <string>
# include <cstdlib>

class ReversePolish
{
	public:

		ReversePolish(char *input);
		~ReversePolish();

		void	parsingInput();

	private:

		std::string	_input;

		ReversePolish();
		ReversePolish& operator=(ReversePolish& tocopy);
		ReversePolish(ReversePolish const &tocopy);
};