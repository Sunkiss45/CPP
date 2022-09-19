/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:25:35 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/19 11:03:17 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Template.hpp"

std::string	ft_str_generator(void) {
	std::string	str;

	for (int i = 0; i < 10; i++) {
		if (rand() % 2) {
			str += 'A' + (rand() % 26); }
		else {
			str += 'a' + (rand() % 26); } }
	return (str);
}

int	main() {
	std::cout << std::endl << SGREEN << BGREEN << "Tests Template with Int :" << RESET << std::endl << std::endl;
	{
		srand (time(NULL));

		std::cout << BGREEN << "Init of [a] and [b] in Int :" << RESET << std::endl;
		int a = rand() % 101;
		int b = rand() % 101;
		for (void(); b == a; void()) {
			b = rand() % 101; }
		std::cout << GREEN << "\t" "a = " << CYAN << a << RESET << std::endl;
		std::cout << GREEN << "\t" "b = " << CYAN << b << RESET << std::endl;

		std::cout << std::endl;

		std::cout << BYELLOW << "- Using ::swap on [a] and [b]" << std::endl;
		::swap( a, b );

		std::cout << std::endl;
		
		std::cout << BGREEN << "Contents of [a] and [b] :" << RESET << std::endl;
		std::cout << GREEN << "\t" "a = " << CYAN << a << RESET << std::endl;
		std::cout << GREEN << "\t" "b = " << CYAN << b << RESET << std::endl;

		std::cout << std::endl;

		std::cout << BYELLOW << "- Using ::min & ::max on [a] and [b]" << std::endl;

		std::cout << std::endl;

		std::cout << GREEN << "min( a, b ) = " << CYAN << ::min( a, b ) << RESET << std::endl;
		std::cout << GREEN << "max( a, b ) = " << CYAN << ::max( a, b ) << RESET << std::endl;
	}

	std::cout << std::endl;

	std::cout << std::endl << SGREEN << BGREEN << "Tests Template with Double :" << RESET << std::endl << std::endl;
	{
		srand (time(NULL));
		std::cout << BGREEN << "Init of [a] and [b] in Double :" << RESET << std::endl;
		double a = static_cast<double> (rand()) / (static_cast<double> (RAND_MAX/10000.0));
		double b = static_cast<double> (rand()) / (static_cast<double> (RAND_MAX/10000.0));
		for (void(); b == a; void()) {
			b = static_cast<double> (rand()) / (static_cast<double> (RAND_MAX/10000.0)); }
		std::cout << GREEN << "\t" "a = " << CYAN << a << RESET << std::endl;
		std::cout << GREEN << "\t" "b = " << CYAN << b << RESET << std::endl;

		std::cout << std::endl;

		std::cout << BYELLOW << "- Using ::swap on [a] and [b]" << std::endl;
		::swap( a, b );

		std::cout << std::endl;
		
		std::cout << BGREEN << "Contents of [a] and [b] :" << RESET << std::endl;
		std::cout << GREEN << "\t" "a = " << CYAN << a << RESET << std::endl;
		std::cout << GREEN << "\t" "b = " << CYAN << b << RESET << std::endl;

		std::cout << std::endl;

		std::cout << BYELLOW << "- Using ::min & ::max on [a] and [b]" << std::endl;

		std::cout << std::endl;

		std::cout << GREEN << "min( a, b ) = " << CYAN << ::min( a, b ) << RESET << std::endl;
		std::cout << GREEN << "max( a, b ) = " << CYAN << ::max( a, b ) << RESET << std::endl;
	}

	std::cout << std::endl;

	std::cout << std::endl << SGREEN << BGREEN << "Tests Template with String :" << RESET << std::endl << std::endl;
	{
		srand (time(NULL));

		std::cout << BGREEN << "Init of [a] and [b] in String :" << RESET << std::endl;
		std::string a = ft_str_generator();
		std::string b = ft_str_generator();
		for (void(); b == a; void()) {
			b = ft_str_generator(); }
		std::cout << GREEN << "\t" "a = " << CYAN << a << RESET << std::endl;
		std::cout << GREEN << "\t" "b = " << CYAN << b << RESET << std::endl;

		std::cout << std::endl;

		std::cout << BYELLOW << "- Using ::swap on [a] and [b]" << std::endl;
		::swap( a, b );

		std::cout << std::endl;
		
		std::cout << BGREEN << "Contents of [a] and [b] :" << RESET << std::endl;
		std::cout << GREEN << "\t" "a = " << CYAN << a << RESET << std::endl;
		std::cout << GREEN << "\t" "b = " << CYAN << b << RESET << std::endl;

		std::cout << std::endl;

		std::cout << BYELLOW << "- Using ::min & ::max on [a] and [b]" << std::endl;

		std::cout << std::endl;

		std::cout << GREEN << "min( a, b ) = " << CYAN << ::min( a, b ) << RESET << std::endl;
		std::cout << GREEN << "max( a, b ) = " << CYAN << ::max( a, b ) << RESET << std::endl;
	}

	std::cout << std::endl;
	return 0; }