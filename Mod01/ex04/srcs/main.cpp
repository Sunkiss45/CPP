/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 22:11:34 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/02 23:35:14 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	main(int ac, char **av) {
	ac--;

	if (ac != 3 || !av[1][0] || !av[2][0] || !av[3][0]) {
		std::cout << "Invalid arguments ! - <filename> <string 1> <string 2>" << std::endl;
		return 1; }
	
	Replace	replace(av[1], av[2], av[3]);
	replace.launch();

	return 0; }