/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:25:02 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/18 14:43:56 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base * generate(void) {
	srand(time(NULL));
	int rdm = rand() % 3;
	Base *base = NULL;

	switch (rdm) {
		case 0:
			base = new A;
			std::cout << "Random Generate: A" << std::endl;
			break;
		case 1:
			base = new B;
			std::cout << "Random Generate: B" << std::endl;
			break;
		case 2:
			base = new C;
			std::cout << "Random Generate: C" << std::endl;
			break; }

	return (base); }

void	identify(Base &p) {
	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "Identified class: A" << std::endl; }
	catch (std::exception const &e) {}
	try {
		(void)dynamic_cast<B &>(p);
		std::cout << "Identified class: B" << std::endl; }
	catch (std::exception const &e) {}
	try {
		(void)dynamic_cast<C &>(p);
		std::cout << "Identified class: C" << std::endl; }
	catch (std::exception const &e) {}
	return; }

void	identify(Base *p) {
	identify(*p);
	return; }

int	main() {
	std::cout << std::endl << SGREEN << BGREEN << "Test Random choose class :" << RESET << std::endl << std::endl;
	
	std::cout << BYELLOW;
	Base *ptr = generate();

	if (!ptr) {
		std::cout << BRED << "An error occured while generating a random Class.." << RESET << std::endl << std::endl;
		return 1; }
	
	std::cout << std::endl;

	std::cout << BGREEN << "identify(ptr) via pointer : " << RESET << std::endl;
	std::cout << GREEN << "\t";
	identify(ptr);

	std::cout << std::endl;

	std::cout << BGREEN << "identify(*ptr) via reference : " << RESET << std::endl;
	std::cout << GREEN << "\t";
	identify(*ptr);
	std::cout << std::endl;

	return 0; }