/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:25:38 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/13 16:08:06 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main() {

	// Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;

	// std::cout << b << std::endl;

	// std::cout << Fixed::max( a, b ) << std::endl;

	Fixed	a(42.42f);
	Fixed	b(42.4219f);

	std::cout << "Raw value : a - (" << a << ") / b - (" << b << ")" << std::endl;
	if (a > b)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	if (a < b)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	if (a >= b)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	if (a <= b)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	if (a == b)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	if (a != b)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;


	// Fixed	a(10.5f);
	// Fixed	b(19.5f);
	// Fixed	c;

	// std::cout << "Raw value : a - (" << a << ") / b - (" << b << ")" << std::endl;
	// c = a + b;
	// std::cout << "c = a + b (" << c << ")" << std::endl;
	// c = a - b;
	// std::cout << "c = a - b (" << c << ")" << std::endl;
	// c = a * b;
	// std::cout << "c = a * b (" << c << ")" << std::endl;
	// c = a / b;
	// std::cout << "c = a / b (" << c << ")" << std::endl;


	// Fixed	a(0);

	// std::cout << a << std::endl << ++a << std::endl << a << std::endl << a++ << std::endl << a << std::endl << --a << std::endl << a << std::endl << a-- << std::endl << a << std::endl;


	// Fixed	a(10);
	// Fixed	b(15);
	// const Fixed	c(10);
	// const Fixed	d(15);

	// std::cout << Float::min(a, b) << std::endl;
	// std::cout << Float::max(a, b) << std::endl;
	// std::cout << Float::min(c, d) << std::endl;
	// std::cout << Float::max(c, d) << std::endl;

	return 0;}