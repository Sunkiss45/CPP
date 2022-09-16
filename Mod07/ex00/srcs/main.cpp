/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:25:35 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/16 17:39:03 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Template.hpp"

int	main() {
	std::cout << std::endl;
	int a = 2;
	int b = 3;

	std::cout << BLUE << "a = " << a << ", b = " << b << RESET << std::endl;
	::swap( a, b );
	std::cout << CYAN << "a = " << a << ", b = " << b << RESET << std::endl;
	std::cout << GREEN << "min( a, b ) = " << ::min( a, b ) << RESET << std::endl;
	std::cout << GREEN << "max( a, b ) = " << ::max( a, b ) << RESET << std::endl;

	std::cout << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << BLUE << "c = " << c << ", d = " << d << RESET << std::endl;
	::swap(c, d);
	std::cout << CYAN << "c = " << c << ", d = " << d << RESET << std::endl;
	std::cout << GREEN << "min( c, d ) = " << ::min( c, d ) << RESET << std::endl;
	std::cout << GREEN << "max( c, d ) = " << ::max( c, d ) << RESET << std::endl;

	std::cout << std::endl;
	return 0; }