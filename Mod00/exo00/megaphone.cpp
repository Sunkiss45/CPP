/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:36:15 by ebarguil          #+#    #+#             */
/*   Updated: 2022/12/16 02:16:01 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( int ac, char **av ) {

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < ac; i++) {
			std::string str(av[i]);
			for (size_t y = 0; y < str.length(); y++)
				std::cout << (char)toupper(str[y]);
		}
	std::cout << std::endl;
	return 0;
}
