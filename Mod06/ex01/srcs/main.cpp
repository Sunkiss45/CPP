/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:00:13 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/16 15:06:15 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main() {
	std::cout << RED << "//-----------   test combiné   -----------//" << RESET << std::endl;
	{
		Data	*ptr;

		ptr = new Data;
		ptr->c = 'a';
		ptr->x = 25;

		std::cout << std::endl << GREEN << "adresse du pointeur sur Data avant serial/deserial : "<< RESET << ptr << std::endl;
		std::cout << ptr->c << std::endl;
		std::cout << ptr->x << std::endl;

		std::cout << YELLOW << "on serialize ptr, et deserialize dans la foulée" << RESET << std::endl;
		deserialize(serialize(ptr));

		std::cout << std::endl << GREEN << "adresse du pointeur sur Data apres serial/deserial : "<< RESET << ptr << std::endl;
		std::cout << ptr->c << std::endl;
		std::cout << ptr->x << std::endl;

		delete ptr;		
	}
	std::cout << RED << "//-----------   test successif   -----------//" << RESET << std::endl;
	{
		Data	*ptr;
		Data	*newptr;

		ptr = new Data;
		ptr->c = 'c';
		ptr->x = 42;

		uintptr_t	test = serialize(ptr);
		newptr = deserialize(test);

		std::cout << GREEN << "adresse du pointeur sur Data avant serial : " << ptr << RESET << std::endl;
		std::cout << ptr->c << std::endl;
		std::cout << ptr->x << std::endl << std::endl;

		std::cout << YELLOW << "on serialize" << RESET << std::endl;
		std::cout << "comparaison ptr / ptr serializé : " << ptr << " | " << test << RESET << std::endl;
		std::cout << ptr->c << std::endl;
		std::cout << ptr->x << std::endl;

		std::cout << YELLOW << "on deserialize" << RESET << std::endl;
		std::cout << "comparaison ptr / ptr déserializé : " << ptr << " | " << newptr << RESET << std::endl;
		std::cout << ptr->c << std::endl;
		std::cout << ptr->x << std::endl;
		std::cout << newptr->c << std::endl;
		std::cout << newptr->x << std::endl;

		delete ptr;		
	}
	return (0); }