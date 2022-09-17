/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:54:30 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/17 21:29:18 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main() {

	std::cout << SRED << BRED << "\t\t\t\t" "Tests for ShrubberyCreationForm" << RESET << std::endl << std::endl;
	std::cout << std::endl;

	std::cout << SGREEN << BGREEN << "Tests of default / copy / param constructor of ShrubberyCreationForm :" << RESET << std::endl << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of a ShrubberyCreationForm [shr] (default) :" << RESET << std::endl; 
			ShrubberyCreationForm	shr;
			std::cout << GREEN << "\t" << shr << RESET << std::endl;

			std::cout << std::endl; 

			std::cout << BGREEN << "Creation of a ShrubberyCreationForm [shr_c] (copy of [shr]) :" << RESET << std::endl; 
			ShrubberyCreationForm	shr_c(shr);
			std::cout << GREEN << "\t" << shr_c << RESET << std::endl;

			std::cout << std::endl; 

			std::cout << BGREEN << "Creation of a ShrubberyCreationForm [shr_s] (param) :" << RESET << std::endl; 
			ShrubberyCreationForm	shr_s("Arbre", 10, 100, "Terre");
			std::cout << GREEN << "\t" << shr_s << RESET << std::endl;

			std::cout << std::endl; 

			std::cout << BGREEN << "Creation of a ShrubberyCreationForm [shr_sc] (copy of [shr_s]) :" << RESET << std::endl; 
			ShrubberyCreationForm	shr_sc(shr_s);
			std::cout << GREEN << "\t" << shr_sc << RESET << std::endl; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
		std::cout << std::endl;
	}

	std::cout << std::endl;

	std::cout << SGREEN << BGREEN << "Tests of sign & execute all sort:" << RESET << std::endl << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of a Bureaucrat [nobody] (default) :" << RESET << std::endl; 
			Bureaucrat	random;
			std::cout << GREEN << "\t" << random << RESET << std::endl;

			std::cout << std::endl;

			std::cout << BGREEN << "Creation of a ShrubberyCreationForm [shr] (param) :" << RESET << std::endl; 
			ShrubberyCreationForm shr("Random", 150, 150, "None");
			std::cout << GREEN << "\t" << shr << RESET << std::endl;

			std::cout << std::endl;

			random.executeForm(shr);
			random.signForm(shr);
			random.executeForm(shr);
			std::cout << std::endl; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
	}
	std::cout << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of a Bureaucrat [nobody] (default) :" << RESET << std::endl; 
			Bureaucrat	random;
			std::cout << GREEN << "\t" << random << RESET << std::endl;

			std::cout << std::endl;

			std::cout << BGREEN << "Creation of a ShrubberyCreationForm [shr] (param) :" << RESET << std::endl; 
			ShrubberyCreationForm shr("Random", 150, 1, "None");
			std::cout << GREEN << "\t" << shr << RESET << std::endl;

			std::cout << std::endl;

			random.executeForm(shr);
			random.signForm(shr);
			random.executeForm(shr);
			std::cout << std::endl; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
	}
	std::cout << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of a Bureaucrat [nobody] (default) :" << RESET << std::endl; 
			Bureaucrat	random;
			std::cout << GREEN << "\t" << random << RESET << std::endl;

			std::cout << std::endl;

			std::cout << BGREEN << "Creation of a ShrubberyCreationForm [shr] (param) :" << RESET << std::endl; 
			ShrubberyCreationForm shr("Random", 1, 150, "None");
			std::cout << GREEN << "\t" << shr << RESET << std::endl;

			std::cout << std::endl;

			random.executeForm(shr);
			random.signForm(shr);
			random.executeForm(shr);
			std::cout << std::endl; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
	}
	std::cout << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of a Bureaucrat [nobody] (default) :" << RESET << std::endl; 
			Bureaucrat	random;
			std::cout << GREEN << "\t" << random << RESET << std::endl;

			std::cout << std::endl;

			std::cout << BGREEN << "Creation of a ShrubberyCreationForm [shr] (param) :" << RESET << std::endl; 
			ShrubberyCreationForm shr("Random", 1, 1, "None");
			std::cout << GREEN << "\t" << shr << RESET << std::endl;

			std::cout << std::endl;

			random.executeForm(shr);
			random.signForm(shr);
			random.executeForm(shr);
			std::cout << std::endl; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
	}

	std::cout << std::endl << std::endl;

	std::cout << SRED << BRED << "\t\t\t\t" "Tests for RobotomyRequestForm" << RESET << std::endl << std::endl;
	std::cout << std::endl;

	std::cout << SGREEN << BGREEN << "Tests of default / copy / param constructor of RobotomyRequestForm :" << RESET << std::endl << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of a RobotomyRequestForm [rob] (default) :" << RESET << std::endl; 
			RobotomyRequestForm	rob;
			std::cout << GREEN << "\t" << rob << RESET << std::endl;

			std::cout << std::endl; 

			std::cout << BGREEN << "Creation of a RobotomyRequestForm [rob_c] (copy of [rob]) :" << RESET << std::endl; 
			RobotomyRequestForm	rob_c(rob);
			std::cout << GREEN << "\t" << rob_c << RESET << std::endl;

			std::cout << std::endl; 

			std::cout << BGREEN << "Creation of a RobotomyRequestForm [rob_s] (param) :" << RESET << std::endl; 
			RobotomyRequestForm	rob_s("Robot", 10, 100, "Mur");
			std::cout << GREEN << "\t" << rob_s << RESET << std::endl;

			std::cout << std::endl; 

			std::cout << BGREEN << "Creation of a RobotomyRequestForm [rob_sc] (copy of [rob_s]) :" << RESET << std::endl; 
			RobotomyRequestForm	rob_sc(rob_s);
			std::cout << GREEN << "\t" << rob_sc << RESET << std::endl; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
		std::cout << std::endl;
	}

	std::cout << std::endl;

	std::cout << SGREEN << BGREEN << "Tests of sign & execute all sort:" << RESET << std::endl << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of a Bureaucrat [nobody] (default) :" << RESET << std::endl; 
			Bureaucrat	random;
			std::cout << GREEN << "\t" << random << RESET << std::endl;

			std::cout << std::endl;

			std::cout << BGREEN << "Creation of a RobotomyRequestForm [rob] (param) :" << RESET << std::endl; 
			RobotomyRequestForm rob("Random", 150, 150, "None");
			std::cout << GREEN << "\t" << rob << RESET << std::endl;

			std::cout << std::endl;

			random.executeForm(rob);
			random.signForm(rob);
			random.executeForm(rob); random.executeForm(rob); random.executeForm(rob); random.executeForm(rob);
			std::cout << std::endl; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
	}
	std::cout << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of a Bureaucrat [nobody] (default) :" << RESET << std::endl; 
			Bureaucrat	random;
			std::cout << GREEN << "\t" << random << RESET << std::endl;

			std::cout << std::endl;

			std::cout << BGREEN << "Creation of a RobotomyRequestForm [rob] (param) :" << RESET << std::endl; 
			RobotomyRequestForm rob("Random", 150, 1, "None");
			std::cout << GREEN << "\t" << rob << RESET << std::endl;

			std::cout << std::endl;

			random.executeForm(rob);
			random.signForm(rob);
			random.executeForm(rob);
			std::cout << std::endl; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
	}
	std::cout << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of a Bureaucrat [nobody] (default) :" << RESET << std::endl; 
			Bureaucrat	random;
			std::cout << GREEN << "\t" << random << RESET << std::endl;

			std::cout << std::endl;

			std::cout << BGREEN << "Creation of a RobotomyRequestForm [rob] (param) :" << RESET << std::endl; 
			RobotomyRequestForm rob("Random", 1, 150, "None");
			std::cout << GREEN << "\t" << rob << RESET << std::endl;

			std::cout << std::endl;

			random.executeForm(rob);
			random.signForm(rob);
			random.executeForm(rob);
			std::cout << std::endl; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
	}
	std::cout << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of a Bureaucrat [nobody] (default) :" << RESET << std::endl; 
			Bureaucrat	random;
			std::cout << GREEN << "\t" << random << RESET << std::endl;

			std::cout << std::endl;

			std::cout << BGREEN << "Creation of a RobotomyRequestForm [rob] (param) :" << RESET << std::endl; 
			RobotomyRequestForm rob("Random", 1, 1, "None");
			std::cout << GREEN << "\t" << rob << RESET << std::endl;

			std::cout << std::endl;

			random.executeForm(rob);
			random.signForm(rob);
			random.executeForm(rob);
			std::cout << std::endl; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
	}

	std::cout << std::endl << std::endl;

	std::cout << SRED << BRED << "\t\t\t\t" "Tests for PresidentialPardonForm" << RESET << std::endl << std::endl;
	std::cout << std::endl;

	std::cout << SGREEN << BGREEN << "Tests of default / copy / param constructor of PresidentialPardonForm :" << RESET << std::endl << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of a PresidentialPardonForm [pre] (default) :" << RESET << std::endl; 
			PresidentialPardonForm	pre;
			std::cout << GREEN << "\t" << pre << RESET << std::endl;

			std::cout << std::endl; 

			std::cout << BGREEN << "Creation of a PresidentialPardonForm [pre_c] (copy of [pre]) :" << RESET << std::endl; 
			PresidentialPardonForm	pre_c(pre);
			std::cout << GREEN << "\t" << pre_c << RESET << std::endl;

			std::cout << std::endl; 

			std::cout << BGREEN << "Creation of a PresidentialPardonForm [pre_s] (param) :" << RESET << std::endl; 
			PresidentialPardonForm	pre_s("President", 10, 100, "Criminel");
			std::cout << GREEN << "\t" << pre_s << RESET << std::endl;

			std::cout << std::endl; 

			std::cout << BGREEN << "Creation of a PresidentialPardonForm [pre_sc] (copy of [pre_s]) :" << RESET << std::endl; 
			PresidentialPardonForm	pre_sc(pre_s);
			std::cout << GREEN << "\t" << pre_sc << RESET << std::endl; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
		std::cout << std::endl;
	}

	std::cout << std::endl;

	std::cout << SGREEN << BGREEN << "Tests of sign & execute all sort:" << RESET << std::endl << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of a Bureaucrat [nobody] (default) :" << RESET << std::endl; 
			Bureaucrat	random;
			std::cout << GREEN << "\t" << random << RESET << std::endl;

			std::cout << std::endl;

			std::cout << BGREEN << "Creation of a PresidentialPardonForm [pre] (param) :" << RESET << std::endl; 
			PresidentialPardonForm pre("Random", 150, 150, "None");
			std::cout << GREEN << "\t" << pre << RESET << std::endl;

			std::cout << std::endl;

			random.executeForm(pre);
			random.signForm(pre);
			random.executeForm(pre);
			std::cout << std::endl; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
	}
	std::cout << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of a Bureaucrat [nobody] (default) :" << RESET << std::endl; 
			Bureaucrat	random;
			std::cout << GREEN << "\t" << random << RESET << std::endl;

			std::cout << std::endl;

			std::cout << BGREEN << "Creation of a PresidentialPardonForm [pre] (param) :" << RESET << std::endl; 
			PresidentialPardonForm pre("Random", 150, 1, "None");
			std::cout << GREEN << "\t" << pre << RESET << std::endl;

			std::cout << std::endl;

			random.executeForm(pre);
			random.signForm(pre);
			random.executeForm(pre);
			std::cout << std::endl; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
	}
	std::cout << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of a Bureaucrat [nobody] (default) :" << RESET << std::endl; 
			Bureaucrat	random;
			std::cout << GREEN << "\t" << random << RESET << std::endl;

			std::cout << std::endl;

			std::cout << BGREEN << "Creation of a PresidentialPardonForm [pre] (param) :" << RESET << std::endl; 
			PresidentialPardonForm pre("Random", 1, 150, "None");
			std::cout << GREEN << "\t" << pre << RESET << std::endl;

			std::cout << std::endl;

			random.executeForm(pre);
			random.signForm(pre);
			random.executeForm(pre);
			std::cout << std::endl; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
	}
	std::cout << std::endl;
	{
		try {
			std::cout << BGREEN << "Creation of a Bureaucrat [nobody] (default) :" << RESET << std::endl; 
			Bureaucrat	random;
			std::cout << GREEN << "\t" << random << RESET << std::endl;

			std::cout << std::endl;

			std::cout << BGREEN << "Creation of a PresidentialPardonForm [pre] (param) :" << RESET << std::endl; 
			PresidentialPardonForm pre("Random", 1, 1, "None");
			std::cout << GREEN << "\t" << pre << RESET << std::endl;

			std::cout << std::endl;

			random.executeForm(pre);
			random.signForm(pre);
			random.executeForm(pre);
			std::cout << std::endl; }
		catch (std::exception &e) {
			std::cout << RED << e.what() << RESET << std::endl; }
	}

	return 0; }