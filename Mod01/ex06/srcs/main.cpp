/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 18:18:54 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/03 19:59:11 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av) {
	ac--;

	if (ac != 1) {
		std::cout << "Invalid parameter ! - <level>" << std::endl;
		return 1; }

	std::string	level = av[1];
	if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR") {
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl; 
		return 1; }

	Harl	harl;
	harl.complain(level);

	return 0; }