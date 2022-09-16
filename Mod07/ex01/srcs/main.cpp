/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:52:50 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/16 18:58:48 by ebarguil         ###   ########.fr       */
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
	// {
	// 	int tab[] = {0, 1, 2, 3, 4};
	// 	Awesome tab2[5];

	// 	iter(tab, 5, print);
	// 	iter(tab2, 5, print);
	// 	iter(tab, 5, plusOne);
	// }

	
	std::cout << std::endl;
	{
		size_t	size = 3;
		int	tab[size];

		int	x;
		srand(time(NULL));
		std::cout << BGREEN << "Tableau random : ";
		for (size_t y = 0; y < size; y++) {
			x = rand() % 101;
			std::cout << x << " ";
			tab[y] = x; }
		std::cout << RESET << std::endl;

		std::cout << SGREEN << "Tableau fct diffTo42 :" << GREEN << std::endl;
		iter(tab, size, diffTo42);
		std::cout << RESET << std::endl;
	}
	{
		std::string	tab[] = {"isasa", "alilice", "eloulou"};

		std::cout << SRED << "Tableau fct addSuffixe :" << RED << std::endl;
		iter(tab, 3, addSuffixe);
		std::cout << RESET << std::endl;
	}
	{
		size_t	size = 3;
		Classtest	tab[size];

		int	x;
		std::cout << BBLUE << "Tableau random : ";
		for (size_t y = 0; y < size; y++) {
			x = rand() % 11;
			std::cout << x << " ";
			tab[y].setN(x); }
		std::cout << RESET << std::endl;

		std::cout << SBLUE << "Tableau fct printSquare :" << BLUE << std::endl;
		iter(tab, size, printSquare);
		std::cout << RESET << std::endl;
	}
	return 0;
}