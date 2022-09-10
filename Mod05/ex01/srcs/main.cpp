/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:54:30 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/10 20:05:42 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main() {

	{
		try {
			Form	random;
			std::cout << GREEN << random << RESET << std::endl; 
			
			std::cout << std::endl; 

			Form	randomc(random);
			std::cout << GREEN << randomc << RESET << std::endl; 
			
			std::cout << std::endl; 

			Form	article("493", 21, 84);
			std::cout << GREEN << article << RESET << std::endl; 

			std::cout << std::endl; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
	}

	std::cout << std::endl << std::endl;

	{
		try {
			Form	article("493", 0, 84);
			std::cout << PURPLE << article << RESET << std::endl; 

			std::cout << std::endl; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
	}

	std::cout << std::endl << std::endl;

	{
		try {
			Form	article("493", 151, 84);
			std::cout << PURPLE << article << RESET << std::endl; 

			std::cout << std::endl; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
	}

	std::cout << std::endl << std::endl;

	{
		try {
			Form	article("493", 21, 0);
			std::cout << PURPLE << article << RESET << std::endl; 

			std::cout << std::endl; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
	}

	std::cout << std::endl << std::endl;

	{
		try {
			Form	article("493", 21, 151);
			std::cout << PURPLE << article << RESET << std::endl; 

			std::cout << std::endl; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
	}



	// {
	// 	try {
	// 		Bureaucrat	nobody;
	// 		Form	random;

	// 		std::cout << GREEN << nobody << RESET << std::endl; 
	// 		std::cout << GREEN << random << RESET << std::endl;
	// 		nobody.signForm(random);
	// 		std::cout << GREEN << random << RESET << std::endl; }
	// 	catch (std::exception &e) {
	// 		std::cout << RED << e.what() << RESET << std::endl; }
	// }

	// std::cout << std::endl << std::endl;

	// {
	// 	try {
	// 		Bureaucrat	someone("Someone", 50);
	// 		Form	real("Real", 50, 150);

	// 		std::cout << GREEN << someone << RESET << std::endl; 
	// 		std::cout << GREEN << real << RESET << std::endl;
	// 		someone.signForm(real);
	// 		std::cout << GREEN << real << RESET << std::endl; }
	// 	catch (std::exception &e) {
	// 		std::cout << RED << e.what() << RESET << std::endl; }
	// }



	// {
	// 	try {
	// 		Bureaucrat	someone("Someone", 60);
	// 		Form	real("Real", 50, 150);

	// 		std::cout << GREEN << someone << RESET << std::endl; 
	// 		std::cout << GREEN << real << RESET << std::endl;
	// 		someone.signForm(real);
	// 		std::cout << GREEN << real << RESET << std::endl; }
	// 	catch (std::exception &e) {
	// 		std::cout << RED << e.what() << RESET << std::endl; }
	// }

	// std::cout << std::endl << std::endl;

	// {
	// 	try {
	// 		Bureaucrat	boss("Boss", 1);
	// 		Bureaucrat	manager("Manager", 2);
	// 		Bureaucrat	someone("Someone", 60);
	// 		Form	real("Real", 50, 150);

	// 		std::cout << GREEN << boss << RESET << std::endl;
	// 		std::cout << GREEN << manager << RESET << std::endl; 
	// 		std::cout << GREEN << someone << RESET << std::endl; 
	// 		std::cout << GREEN << real << RESET << std::endl;
	// 		someone.signForm(real);
	// 		std::cout << GREEN << real << RESET << std::endl;
	// 		boss.signForm(real);
	// 		std::cout << GREEN << real << RESET << std::endl;
	// 		someone.signForm(real);
	// 		std::cout << GREEN << real << RESET << std::endl;
	// 		manager.signForm(real);
	// 		std::cout << GREEN << real << RESET << std::endl; }
	// 	catch (std::exception &e) {
	// 		std::cout << RED << e.what() << RESET << std::endl; }
	// }

	// std::cout << std::endl << std::endl;

	// {
	// 	try {
	// 		Bureaucrat	boss("Boss", 1);
	// 		Bureaucrat	manager("Manager", 2);
	// 		Form	real("Real", 1, 150);

	// 		std::cout << GREEN << boss << RESET << std::endl;
	// 		std::cout << GREEN << manager << RESET << std::endl; 
	// 		std::cout << GREEN << real << RESET << std::endl;
	// 		manager.signForm(real);
	// 		std::cout << GREEN << real << RESET << std::endl;
	// 		manager.upGrade();
	// 		std::cout << GREEN << manager << RESET << std::endl; 
	// 		manager.signForm(real);
	// 		std::cout << GREEN << real << RESET << std::endl;
	// 		boss.signForm(real);
	// 		std::cout << GREEN << real << RESET << std::endl; }
	// 	catch (std::exception &e) {
	// 		std::cout << RED << e.what() << RESET << std::endl; }
	// }

	return 0; }