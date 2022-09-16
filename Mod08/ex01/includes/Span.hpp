/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 23:19:13 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/17 00:44:21 by ebarguil         ###   ########.fr       */
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

		void	addNumber(int i);
		int		shortestSpan(void);
		int		longestSpan(void);
		void	rangeIter(unsigned int x);

		class ReachMaxSize : public std::exception
		{
			virtual const char	*what() const throw() {
				return ("Reach maximal size of this container !"); }
		};

		class Impossible : public std::exception
		{
			virtual const char	*what() const throw() {
				return ("Imposible to do this action !"); }
		};

	private :
		Span(void);					// constructeur par défaut
		std::vector<int>	_vec;
		unsigned int		_n;
		
};