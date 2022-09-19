/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:52:50 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/19 14:02:36 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classtest.hpp"
#include "Iter.hpp"


class Awesome
{
	public :
		Awesome( void ) : _n(42) { return; }
		int get( void ) const { return this->_n; }
	private :
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template<typename T>
void print( T const & x ) { std::cout << x << std::endl; return; }

template<typename T>
void plusOne( T & x ) { std::cout << x + 1 << std::endl; return; }

int main()
{	
	std::cout << std::endl << SGREEN << BGREEN << "Tests fct diffTo42 :" << RESET << std::endl << std::endl;
	{
		size_t	size = 5;
		int	tab[size];

		int	x;
		srand(time(NULL));
		std::cout << BYELLOW << "Generate of " << size << " random bench of number :" << std::endl;
		std::cout << GREEN << "\t";
		for (size_t y = 0; y < size; y++) {
			x = rand() % 101;
			std::cout << x;
			if (y != size - 1) {
				std::cout << " - "; }
			tab[y] = x; }
		std::cout << RESET << std::endl;

		std::cout << std::endl;
		
		std::cout << BYELLOW << "Execute fct iter(diffTo42) on each number :" << GREEN << std::endl;
		iter(tab, size, diffTo42);
		std::cout << RESET << std::endl;
	}

	std::cout << std::endl << SGREEN << BGREEN << "Tests fct addSuffixe :" << RESET << std::endl << std::endl;
	{
		std::string	tab[] = {"isasa", "alilice", "eloulou"};

		std::cout << BYELLOW << "Init of 3 string :" << std::endl;
		std::cout << GREEN << "\t" << tab[0] << " - " << tab[1] << " - " << tab[2] << RESET << std::endl;

		std::cout << std::endl;

		std::cout << BYELLOW << "Execute fct iter(addSuffixe) on each string :" << GREEN << std::endl;
		iter(tab, 3, addSuffixe);
		std::cout << RESET << std::endl;
	}

	std::cout << std::endl << SGREEN << BGREEN << "Tests fct printSquare :" << RESET << std::endl << std::endl;
	{
		size_t	size = 5;
		Classtest	tab[size];

		int	x;
		std::cout << BYELLOW << "Generate of " << size << " random bench of number :" << std::endl;
		std::cout << GREEN << "\t";
		for (size_t y = 0; y < size; y++) {
			x = rand() % 11;
			std::cout << x;
			if (y != size - 1) {
				std::cout << " - "; }
			tab[y].setN(x); }
		std::cout << RESET << std::endl;

		std::cout << std::endl;

		std::cout << BYELLOW << "Execute fct iter(printSquare) on each string :" << GREEN << std::endl;
		iter(tab, size, printSquare);
		std::cout << RESET << std::endl;
	}
	return 0;
}