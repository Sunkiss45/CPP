/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 01:01:06 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/29 16:33:35 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_color.hpp"
#include "EasyFind.hpp"
#include "MutantStack.hpp"

int main()
{
	std::cout << std::endl << "\t\t" << SGREEN << BGREEN << " ! SUBJECT TEST ! " << RESET << std::endl << std::endl;
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	
	std::cout << std::endl << "compare to std::vector" << std::endl << std::endl;

	{
		std::vector<int> mstack;

		mstack.push_back(5);
		mstack.push_back(17);

		std::cout << mstack.back() << std::endl;

		mstack.pop_back();

		std::cout << mstack.size() << std::endl;

		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);

		std::vector<int>::iterator it = mstack.begin();
		std::vector<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	std::cout << std::endl << "\t\t" << SGREEN << BGREEN << " ! PERSONAL TEST ! " << RESET << std::endl << std::endl;

	/*================================*/
	/*            INT TEST            */
	/*================================*/

	std::cout << BGREEN << SGREEN << "Test with int :" << RESET << std::endl;
	{
		unsigned int size = 10;

		std::cout << IPURPLE << "Creation of MutantStack<int> mstack and std::vector<int> verify with same elements randomly generated.." << RESET << std::endl;
		srand(time(NULL));
		MutantStack<int>	mstack = IntGenMutantStack(size);
		srand(time(NULL));
		std::vector<int>		verify = IntGenVector(size);

		std::cout << std::endl;

		std::cout << BGREEN << "Display of mstack and verify :" << RESET << std::endl;

		{
			MutantStack<int>::iterator it = mstack.begin();
			MutantStack<int>::iterator ite = mstack.end();
			std::cout << GREEN << "\t" "mstack = " << BBLUE << "[ " << CYAN;
			for (void (); it != ite; it++) {
				std::cout << *it;
				if (it != ite - 1) {
					std::cout << ", "; } }
			std::cout << BBLUE << " ]" << RESET << std::endl;
		}
		{
			std::vector<int>::iterator it = verify.begin();
			std::vector<int>::iterator ite = verify.end();
			std::vector<int>::iterator itex = --verify.end();
			std::cout << GREEN << "\t" "verify = " << BBLUE << "[ " << CYAN;
			for (void (); it != ite; it++) {
				std::cout << *it;
				if (it != itex) {
					std::cout << ", "; } }
			std::cout << BBLUE << " ]" << RESET << std::endl;
		}
		std::cout << GREEN << "\t" "mstack.begin = " << CYAN << *mstack.begin() << RESET << std::endl;
		std::cout << GREEN << "\t" "verify.begin = " << CYAN << *verify.begin() << RESET << std::endl;
		std::cout << GREEN << "\t" "--mstack.end = " << CYAN << *--mstack.end() << RESET << std::endl;
		std::cout << GREEN << "\t" "--verify.end = " << CYAN << *--verify.end() << RESET << std::endl;

		std::cout << std::endl;

		std::cout << IPURPLE << "Choosing a random data of verify and try easyFind() on mstac.." << std::endl;

		int r = verify[rand() % size];
		std::cout << GREEN << "\t" "Value choose = " << CYAN << r << RESET << std::endl;
		try {
			std::cout << GREEN << "\t" "easyFind(" << r << ") = " << CYAN << *easyfind(mstack, r) << std::endl; }
		catch (std::exception &e) {
			std::cout << BRED << e.what() << std::endl; }
		try {
			std::cout << GREEN << "\t" "easyFind(999999) = " << CYAN << *easyfind(mstack, 999999) << std::endl; }
		catch (std::exception &e) {
			std::cout << BRED << e.what() << std::endl; }
	}

	std::cout << std::endl << std::endl;
	/*================================*/
	/*           FLOAT TEST           */
	/*================================*/

	std::cout << BGREEN << SGREEN << "Test with float :" << RESET << std::endl;
	{
		unsigned int size = 5;

		std::cout << IPURPLE << "Creation of MutantStack<float> mstack and std::vector<float> verify with same elements randomly generated.." << RESET << std::endl;
		srand(time(NULL));
		MutantStack<float>	mstack = FloatGenMutantStack(size);
		srand(time(NULL));
		std::vector<float>		verify = FloatGenVector(size);

		std::cout << std::endl;

		std::cout << BGREEN << "Display of mstack and verify :" << RESET << std::endl;

		{
			MutantStack<float>::iterator it = mstack.begin();
			MutantStack<float>::iterator ite = mstack.end();
			std::cout << GREEN << "\t" "mstack = " << BBLUE << "[ " << CYAN;
			for (void (); it != ite; it++) {
				std::cout << *it;
				if (it != ite - 1) {
					std::cout << ", "; } }
			std::cout << BBLUE << " ]" << RESET << std::endl;
		}
		{
			std::vector<float>::iterator it = verify.begin();
			std::vector<float>::iterator ite = verify.end();
			std::vector<float>::iterator itex = --verify.end();
			std::cout << GREEN << "\t" "verify = " << BBLUE << "[ " << CYAN;
			for (void (); it != ite; it++) {
				std::cout << *it;
				if (it != itex) {
					std::cout << ", "; } }
			std::cout << BBLUE << " ]" << RESET << std::endl;
		}
		std::cout << GREEN << "\t" "mstack.begin = " << CYAN << *mstack.begin() << RESET << std::endl;
		std::cout << GREEN << "\t" "verify.begin = " << CYAN << *verify.begin() << RESET << std::endl;
		std::cout << GREEN << "\t" "--mstack.end = " << CYAN << *--mstack.end() << RESET << std::endl;
		std::cout << GREEN << "\t" "--verify.end = " << CYAN << *--verify.end() << RESET << std::endl;
	}

	std::cout << std::endl << std::endl;
	/*================================*/
	/*          STRING TEST           */
	/*================================*/

	std::cout << BGREEN << SGREEN << "Test with std::string :" << RESET << std::endl;
	{
		unsigned int size = 5;

		std::cout << IPURPLE << "Creation of MutantStack<std::string> mstack and std::vector<std::string> verify with same elements randomly generated.." << RESET << std::endl;
		srand(time(NULL));
		MutantStack<std::string>	mstack = StrGenMutantStack(size);
		srand(time(NULL));
		std::vector<std::string>		verify = StrGenVector(size);

		std::cout << std::endl;

		std::cout << BGREEN << "Display of mstack and verify :" << RESET << std::endl;

		{
			MutantStack<std::string>::iterator it = mstack.begin();
			MutantStack<std::string>::iterator ite = mstack.end();
			std::cout << GREEN << "\t" "mstack = " << BBLUE << "[ " << CYAN;
			for (void (); it != ite; it++) {
				std::cout << *it;
				if (it != ite - 1) {
					std::cout << ", "; } }
			std::cout << BBLUE << " ]" << RESET << std::endl;
		}
		{
			std::vector<std::string>::iterator it = verify.begin();
			std::vector<std::string>::iterator ite = verify.end();
			std::vector<std::string>::iterator itex = --verify.end();
			std::cout << GREEN << "\t" "verify = " << BBLUE << "[ " << CYAN;
			for (void (); it != ite; it++) {
				std::cout << *it;
				if (it != itex) {
					std::cout << ", "; } }
			std::cout << BBLUE << " ]" << RESET << std::endl;
		}
		std::cout << GREEN << "\t" "mstack.begin = " << CYAN << *mstack.begin() << RESET << std::endl;
		std::cout << GREEN << "\t" "verify.begin = " << CYAN << *verify.begin() << RESET << std::endl;
		std::cout << GREEN << "\t" "--mstack.end = " << CYAN << *--mstack.end() << RESET << std::endl;
		std::cout << GREEN << "\t" "--verify.end = " << CYAN << *--verify.end() << RESET << std::endl;
	}

	std::cout << std::endl;
	return 0;
}
