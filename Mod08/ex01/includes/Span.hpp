/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 23:19:13 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/20 18:19:41 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <exception>
# include <vector>
# include <algorithm>

// ATTENTION : utiliser la forme canonique de Coplien !!

class Span					// classe mere/abstraite/concrete/interface
{

	public :
		Span(Span const &copy);					// constructeur par copie
		Span(unsigned int n);					// constructeur by param
		~Span(void);					// destructeur

		Span &operator=(Span const &rhs);					// surcharge d'assignation

		unsigned int	size(void) const;
		std::vector<int>	getvec(void) const;

		void	addNumber(int i);
		int		shortestSpan(void);
		int		longestSpan(void);
		void	rangeGen(void);

		class ErrorMaxSize : public std::exception
		{
			virtual const char	*what() const throw() {
				return ("Code error 00 : Reach maximal size"); }
		};

		class ErrorNotEnough : public std::exception
		{
			virtual const char	*what() const throw() {
				return ("Code error 01 : Not enough value"); }
		};

		class ErrorNotValid : public std::exception
		{
			virtual const char	*what() const throw() {
				return ("Code error 02 : Not valid value"); }
		};

	private :
		Span(void);					// constructeur par défaut
		std::vector<int>	_vec;
		unsigned int		_n;
		
};
std::ostream &operator<<(std::ostream &out, Span const &rhs);

int	little_rand(void);
