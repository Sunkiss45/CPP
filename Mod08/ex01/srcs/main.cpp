/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 00:38:29 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/20 20:17:42 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include "ft_color.hpp"

#define RESET "\e[0m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PURPLE "\e[0;35m"
#define CYAN "\e[0;36m"

int	main() {

	std::cout << std::endl << "\t\t" << SGREEN << BGREEN << " ! SUBJECT TEST ! " << RESET << std::endl << std::endl;
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "[ " << sp << " ]" << std::endl;
		std::cout << "short :\t" << sp.shortestSpan() << std::endl;
		std::cout << "long :\t" << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl << "\t\t" << SGREEN << BGREEN << " ! PERSONAL TEST ! " << RESET << std::endl << std::endl;
	
	srand(time(NULL));
	
	std::cout << std::endl << SGREEN << BGREEN << "Test with 5 random numbers :" << RESET << std::endl << std::endl;
	{
		unsigned int size = 5;

		std::cout << IPURPLE << "Creation Span sp, contents [" << size << "] elements randomly generated.." << RESET << std::endl << std::endl;
		Span sp = Span(size);
		sp.rangeGen();
		
		std::cout << BGREEN << "Display of sp with opertor << :" << std::endl;
		std::cout << BBLUE << "\t" "[ " << CYAN << sp << BBLUE << " ]" << RESET << std::endl;

		std::cout << std::endl;

		std::cout << GREEN << "\t" "execute sp.shortestSpan() : " << GREEN << sp.shortestSpan() << std::endl;
		std::cout << GREEN << "\t" "execute sp.longestSpan() : " << GREEN << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl << SGREEN << BGREEN << "Test with 100 random numbers :" << RESET << std::endl << std::endl;
	{
		unsigned int size = 100;

		std::cout << IPURPLE << "Creation Span sp, contents [" << size << "] elements randomly generated.." << RESET << std::endl << std::endl;
		Span sp = Span(size);
		sp.rangeGen();
		
		std::cout << BGREEN << "Display of sp with opertor << :" << std::endl;
		std::cout << BBLUE << "\t" "[ " << CYAN << sp << BBLUE << " ]" << RESET << std::endl;

		std::cout << std::endl;

		std::cout << GREEN << "\t" "execute sp.shortestSpan() : " << GREEN << sp.shortestSpan() << std::endl;
		std::cout << GREEN << "\t" "execute sp.longestSpan() : " << GREEN << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl << SGREEN << BGREEN << "Test with 10000 random numbers :" << RESET << std::endl << std::endl;
	{
		unsigned int size = 10000;

		std::cout << IPURPLE << "Creation Span sp, contents [" << size << "] elements randomly generated.." << RESET << std::endl << std::endl;
		Span sp = Span(size);
		sp.rangeGen();
		
		std::cout << BGREEN << "Display of sp with opertor << :" << std::endl;
		//std::cout << BBLUE << "\t" "[ " << CYAN << sp << BBLUE << " ]" << RESET << std::endl;
		std::cout << BRED << "\t" "PLEASE MODIFY MAIN FOR DISPLAY" << RESET << std::endl;

		std::cout << std::endl;

		std::cout << GREEN << "\t" "execute sp.shortestSpan() : " << GREEN << sp.shortestSpan() << std::endl;
		std::cout << GREEN << "\t" "execute sp.longestSpan() : " << GREEN << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl << SGREEN << BGREEN << "Tests of diffrent ERROR :" << RESET << std::endl << std::endl;
	{
		{
			unsigned int size = 5;

			std::cout << IPURPLE << "Creation Span sp, contents [" << size << "] elements randomly generated.." << RESET << std::endl << std::endl;
			Span sp = Span(size);
			sp.rangeGen();
			
			std::cout << BGREEN << "Display of sp with opertor << :" << std::endl;
			std::cout << BBLUE << "\t" "[ " << CYAN << sp << BBLUE << " ]" << RESET << std::endl;

			std::cout << std::endl;

			std::cout << GREEN << "\t" "execute sp.shortestSpan() : " << GREEN << sp.shortestSpan() << std::endl;
			std::cout << GREEN << "\t" "execute sp.longestSpan() : " << GREEN << sp.longestSpan() << std::endl; 
			
			std::cout << std::endl;
			
			std::cout << IPURPLE << "Try to addNumber(0) to sp .." << RESET << std::endl;
			try {
				sp.addNumber(0); }
			catch (std::exception &e) {
				std::cout << BRED << e.what() << RESET << std::endl; }
		}

		std::cout << std::endl;

		{
			unsigned int size = 0;

			std::cout << IPURPLE << "Creation Span sp, contents [" << size << "] elements randomly generated.." << RESET << std::endl << std::endl;
			Span sp = Span(size);
			sp.rangeGen();
			
			std::cout << BGREEN << "Display of sp with opertor << :" << std::endl;
			std::cout << BBLUE << "\t" "[ " << CYAN << sp << BBLUE << " ]" << RESET << std::endl;

			std::cout << std::endl;

			try {
				std::cout << GREEN << "\t" "execute sp.shortestSpan() : " << GREEN << sp.shortestSpan() << std::endl; }
			catch (std::exception &e) {
				std::cout << BRED << e.what() << RESET << std::endl; }
			try {
				std::cout << GREEN << "\t" "execute sp.longestSpan() : " << GREEN << sp.longestSpan() << std::endl; }
			catch (std::exception &e) {
				std::cout << BRED << e.what() << RESET << std::endl; }
		}

		std::cout << std::endl;

		{
			unsigned int size = 1;

			std::cout << IPURPLE << "Creation Span sp, contents [" << size << "] elements randomly generated.." << RESET << std::endl << std::endl;
			Span sp = Span(size);
			sp.rangeGen();
			
			std::cout << BGREEN << "Display of sp with opertor << :" << std::endl;
			std::cout << BBLUE << "\t" "[ " << CYAN << sp << BBLUE << " ]" << RESET << std::endl;

			std::cout << std::endl;

			try {
				std::cout << GREEN << "\t" "execute sp.shortestSpan() : " << GREEN << sp.shortestSpan() << std::endl; }
			catch (std::exception &e) {
				std::cout << BRED << e.what() << RESET << std::endl; }
			try {
				std::cout << GREEN << "\t" "execute sp.longestSpan() : " << GREEN << sp.longestSpan() << std::endl; }
			catch (std::exception &e) {
				std::cout << BRED << e.what() << RESET << std::endl; }
		}

		std::cout << std::endl;

		try {
			unsigned int size = -1;

			std::cout << IPURPLE << "Creation Span sp, contents [" << size << "] elements randomly generated.." << RESET << std::endl << std::endl;
			Span sp = Span(size);
			sp.rangeGen();
			
			std::cout << BGREEN << "Display of sp with opertor << :" << std::endl;
			std::cout << BBLUE << "\t" "[ " << CYAN << sp << BBLUE << " ]" << RESET << std::endl;

			std::cout << std::endl;

			std::cout << GREEN << "\t" "execute sp.shortestSpan() : " << GREEN << sp.shortestSpan() << std::endl;
			std::cout << GREEN << "\t" "execute sp.longestSpan() : " << GREEN << sp.longestSpan() << std::endl; }
		catch (std::exception &e) {
			std::cout << BRED << e.what() << RESET << std::endl;
		}
	}
	return 0;
}
