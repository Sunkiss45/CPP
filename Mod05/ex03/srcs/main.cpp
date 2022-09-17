/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:54:30 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/17 21:37:38 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main() {

	std::cout << std::endl << SGREEN << BGREEN << "Tests for Intern with all Form :" << RESET << std::endl << std::endl;
	try {
		std::cout << BGREEN << "Creation of a Intern [rdm] (default) :" << RESET << std::endl; 
		Intern	rdm;
		std::cout << GREEN << "\t" "void.." << RESET << std::endl;

		std::cout << std::endl;

		std::cout << BGREEN << "Creation of a Bureaucrat [boss, coffeemaker] (param) :" << RESET << std::endl; 
		Bureaucrat	boss("Boss", 1);
		Bureaucrat	coffeemaker("CoffeeMaker", 150);
		std::cout << GREEN << "\t" << boss << RESET << std::endl;
		std::cout << GREEN << "\t" << coffeemaker << std::endl;

		std::cout << std::endl;

		std::cout << BGREEN << "Creation of a Form [shr, rob, pre] fct rdm.makeFrom() :" << RESET << std::endl; 
		std::cout << "\t";
		Form	*shr = rdm.makeForm("shrubbery creation", "Cute Tree");
		std::cout << "\t";
		Form	*rob = rdm.makeForm("robotomy request", "Little Noise");
		std::cout << "\t";
		Form	*pre = rdm.makeForm("president pardon", "Horrible Criminal");
		std::cout << GREEN << "\t-" << std::endl;
		std::cout << GREEN << "\t" << *shr << RESET << std::endl;
		std::cout << GREEN << "\t" << *rob << std::endl;
		std::cout << GREEN << "\t" << *pre << std::endl;
		std::cout << std::endl;

		std::cout << SGREEN << BGREEN << "Bench of test for ShrubberyCreation :" << RESET << std::endl << std::endl;
		coffeemaker.executeForm(*shr);
		coffeemaker.signForm(*shr);
		boss.executeForm(*shr);
		boss.signForm(*shr);
		coffeemaker.executeForm(*shr);
		boss.executeForm(*shr);
		std::cout << std::endl;

		std::cout << SGREEN << BGREEN << "Bench of test for RobotomyRequest :" << RESET << std::endl << std::endl;
		coffeemaker.executeForm(*rob);
		coffeemaker.signForm(*rob);
		boss.executeForm(*rob);
		boss.signForm(*rob);
		coffeemaker.executeForm(*rob);
		boss.executeForm(*rob); boss.executeForm(*rob); boss.executeForm(*rob); boss.executeForm(*rob);
		std::cout << std::endl;

		std::cout << SGREEN << BGREEN << "Bench of test for PresidentialPardon :" << RESET << std::endl << std::endl;
		coffeemaker.executeForm(*pre);
		coffeemaker.signForm(*pre);
		boss.executeForm(*pre);
		boss.signForm(*pre);
		coffeemaker.executeForm(*pre);
		boss.executeForm(*pre);
		std::cout << std::endl;
		
		delete shr;
		delete rob;
		delete pre; }
	catch (std::exception &e) {
		std::cout << BRED << e.what() << RESET << std::endl; }

	return 0; }