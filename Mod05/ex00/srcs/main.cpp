/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:54:30 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/10 15:46:25 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#define RESET "\e[0m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PURPLE "\e[0;35m"
#define CYAN "\e[0;36m"

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
			std::cout << YELLOW << richard << RESET << std::endl;}
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
	}

	std::cout << std::endl << std::endl;	

	{
		try {
			Bureaucrat	richard("Richard", 0);
			std::cout << YELLOW << richard << RESET << std::endl;}
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
	}

	std::cout << std::endl << std::endl;

	{
		try {
			Bureaucrat	richard("Richard", 150);
			richard.downGrade();
			std::cout << YELLOW << richard << RESET << std::endl;

			std::cout << std::endl; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
	}

	std::cout << std::endl << std::endl;

	{
		try {
			Bureaucrat	richard("Richard", 1);
			richard.upGrade();
			std::cout << YELLOW << richard << RESET << std::endl;

			std::cout << std::endl; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
	}

	// std::cout << std::endl << std::endl;

	// {
	// 	try {
	// 		Bureaucrat	nobody;
	// 		while (1) {
	// 			nobody.downGrade();
	// 			std::cout << YELLOW << nobody << RESET << std::endl; }

	// 		std::cout << std::endl; }
	// 	catch (std::exception &e) {
	// 		std::cout << RED << e.what() << RESET << std::endl; }
	// }

	return 0; }