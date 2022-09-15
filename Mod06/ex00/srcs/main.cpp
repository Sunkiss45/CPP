/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:12 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/15 18:46:18 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	main(int ac, char **av) {
	ac--;

	if (ac != 1 || !av[ac][0]) {
		std::cout << RED << "! Error arguments !" << RESET << std::endl;
		return 1; }


	char	*end;
	double	d = std::strtod(av[ac], &end);

	if (end == av[ac]) {// || d > FLT_MAX || d < FLT_MIN) {
		std::cout << RED << "d CPT" << std::endl; 
		return 1; }

	std::cout << GREEN << "d = " << d << std::endl;



	// char	*str = av[ac];

	// char	*end;
	// double	d = std::strtod(str, &end);
	// if (end == str) {
	// 	std::cout << RED << "d CPT" << std::endl;
	// 	return 1; }
	// std::cout << GREEN << "d = " << d << std::endl;
	return 0; }