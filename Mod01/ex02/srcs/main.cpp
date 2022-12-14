/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:50:15 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/02 14:36:28 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main() {
	std::string	str = "HI THIS IS BRAIN";
	std::string	*strptr = &str;
	std::string	&strref = str;
	std::cout << std::endl;

	std::cout << "Address of :" << std::endl;
	std::cout << "string - " << &str << std::endl;
	std::cout << "pointer - " << strptr << std::endl;
	std::cout << "reference - " << &strref << std::endl << std::endl;

	std::cout << "Contents of :" << std::endl;
	std::cout << "string - " << str << std::endl;
	std::cout << "pointer - " << *strptr << std::endl;
	std::cout << "reference - " << strref << std::endl;
	return 0; }