/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:54:30 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/10 19:44:20 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main() {

	{
		try {
			Bureaucrat	nobody;
			std::cout << GREEN << nobody << RESET << std::endl; 
			
			std::cout << std::endl; 

			Bureaucrat	nobodyc(nobody);
			std::cout << GREEN << nobodyc << RESET << std::endl; 
			
			std::cout << std::endl; 

			Bureaucrat	richard("Richard", 21);
			std::cout << GREEN << richard << RESET << std::endl; 

			std::cout << std::endl; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
	}

	std::cout << std::endl << std::endl;

	{
		try {
			Bureaucrat	nobody;
			std::cout << GREEN << nobody << RESET << std::endl;
			nobody.upGrade();
			std::cout << BLUE << nobody << RESET << std::endl;
			nobody.downGrade();
			std::cout << BLUE << nobody << RESET << std::endl;
			
			std::cout << std::endl; 

			Bureaucrat	nobodyc(nobody);
			std::cout << GREEN << nobodyc << RESET << std::endl; 
			nobodyc.upGrade();
			std::cout << BLUE << nobodyc << RESET << std::endl;
			nobodyc.downGrade();
			std::cout << BLUE << nobodyc << RESET << std::endl;
			
			std::cout << std::endl; 

			Bureaucrat	richard("Richard", 84);
			std::cout << GREEN  << richard << RESET << std::endl; 
			richard.upGrade();
			std::cout << BLUE  << richard << RESET << std::endl;
			richard.downGrade();
			std::cout << BLUE  << richard << RESET << std::endl;

			std::cout << std::endl; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
	}

	std::cout << std::endl << std::endl;	

	{
		try {
			Bureaucrat	richard("Richard", 151);
			std::cout << PURPLE << richard << RESET << std::endl;}
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
	}

	std::cout << std::endl << std::endl;	

	{
		try {
			Bureaucrat	richard("Richard", 0);
			std::cout << PURPLE << richard << RESET << std::endl;}
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
	}

	std::cout << std::endl << std::endl;

	{
		try {
			Bureaucrat	richard("Richard", 150);
			richard.downGrade();
			std::cout << PURPLE << richard << RESET << std::endl;

			std::cout << std::endl; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
	}

	std::cout << std::endl << std::endl;

	{
		try {
			Bureaucrat	richard("Richard", 1);
			richard.upGrade();
			std::cout << PURPLE << richard << RESET << std::endl;

			std::cout << std::endl; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
	}


	// std::cout << std::endl << std::endl;

	// {
	// 	try {
	// 		Bureaucrat	nobody;
	// 		std::cout << BLUE << nobody << RESET << std::endl;
	// 		while (1) {
	// 			nobody.downGrade();
	// 			std::cout << BLUE << nobody << RESET << std::endl; }

	// 		std::cout << std::endl; }
	// 	catch (std::exception &e) {
	// 		std::cout << RED << e.what() << RESET << std::endl; }
	// }

	return 0; }