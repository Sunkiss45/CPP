/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:51:58 by ebarguil          #+#    #+#             */
/*   Updated: 2023/07/01 15:11:30 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include "ft_color.hpp"

int	main(int ac, char **av) {

	if (ac != 2) {
		std::cout << BRED << "Error in use ! ./RPN <input calculation>" << RESET << std::endl; 
		return (1); }

	ReversePolish ReversePolish(av[1]);

	try {
	ReversePolish.parsingInput();
	}
	catch(const std::exception& e) {
		std::cerr << BRED << e.what() << RESET << std::endl;
		return (1); }

	std::cout << BGREEN << ReversePolish.GetNum() << RESET << std::endl;

	return (0);
}