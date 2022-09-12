/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:54:30 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/13 01:18:15 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main() {

	{
		try {
			ShrubberyCreationForm	*shr = new ShrubberyCreationForm();
			ShrubberyCreationForm	shr_c(*shr);
			ShrubberyCreationForm	shr_s("Antoine", 150, 150, "Daniel");
			ShrubberyCreationForm	shr_sc(shr_s);

			std::cout << std::endl;

			std::cout << GREEN << *shr << RESET << std::endl;
			std::cout << GREEN << shr_c << RESET << std::endl;
			std::cout << GREEN << shr_s << RESET << std::endl;
			std::cout << GREEN << shr_sc << RESET << std::endl;
			std::cout << std::endl;

			
			delete shr; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }

		std::cout << std::endl;

		try {
			Bureaucrat	random;
			ShrubberyCreationForm	*shr = new ShrubberyCreationForm("Random", 150, 150, "None");

			std::cout << std::endl;

			std::cout << GREEN << random << RESET << std::endl;
			std::cout << GREEN << *shr << RESET << std::endl;
			std::cout << std::endl;

			random.executeForm(*shr);
			random.signForm(*shr);
			random.executeForm(*shr);
			std::cout << std::endl;

			delete shr; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }

		std::cout << std::endl;

		try {
			Bureaucrat	random;
			ShrubberyCreationForm	*shr = new ShrubberyCreationForm("Random", 1, 150, "None");

			std::cout << std::endl;

			std::cout << GREEN << random << RESET << std::endl;
			std::cout << GREEN << *shr << RESET << std::endl;
			std::cout << std::endl;

			random.executeForm(*shr);
			random.signForm(*shr);
			random.executeForm(*shr);
			std::cout << std::endl;

			delete shr; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }

		std::cout << std::endl;

		try {
			Bureaucrat	random;
			ShrubberyCreationForm	*shr = new ShrubberyCreationForm("Random", 150, 1, "None");

			std::cout << std::endl;

			std::cout << GREEN << random << RESET << std::endl;
			std::cout << GREEN << *shr << RESET << std::endl;
			std::cout << std::endl;

			random.executeForm(*shr);
			random.signForm(*shr);
			random.executeForm(*shr);
			std::cout << std::endl;

			delete shr; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }

		std::cout << std::endl;

		try {
			Bureaucrat	random;
			ShrubberyCreationForm	*shr = new ShrubberyCreationForm("Random", 1, 1, "None");

			std::cout << std::endl;

			std::cout << GREEN << random << RESET << std::endl;
			std::cout << GREEN << *shr << RESET << std::endl;
			std::cout << std::endl;

			random.executeForm(*shr);
			random.signForm(*shr);
			random.executeForm(*shr);
			std::cout << std::endl;

			delete shr; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
	}

	// std::cout << std::endl << std::endl;

	// {
	// 	try {
	// 		RobotomyRequestForm	*rob = new RobotomyRequestForm();
	// 		RobotomyRequestForm	rob_c(*rob);
	// 		RobotomyRequestForm	rob_s("Antoine", 150, 150, "Daniel");
	// 		RobotomyRequestForm	rob_sc(rob_s);

	// 		std::cout << std::endl;

	// 		std::cout << GREEN << *rob << RESET << std::endl;
	// 		std::cout << GREEN << rob_c << RESET << std::endl;
	// 		std::cout << GREEN << rob_s << RESET << std::endl;
	// 		std::cout << GREEN << rob_sc << RESET << std::endl;
	// 		std::cout << std::endl;

			
	// 		delete rob; }
	// 	catch (std::exception &e) {
	// 		std::cout << RED << e.what() << RESET << std::endl; }

	// 	std::cout << std::endl;

	// 	try {
	// 		Bureaucrat	random;
	// 		RobotomyRequestForm	*rob = new RobotomyRequestForm("Random", 150, 150, "None");

	// 		std::cout << std::endl;

	// 		std::cout << GREEN << random << RESET << std::endl;
	// 		std::cout << GREEN << *rob << RESET << std::endl;
	// 		std::cout << std::endl;

	// 		random.executeForm(*rob);
	// 		random.signForm(*rob);
	// 		random.executeForm(*rob);
	// 		random.executeForm(*rob);
	// 		random.executeForm(*rob);
	// 		random.executeForm(*rob);
	// 		std::cout << std::endl;

	// 		delete rob; }
	// 	catch (std::exception &e) {
	// 		std::cout << RED << e.what() << RESET << std::endl; }

	// 	std::cout << std::endl;

	// 	try {
	// 		Bureaucrat	random;
	// 		RobotomyRequestForm	*rob = new RobotomyRequestForm("Random", 1, 150, "None");

	// 		std::cout << std::endl;

	// 		std::cout << GREEN << random << RESET << std::endl;
	// 		std::cout << GREEN << *rob << RESET << std::endl;
	// 		std::cout << std::endl;

	// 		random.executeForm(*rob);
	// 		random.signForm(*rob);
	// 		random.executeForm(*rob);
	// 		std::cout << std::endl;

	// 		delete rob; }
	// 	catch (std::exception &e) {
	// 		std::cout << RED << e.what() << RESET << std::endl; }

	// 	std::cout << std::endl;

	// 	try {
	// 		Bureaucrat	random;
	// 		RobotomyRequestForm	*rob = new RobotomyRequestForm("Random", 150, 1, "None");

	// 		std::cout << std::endl;

	// 		std::cout << GREEN << random << RESET << std::endl;
	// 		std::cout << GREEN << *rob << RESET << std::endl;
	// 		std::cout << std::endl;

	// 		random.executeForm(*rob);
	// 		random.signForm(*rob);
	// 		random.executeForm(*rob);
	// 		std::cout << std::endl;

	// 		delete rob; }
	// 	catch (std::exception &e) {
	// 		std::cout << RED << e.what() << RESET << std::endl; }

	// 	std::cout << std::endl;

	// 	try {
	// 		Bureaucrat	random;
	// 		RobotomyRequestForm	*rob = new RobotomyRequestForm("Random", 1, 1, "None");

	// 		std::cout << std::endl;

	// 		std::cout << GREEN << random << RESET << std::endl;
	// 		std::cout << GREEN << *rob << RESET << std::endl;
	// 		std::cout << std::endl;

	// 		random.executeForm(*rob);
	// 		random.signForm(*rob);
	// 		random.executeForm(*rob);
	// 		std::cout << std::endl;

	// 		delete rob; }
	// 	catch (std::exception &e) {
	// 		std::cout << RED << e.what() << RESET << std::endl; }
	// }

	// std::cout << std::endl << std::endl;

	// {
	// 	try {
	// 		PresidentialPardonForm	*pre = new PresidentialPardonForm();
	// 		PresidentialPardonForm	pre_c(*pre);
	// 		PresidentialPardonForm	pre_s("Antoine", 150, 150, "Daniel");
	// 		PresidentialPardonForm	pre_sc(pre_s);

	// 		std::cout << std::endl;

	// 		std::cout << GREEN << *pre << RESET << std::endl;
	// 		std::cout << GREEN << pre_c << RESET << std::endl;
	// 		std::cout << GREEN << pre_s << RESET << std::endl;
	// 		std::cout << GREEN << pre_sc << RESET << std::endl;
	// 		std::cout << std::endl;

			
	// 		delete pre; }
	// 	catch (std::exception &e) {
	// 		std::cout << RED << e.what() << RESET << std::endl; }

	// 	std::cout << std::endl;

	// 	try {
	// 		Bureaucrat	random;
	// 		PresidentialPardonForm	*pre = new PresidentialPardonForm("Random", 150, 150, "None");

	// 		std::cout << std::endl;

	// 		std::cout << GREEN << random << RESET << std::endl;
	// 		std::cout << GREEN << *pre << RESET << std::endl;
	// 		std::cout << std::endl;

	// 		random.executeForm(*pre);
	// 		random.signForm(*pre);
	// 		random.executeForm(*pre);
	// 		std::cout << std::endl;

	// 		delete pre; }
	// 	catch (std::exception &e) {
	// 		std::cout << RED << e.what() << RESET << std::endl; }

	// 	std::cout << std::endl;

	// 	try {
	// 		Bureaucrat	random;
	// 		PresidentialPardonForm	*pre = new PresidentialPardonForm("Random", 1, 150, "None");

	// 		std::cout << std::endl;

	// 		std::cout << GREEN << random << RESET << std::endl;
	// 		std::cout << GREEN << *pre << RESET << std::endl;
	// 		std::cout << std::endl;

	// 		random.executeForm(*pre);
	// 		random.signForm(*pre);
	// 		random.executeForm(*pre);
	// 		std::cout << std::endl;

	// 		delete pre; }
	// 	catch (std::exception &e) {
	// 		std::cout << RED << e.what() << RESET << std::endl; }

	// 	std::cout << std::endl;

	// 	try {
	// 		Bureaucrat	random;
	// 		PresidentialPardonForm	*pre = new PresidentialPardonForm("Random", 150, 1, "None");

	// 		std::cout << std::endl;

	// 		std::cout << GREEN << random << RESET << std::endl;
	// 		std::cout << GREEN << *pre << RESET << std::endl;
	// 		std::cout << std::endl;

	// 		random.executeForm(*pre);
	// 		random.signForm(*pre);
	// 		random.executeForm(*pre);
	// 		std::cout << std::endl;

	// 		delete pre; }
	// 	catch (std::exception &e) {
	// 		std::cout << RED << e.what() << RESET << std::endl; }

	// 	std::cout << std::endl;

	// 	try {
	// 		Bureaucrat	random;
	// 		PresidentialPardonForm	*pre = new PresidentialPardonForm("Random", 1, 1, "None");

	// 		std::cout << std::endl;

	// 		std::cout << GREEN << random << RESET << std::endl;
	// 		std::cout << GREEN << *pre << RESET << std::endl;
	// 		std::cout << std::endl;

	// 		random.executeForm(*pre);
	// 		random.signForm(*pre);
	// 		random.executeForm(*pre);
	// 		std::cout << std::endl;

	// 		delete pre; }
	// 	catch (std::exception &e) {
	// 		std::cout << RED << e.what() << RESET << std::endl; }
	// }

	return 0; }