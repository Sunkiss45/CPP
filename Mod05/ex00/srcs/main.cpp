/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:54:30 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/17 20:53:25 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main() {

	std::cout << std::endl << SGREEN << BGREEN << "Tests of default / copy / param constructor of Bureaucrat :" << RESET << std::endl << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of a Bureaucrat [nobody] (default) :" << RESET << std::endl; 
			Bureaucrat	nobody;
			std::cout << GREEN << "\t" << nobody << RESET << std::endl; 
			
			std::cout << std::endl; 

			std::cout << BGREEN << "Creation of a Bureaucrat [nobodyc] (copy of [nobody]) :" << RESET << std::endl; 
			Bureaucrat	nobodyc(nobody);
			std::cout << GREEN << "\t" << nobodyc << RESET << std::endl; 
			
			std::cout << std::endl; 

			std::cout << BGREEN << "Creation of a Bureaucrat [richard] (param) :" << RESET << std::endl;
			Bureaucrat	richard("Richard", 21);
			std::cout << GREEN << "\t" << richard << RESET << std::endl;

			std::cout << std::endl; 

			std::cout << BGREEN << "Creation of a Bureaucrat [richardc] (copy of [richard]) :" << RESET << std::endl; 
			Bureaucrat	richardc(richard);
			std::cout << GREEN << "\t" << richardc << RESET << std::endl; }
		catch (std::exception &e) {
			std::cout << BRED << e.what() << RESET << std::endl; }
		std::cout << std::endl;
	}

	std::cout << std::endl;

	std::cout << SGREEN << BGREEN << "Tests of Bureaucrat upGrade() / downGrade() :" << RESET << std::endl << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of a Bureaucrat [nobody] (default) & fct upGrade / downGrade :" << RESET << std::endl;
			Bureaucrat	nobody;
			std::cout << BGREEN << "\tBasic : " << GREEN << nobody << RESET << std::endl;
			nobody.upGrade(); nobody.upGrade();
			std::cout << BBLUE << "\tupGrade() x 2 : " << BLUE << nobody << RESET << std::endl;
			nobody.downGrade(); nobody.downGrade(); nobody.downGrade(); nobody.downGrade();
			std::cout << BBLUE << "\tdownGrade() x 4 : " << BLUE << nobody << RESET << std::endl;
			
			std::cout << std::endl; 

			std::cout << BGREEN << "Creation of a Bureaucrat [nobodyc] (copy of [nobody]) & fct upGrade / downGrade :" << RESET << std::endl;
			Bureaucrat	nobodyc(nobody);
			std::cout << BGREEN << "\tBasic : " << GREEN << nobodyc << RESET << std::endl;
			nobodyc.upGrade(); nobodyc.upGrade();
			std::cout << BBLUE << "\tupGrade() x 2 : " << BLUE << nobodyc << RESET << std::endl;
			nobodyc.downGrade(); nobodyc.downGrade(); nobodyc.downGrade(); nobodyc.downGrade();
			std::cout << BBLUE << "\tdownGrade() x 4 : " << BLUE << nobodyc << RESET << std::endl;
			std::cout << YELLOW << "Verification of [nobody] : " << nobody << RESET << std::endl;
			
			std::cout << std::endl; 

			std::cout << BGREEN << "Creation of a Bureaucrat [richard] (param) & fct upGrade / downGrade :" << RESET << std::endl;
			Bureaucrat	richard("Richard", 84);
			std::cout << BGREEN << "\tBasic : " << GREEN << richard << RESET << std::endl;
			richard.upGrade(); richard.upGrade();
			std::cout << BBLUE << "\tupGrade() x 2 : " << BLUE << richard << RESET << std::endl;
			richard.downGrade(); richard.downGrade(); richard.downGrade(); richard.downGrade();
			std::cout << BBLUE << "\tdownGrade() x 4 : " << BLUE << richard << RESET << std::endl; }
		catch (std::exception &e) {
			std::cout << BRED << e.what() << RESET << std::endl; }
		std::cout << std::endl;
	}

	std::cout << std::endl;

	std::cout << SGREEN << BGREEN << "Tests of Bureaucrat ERROR Too low / high :" << RESET << std::endl << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of a Bureaucrat [richard] (param) & donate too low rank (151) :" << RESET << std::endl;
			Bureaucrat	richard("Richard", 151);
			std::cout << PURPLE << richard << RESET << std::endl;}
		catch (std::exception &e) {
			std::cout << BRED << e.what() << RESET << std::endl; }
	}
	std::cout << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of a Bureaucrat [richard] (param) & donate too high rank (0) :" << RESET << std::endl;
			Bureaucrat	richard("Richard", 0);
			std::cout << PURPLE << richard << RESET << std::endl;}
		catch (std::exception &e) {
			std::cout << BRED << e.what() << RESET << std::endl; }
	}
	std::cout << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of a Bureaucrat [richard] (param) & downGrade() too low grade (150) :" << RESET << std::endl;
			Bureaucrat	richard("Richard", 150);
			std::cout << BGREEN << "\tBasic : " << GREEN << richard << RESET << std::endl;
			richard.downGrade();
			std::cout << PURPLE << richard << RESET << std::endl; }
		catch (std::exception &e) {
			std::cout << BRED << e.what() << RESET << std::endl; }
	}
	std::cout << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of a Bureaucrat [richard] (param) & upGrade() too low grade (1) :" << RESET << std::endl;
			Bureaucrat	richard("Richard", 1);
			std::cout << BGREEN << "\tBasic : " << GREEN << richard << RESET << std::endl;
			richard.upGrade();
			std::cout << PURPLE << richard << RESET << std::endl; }
		catch (std::exception &e) {
			std::cout << BRED << e.what() << RESET << std::endl; }
	}

	std::cout << std::endl << std::endl;

	std::cout << SGREEN << BGREEN << "Tests of ERROR Too low / high in loop :" << RESET << std::endl << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of a Bureaucrat [nobody] (default) :" << RESET << std::endl;
			Bureaucrat	nobody;
			std::cout << GREEN << "\t" << nobody << "\t" << RESET << std::endl;
			std::cout << BGREEN << "Loop downGrade() [nobody] to ERROR too low :" << RESET << std::endl << "\t" << BLUE;
			while (1) {
				nobody.downGrade();
				std::cout << nobody.getGrade();
				if (nobody.getGrade() % 10 == 0 && nobody.getGrade() != 150) {
					std::cout << std::endl << "\t"; }
				else if (nobody.getGrade() != 150) {
					std::cout << " , "; } } }
		catch (std::exception &e) {
			std::cout << std::endl;
			std::cout << BRED << e.what() << RESET << std::endl; }
		std::cout << std::endl;
	}

	{
		try {
			std::cout << BGREEN << "Creation of a Bureaucrat [nobody] (default) :" << RESET << std::endl;
			Bureaucrat	nobody;
			std::cout << GREEN << "\t" << nobody << "\t" << RESET << std::endl;
			std::cout << BGREEN << "Loop upGrade() [nobody] to ERROR too high :" << RESET << std::endl << "\t" << BLUE;
			while (1) {
				nobody.upGrade();
				std::cout << nobody.getGrade();
				if (nobody.getGrade() % 10 == 0 && nobody.getGrade() != 1) {
					std::cout << std::endl << "\t"; }
				else if (nobody.getGrade() != 1) {
					std::cout << " , "; } } }
		catch (std::exception &e) {
			std::cout << std::endl;
			std::cout << BRED << e.what() << RESET << std::endl; }
	}

	std::cout << std::endl;
	return 0; }