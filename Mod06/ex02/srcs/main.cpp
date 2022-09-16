/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:25:02 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/16 16:53:35 by ebarguil         ###   ########.fr       */
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
			std::cout << GREEN << "Random Generate: A" << RESET << std::endl;
			break;
		case 1:
			base = new B;
			std::cout << GREEN << "Random Generate: B" << RESET << std::endl;
			break;
		case 2:
			base = new C;
			std::cout << GREEN << "Random Generate: C" << RESET << std::endl;
			break; }

	return (base); }

void	identify(Base &p) {
	try {
		(void)dynamic_cast<A &>(p);
		std::cout << GREEN << "Identified class: A" << RESET << std::endl; }
	catch (std::exception const &e) {}
	try {
		(void)dynamic_cast<B &>(p);
		std::cout << GREEN << "Identified class: B" << RESET << std::endl; }
	catch (std::exception const &e) {}
	try {
		(void)dynamic_cast<C &>(p);
		std::cout << GREEN << "Identified class: C" << RESET << std::endl; }
	catch (std::exception const &e) {}
	return; }

void	identify(Base *p) {
	identify(*p);
	return; }

int	main() {
	std::cout << std::endl;
	Base *ptr = generate();

	if (!ptr) {
		std::cout << RED << "An error occured while generating a random Class.." << RESET << std::endl << std::endl;
		return 1; }
	
	std::cout << std::endl;
	std::cout << GREEN << "identify(ptr) via pointer" << RESET << std::endl;
	identify(ptr);
	std::cout << YELLOW << "< ==--== >" << RESET << std::endl;
	std::cout << GREEN << "identify(*ptr) via reference" << RESET << std::endl;
	identify(*ptr);
	std::cout << std::endl;

	return 0; }