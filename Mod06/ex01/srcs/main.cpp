/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:00:13 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/18 14:26:53 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main() {

	std::cout << std::endl << SGREEN << BGREEN << "Test AllInOne :" << RESET << std::endl << std::endl;
	{
		srand(time(NULL));

		Data *ptr = new Data;
		ptr->c = 'A' + (rand() % 26);;
		ptr->i = rand() % 101;

		std::cout << BGREEN << "Contents of Data [ptr] :"<< RESET << std::endl;
		std::cout << GREEN << "\t" "address - " << CYAN << ptr << std::endl;
		std::cout << GREEN << "\t" "ptr->c - " << CYAN << ptr->c << std::endl;
		std::cout << GREEN << "\t" "ptr->i - " << CYAN << ptr->i << std::endl;

		std::cout << std::endl;

		std::cout << BYELLOW << "- Serialising [ptr] && Deserialising [ptr] instantly.." << RESET << std::endl;
		deserialize(serialize(ptr));

		std::cout << std::endl;

		std::cout << BGREEN << "Contents of Data [ptr] :"<< RESET << std::endl;
		std::cout << GREEN << "\t" "address - " << CYAN << ptr << std::endl;
		std::cout << GREEN << "\t" "ptr->c - " << CYAN << ptr->c << std::endl;
		std::cout << GREEN << "\t" "ptr->i - " << CYAN << ptr->i << std::endl;

		std::cout << std::endl;
		delete ptr;		
	}

	std::cout << std::endl << SGREEN << BGREEN << "Test Step by Step :" << RESET << std::endl << std::endl;
	{
		srand(time(NULL));

		Data *ptr = new Data;
		ptr->c = 'A' + (rand() % 26);;
		ptr->i = rand() % 101;

		std::cout << BGREEN << "Contents of Data [ptr] :" << RESET << std::endl;
		std::cout << GREEN << "\t" "address - " << CYAN << ptr << RESET << std::endl;
		std::cout << GREEN << "\t" "ptr->c - " << CYAN << ptr->c << RESET << std::endl;
		std::cout << GREEN << "\t" "ptr->i - " << CYAN << ptr->i << RESET << std::endl;

		std::cout << std::endl;

		std::cout << BYELLOW << "- Serialising [ptr] in uintptr_t [encode].." << RESET << std::endl;
		uintptr_t	encode = serialize(ptr);

		std::cout << std::endl;

		std::cout << BGREEN << "Contents of uintptr_t [encode] :"<< RESET << std::endl;
		std::cout << GREEN << "\t" "encode - " << CYAN << encode << std::endl;

		std::cout << std::endl;
		
		std::cout << BYELLOW << "- Derialising [encode] in Data [newptr].." << RESET << std::endl;
		Data *newptr = deserialize(encode);

		std::cout << std::endl;

		std::cout << BGREEN << "Contents of Data [newptr] :"<< RESET << std::endl;
		std::cout << GREEN << "\t" "address - " << CYAN << newptr << RESET << std::endl;
		std::cout << GREEN << "\t" "newptr->c - " << CYAN << newptr->c << RESET << std::endl;
		std::cout << GREEN << "\t" "newptr->i - " << CYAN << newptr->i << RESET << std::endl;

		std::cout << std::endl;
		std::cout << BYELLOW << "Compare to .." << std::endl;
		std::cout << std::endl;

		std::cout << BGREEN << "Contents of Data [ptr] x [newptr]:"<< RESET << std::endl;
		std::cout << GREEN << "\t" "address - " << CYAN << ptr << BLUE << " x " << CYAN << newptr << RESET << std::endl;
		std::cout << GREEN << "\t" "x->c - " << CYAN << ptr->c << BLUE << " x " << CYAN << newptr->c << RESET << std::endl;
		std::cout << GREEN << "\t" "x->i - " << CYAN << ptr->i << BLUE << " x " << CYAN << newptr->i << RESET << std::endl;

		std::cout << std::endl;
		delete ptr;		
	}
	return (0); }