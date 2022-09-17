/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:54:30 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/17 12:43:38 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main() {

	std::cout << std::endl << SGREEN << BGREEN << "Tests of default / copy / param constructor of Form :" << RESET << std::endl << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of a Form [random] (default) :" << RESET << std::endl; 
			Form	random;
			std::cout << GREEN << "\t" << random << RESET << std::endl; 
			
			std::cout << std::endl; 

			std::cout << BGREEN << "Creation of a Form [randomc] (copy of [random]) :" << RESET << std::endl; 
			Form	randomc(random);
			std::cout << GREEN << "\t" << randomc << RESET << std::endl; 
			
			std::cout << std::endl; 

			std::cout << BGREEN << "Creation of a Form [article] (param) :" << RESET << std::endl; 
			Form	article("49-3", 21, 84);
			std::cout << GREEN << "\t" << article << RESET << std::endl; }
		catch (std::exception &e) {
			std::cout << BRED << e.what() << RESET << std::endl; }
		std::cout << std::endl;
	}

	std::cout << std::endl;

	std::cout << SGREEN << BGREEN << "Tests of Form ERROR Too low / too high :" << RESET << std::endl << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of a Form [article] (param) & donate too high sign request (0) :" << RESET << std::endl;
			Form	article("49-3", 0, 84);
			std::cout << PURPLE << article << RESET << std::endl; }
		catch (std::exception &e) {
			std::cout << BRED << e.what() << RESET << std::endl; }
	}
	std::cout << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of a Form [article] (param) & donate too low sign request (151) :" << RESET << std::endl;
			Form	article("49-3", 151, 84);
			std::cout << PURPLE << article << RESET << std::endl; }
		catch (std::exception &e) {
			std::cout << BRED << e.what() << RESET << std::endl; }
	}
	std::cout << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of a Form [article] (param) & donate too high execute request (0) :" << RESET << std::endl;
			Form	article("49-3", 21, 0);
			std::cout << PURPLE << article << RESET << std::endl; }
		catch (std::exception &e) {
			std::cout << BRED << e.what() << RESET << std::endl; }
	}
	std::cout << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of a Form [article] (param) & donate too low execute request (151) :" << RESET << std::endl;
			Form	article("49-3", 21, 151);
			std::cout << PURPLE << article << RESET << std::endl; }
		catch (std::exception &e) {
			std::cout << BRED << e.what() << RESET << std::endl; }
	}

	std::cout << std::endl << std::endl;

	std::cout << SGREEN << BGREEN << "Tests of Form signForm() with default :" << RESET << std::endl << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of a Bureaucrat [nobody] (default) :" << RESET << std::endl; 
			Bureaucrat	nobody;
			std::cout << GREEN << "\t" << nobody << RESET << std::endl; 
			std::cout << std::endl;
			std::cout << BGREEN << "Creation of a Form [random] (default) :" << RESET << std::endl; 
			Form	random;
			std::cout << GREEN << "\t" << random << RESET << std::endl;
			std::cout << std::endl;
			std::cout << BGREEN << "Sign of [random] by [nobody] :" << RESET << std::endl;
			std::cout << "\t"; 
			nobody.signForm(random);
			std::cout << YELLOW << "Verification of [random] : " << random << RESET << std::endl; }
		catch (std::exception &e) {
			std::cout << BRED << e.what() << RESET << std::endl; }
		std::cout << std::endl;
	}

	std::cout << SGREEN << BGREEN << "Tests of Form signForm() with param :" << RESET << std::endl << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of a Bureaucrat [someone] (param) :" << RESET << std::endl; 
			Bureaucrat	someone("Someone", 50);
			std::cout << GREEN << "\t" << someone << RESET << std::endl; 
			std::cout << std::endl;
			std::cout << BGREEN << "Creation of a Form [real] (param) :" << RESET << std::endl; 
			Form	real("Real", 50, 150);
			std::cout << GREEN << "\t" << real << RESET << std::endl;
			std::cout << std::endl;
			std::cout << BGREEN << "Sign of [real] by [someone] :" << RESET << std::endl;
			std::cout << "\t"; 
			someone.signForm(real);
			std::cout << YELLOW << "Verification of [real] : " << real << RESET << std::endl; }
		catch (std::exception &e) {
			std::cout << BRED << e.what() << RESET << std::endl; }
		std::cout << std::endl;
	}

	std::cout << SGREEN << BGREEN << "Tests of Form signForm() with param & Grade too low :" << RESET << std::endl << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of a Bureaucrat [someone] (param) :" << RESET << std::endl; 
			Bureaucrat	someone("Someone", 60);
			std::cout << GREEN << "\t" << someone << RESET << std::endl; 
			std::cout << std::endl;
			std::cout << BGREEN << "Creation of a Form [real] (param) :" << RESET << std::endl; 
			Form	real("Real", 50, 150);
			std::cout << GREEN << "\t" << real << RESET << std::endl;
			std::cout << std::endl;
			std::cout << BGREEN << "Sign of [real] by [someone] :" << RESET << std::endl;
			std::cout << "\t"; 
			someone.signForm(real);
			std::cout << YELLOW << "Verification of [real] : " << real << RESET << std::endl; }
		catch (std::exception &e) {
			std::cout << BRED << e.what() << RESET << std::endl; }
		std::cout << std::endl;
	}
	
	std::cout << std::endl;

	std::cout << SGREEN << BGREEN << "Tests Divers :" << RESET << std::endl << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of 3 Bureaucrat [boss, manager, someone] (param) :" << RESET << std::endl; 
			Bureaucrat	boss("Boss", 1);
			std::cout << GREEN << "\t" << boss << RESET << std::endl; 
			Bureaucrat	manager("Manager", 2);
			std::cout << GREEN << "\t" << manager << RESET << std::endl; 
			Bureaucrat	someone("Someone", 60);
			std::cout << GREEN << "\t" << someone << RESET << std::endl; 
			
			std::cout << std::endl;
			
			std::cout << BGREEN << "Creation of a Form [real] (param) :" << RESET << std::endl; 
			Form	real("Real", 50, 150);
			std::cout << GREEN << "\t" << real << RESET << std::endl;

			std::cout << GREEN << real << RESET << std::endl;
			someone.signForm(real);
			std::cout << GREEN << real << RESET << std::endl;
			boss.signForm(real);
			std::cout << GREEN << real << RESET << std::endl;
			someone.signForm(real);
			std::cout << GREEN << real << RESET << std::endl;
			manager.signForm(real);
			std::cout << GREEN << real << RESET << std::endl; }
		catch (std::exception &e) {
			std::cout << BRED << e.what() << RESET << std::endl; }
	}

	std::cout << std::endl << std::endl;

	{
		try {
			Bureaucrat	boss("Boss", 1);
			Bureaucrat	manager("Manager", 2);
			Form	real("Real", 1, 150);

			std::cout << GREEN << boss << RESET << std::endl;
			std::cout << GREEN << manager << RESET << std::endl; 
			std::cout << GREEN << real << RESET << std::endl;
			manager.signForm(real);
			std::cout << GREEN << real << RESET << std::endl;
			manager.upGrade();
			std::cout << GREEN << manager << RESET << std::endl; 
			manager.signForm(real);
			std::cout << GREEN << real << RESET << std::endl;
			boss.signForm(real);
			std::cout << GREEN << real << RESET << std::endl; }
		catch (std::exception &e) {
			std::cout << BRED << e.what() << RESET << std::endl; }
	}

	return 0; }