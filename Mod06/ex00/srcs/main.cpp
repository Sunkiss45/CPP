/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:12 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/15 16:58:20 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	main(int ac, char **av) {
	ac--;

	if (ac != 1) {
		std::cout << RED << "! Error arguments !" << RESET << std::endl;
		return 1; }
	
	char	*str = av[ac];
	char	*end;
	double		d = std::strtod(str, &end);
	if (end == str) {
		std::cout << RED << "d CPT" << std::endl;
		return 1; }
	std::cout << GREEN << "d = " << d << std::endl;
	d = *&d;
	// std::cout << "char : " << (char)str << std::endl;
	// std::cout << "int : " << (int)str << std::endl;
	// std::cout << "float : " << (float)str << std::endl;
	// std::cout << "double : " << (double)str << std::endl;
	return 0; }