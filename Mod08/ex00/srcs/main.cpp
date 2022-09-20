/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 22:53:47 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/20 15:31:02 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"
#include "ft_color.hpp"

void	displayInt(int i)
{
	std::cout << i << " ";
}

int	main() {
	unsigned int size = 10;
	
	std::cout << std::endl << "\t\t" << SGREEN << BGREEN << "Tests with std::list :" << RESET << std::endl << std::endl;
	{
		srand(time(NULL));

		std::cout << IPURPLE << "Creation of std::list<int> lst, contents [" << size << "] elements randomly generated.." << RESET << std::endl;
		std::list<int>	lst;

		try {
			if (static_cast<int>(size) <= 0) {
				throw (ErrorNotEnough()); }
			for (unsigned int i = 0; i < size; i++) {
				lst.push_back(rand() % 10); } }
		catch (std::exception &e) {
			std::cout << BRED << e.what() << std::endl; }

		std::cout << std::endl;

		std::cout << BGREEN << "Display of lst with fct for_each(..) :" << std::endl << BBLUE << "\t" "[ " << CYAN;
		for_each(lst.begin(), lst.end(), displayInt);
		std::cout << BBLUE << "]" << RESET << std::endl;

		std::cout << std::endl;

		std::cout << BGREEN << "Execute fct easyfind(..) on range of 10 number (0 - 9) :" << GREEN << std::endl;
		try {
			if (static_cast<int>(size) <= 0) {
				throw (ErrorNotEnough()); }
			std::cout << BBLUE << "\t" "Try to find :" << RESET << std::endl;
			for (unsigned int i = 0; i < 10; i++) {
				try {
					std::cout << BBLUE << "\t\t" << i << " -> " << GREEN << *easyfind(lst, i) << std::endl; }
				catch (std::exception &e) {
					std::cout << BRED<< e.what() << std::endl; } } }
		catch (std::exception &e) {
			std::cout << BRED << e.what() << std::endl; }

		std::cout << std::endl;
	}

	std::cout << std::endl << "\t\t" << SGREEN << BGREEN << "Tests with std::vector :" << RESET << std::endl << std::endl;
	{
		srand(time(NULL));

		std::cout << IPURPLE << "Creation of std::vector<int> vec, contents [" << size << "] elements randomly generated.." << RESET << std::endl;
		std::vector<int>	vec;

		try {
			if (static_cast<int>(size) <= 0) {
				throw (ErrorNotEnough()); }
			for (unsigned int i = 0; i < size; i++) {
				vec.push_back(rand() % 10); } }
		catch (std::exception &e) {
			std::cout << BRED << e.what() << std::endl; }

		std::cout << std::endl;

		std::cout << BGREEN << "Display of vec with fct for_each(..) :" << std::endl << BBLUE << "\t" "[ " << CYAN;
		for_each(vec.begin(), vec.end(), displayInt);
		std::cout << BBLUE << "]" << RESET << std::endl;

		std::cout << std::endl;

		std::cout << BGREEN << "Execute fct easyfind(..) on range of 10 number (0 - 9) :" << GREEN << std::endl;
		try {
			if (static_cast<int>(size) <= 0) {
				throw (ErrorNotEnough()); }
			std::cout << BBLUE << "\t" "Try to find :" << RESET << std::endl;
			for (unsigned int i = 0; i < 10; i++) {
				try {
					std::cout << BBLUE << "\t\t" << i << " -> " << GREEN << *easyfind(vec, i) << std::endl; }
				catch (std::exception &e) {
					std::cout << BRED<< e.what() << std::endl; } } }
		catch (std::exception &e) {
			std::cout << BRED << e.what() << std::endl; }

		std::cout << std::endl;
	}

	std::cout << std::endl << "\t\t" << SGREEN << BGREEN << "Tests with std::deque :" << RESET << std::endl << std::endl;
	{
		srand(time(NULL));

		std::cout << IPURPLE << "Creation of std::deque<int> deq, contents [" << size << "] elements randomly generated.." << RESET << std::endl;
		std::deque<int>	deq;

		try {
			if (static_cast<int>(size) <= 0) {
				throw (ErrorNotEnough()); }
			for (unsigned int i = 0; i < size; i++) {
				deq.push_back(rand() % 10); } }
		catch (std::exception &e) {
			std::cout << BRED << e.what() << std::endl; }

		std::cout << std::endl;

		std::cout << BGREEN << "Display of deq with fct for_each(..) :" << std::endl << BBLUE << "\t" "[ " << CYAN;
		for_each(deq.begin(), deq.end(), displayInt);
		std::cout << BBLUE << "]" << RESET << std::endl;

		std::cout << std::endl;

		std::cout << BGREEN << "Execute fct easyfind(..) on range of 10 number (0 - 9) :" << GREEN << std::endl;
		try {
			if (static_cast<int>(size) <= 0) {
				throw (ErrorNotEnough()); }
			std::cout << BBLUE << "\t" "Try to find :" << RESET << std::endl;
			for (unsigned int i = 0; i < 10; i++) {
				try {
					std::cout << BBLUE << "\t\t" << i << " -> " << GREEN << *easyfind(deq, i) << std::endl; }
				catch (std::exception &e) {
					std::cout << BRED<< e.what() << std::endl; } } }
		catch (std::exception &e) {
			std::cout << BRED << e.what() << std::endl; }

		std::cout << std::endl;
	}
	return 0;
}