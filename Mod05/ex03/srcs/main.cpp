/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:54:30 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/15 16:28:06 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main() {

	{
		try {
			Intern	rdm;
			Bureaucrat	boss("Boss", 1);
			Bureaucrat	coffeemaker("CoffeeMaker", 150);

			std::cout << std::endl;

			std::cout << BLUE << boss << std::endl;
			std::cout << BLUE << coffeemaker << std::endl;
			std::cout << std::endl;

			Form	*shr = rdm.makeForm("shrubbery creation", "Cute Tree");
			Form	*rob = rdm.makeForm("robotomy request", "Little Noise");
			Form	*pre = rdm.makeForm("president pardon", "Cute Tree");
			std::cout << BLUE << *shr << RESET << std::endl;
			std::cout << BLUE << *rob << RESET << std::endl;
			std::cout << BLUE << *pre << RESET << std::endl;
			std::cout << std::endl;

			coffeemaker.executeForm(*shr);
			coffeemaker.signForm(*shr);
			boss.executeForm(*shr);
			boss.signForm(*shr);
			boss.executeForm(*shr);
			std::cout << std::endl;

			coffeemaker.executeForm(*rob);
			coffeemaker.signForm(*rob);
			boss.executeForm(*rob);
			boss.signForm(*rob);
			boss.executeForm(*rob);
			boss.executeForm(*rob);
			std::cout << std::endl;

			coffeemaker.executeForm(*pre);
			coffeemaker.signForm(*pre);
			boss.executeForm(*pre);
			boss.signForm(*pre);
			boss.executeForm(*pre);
			std::cout << std::endl;
			
			delete shr;
			delete rob;
			delete pre; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
	}

	return 0; }