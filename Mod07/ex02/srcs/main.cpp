/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 20:25:51 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/19 13:45:56 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	// {
	// int a = 5;
	// int b = a;
	// std::cout << &a << " = " << a << " | " << &b << " = " << b << std::endl;
	// }
	// {
	// std::string	a = "test";
	// std::string	b = a;
	// std::cout << &a << " = " << a << " | " << &b << " = " << b << std::endl;
	// }
	// {
	// int a[3] = {5, 8, 4};
	// int *b = a;
	// std::cout << &a << " = " << a << " | " << &b << " = " << b << std::endl;
	// }

#include "Array.tpp"

std::string	ft_str_generator(void) {
	unsigned size = (rand() % 6) + 5;
	std::string	str;

	for (unsigned int i = 0; i < size; i++) {
		if (rand() % 2) {
			str += 'A' + (rand() % 26); }
		else {
			str += 'a' + (rand() % 26); } }
	return str; }

//----------   MAIN DE CORRECTION   ----------//

#define MAX_VAL 750
int main(int, char**)
{
	std::cout << std::endl << SRED << BRED << "\t\t\t" " ! MAIN CORRECTION ! " << RESET << std::endl << std::endl;
	{
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;//
	}

	std::cout << std::endl << SRED << BRED << "\t\t\t" " ! MAIN PERSO ! " << RESET << std::endl << std::endl;
	{
		srand(time(NULL));
		
		/*================================*/
		/*            INT ARRAY           */
		/*================================*/
		
		std::cout << std::endl << "\t\t" << SGREEN << BGREEN << "Tests with Array in INT :" << RESET << std::endl << std::endl;
		try {
			unsigned int	n = 10;
			std::cout << BYELLOW << "Creation of inttab, contents [" << n << "] int randomly generated.." << RESET << std::endl << std::endl;
			Array<int>	inttab(n);
			for (unsigned int i = 0; i < n; i++) {
				inttab[i] = (rand() % 201) - 100; }

			std::cout << BGREEN << "Display of inttab successive with operator [] :" << GREEN << std::endl << "\t";
			for (unsigned int i = 0; i < n; i++) {
				std::cout << inttab[i];
				if (i != n - 1) {
					std::cout << " - "; } }
			std::cout << RESET << std::endl << std::endl;

			std::cout << BGREEN << "Display of inttab with operator << :" << RESET << std::endl;
			std::cout << GREEN << "\t" << inttab << RESET << std::endl;

			std::cout << std::endl;

			std::cout << BGREEN << "Try to display out of bound data :" << RESET << std::endl;
			try {
				std::cout << GREEN << "\t- inttab[" << n << "] = " << inttab[n] << RESET << std::endl; }
			catch (std::exception &e) {
				std::cout << BRED << e.what() << RESET << std::endl; }
			try {
				std::cout << GREEN << "\t- inttab[-1] = " << inttab[-1] << RESET << std::endl; }
			catch (std::exception &e) {
				std::cout << BRED << e.what() << RESET << std::endl; }

			std::cout << std::endl;

			std::cout << BYELLOW << "Creation of c_inttab, copy of inttab.." << RESET << std::endl << std::endl;
			Array<int>	c_inttab(inttab);

			std::cout << BGREEN << "Display of c_inttab successive with operator [] :" << GREEN << std::endl << "\t";
			for (unsigned int i = 0; i < n; i++) {
				std::cout << c_inttab[i];
				if (i != n - 1) {
					std::cout << " - "; } }
			std::cout << RESET << std::endl << std::endl;

			std::cout << BGREEN << "Display of c_inttab with operator << :" << RESET << std::endl;
			std::cout << GREEN << "\t" << c_inttab << RESET << std::endl;

			std::cout << std::endl;

			std::cout << BGREEN << "Try to display out of bound data :" << RESET << std::endl;
			try {
				std::cout << GREEN << "\t- c_inttab[" << n << "] = " << c_inttab[n] << RESET << std::endl; }
			catch (std::exception &e) {
				std::cout << BRED << e.what() << RESET << std::endl; }
			try {
				std::cout << GREEN << "\t- c_inttab[-1] = " << c_inttab[-1] << RESET << std::endl; }
			catch (std::exception &e) {
				std::cout << BRED << e.what() << RESET << std::endl; }

			std::cout << std::endl;

			std::cout << BYELLOW << "Modification of the last data of c_inttab.." << RESET << std::endl << std::endl;
			for (c_inttab[n-1] = rand() % 101; c_inttab[n-1] == inttab[n-1]; void()) {
				c_inttab[n-1] = rand() % 101; }
			std::cout << BGREEN << "Display it and compare to original :" << RESET << std::endl;
			std::cout << GREEN << "\t - inttab[" << n-1 << "] = " << CYAN << inttab[n-1] << std::endl;
			std::cout << GREEN << "\t - c_inttab[" << n-1 << "] = " << CYAN << c_inttab[n-1] << std::endl;

			std::cout << std::endl;

			std::cout << BGREEN << "Display of inttab & c_inttab :" << RESET << std::endl;
			std::cout << GREEN << "\t" << inttab << RESET << std::endl;
			std::cout << GREEN << "\t" << c_inttab << RESET << std::endl; }
		catch (std::exception &e) {
			std::cout << SRED << BRED << "BIG ERROR ==> " << e.what() << std::endl; }

		std::cout << std::endl << std::endl;
		/*================================*/
		/*           FLOAT ARRAY          */
		/*================================*/

		std::cout << std::endl << "\t\t" << SGREEN << BGREEN << "Tests with Array in FLOAT :" << RESET << std::endl << std::endl;
		try {
			unsigned int	n = 5;
			std::cout << BYELLOW << "Creation of floattab, contents [" << n << "] float randomly generated.." << RESET << std::endl << std::endl;
			Array<float>	floattab(n);
			for (unsigned int i = 0; i < n; i++) {
				floattab[i] = static_cast<double> (rand()) / (static_cast<double> (RAND_MAX/1000.0)); }

			std::cout << BGREEN << "Display of floattab successive with operator [] :" << GREEN << std::endl << "\t";
			for (unsigned int i = 0; i < n; i++) {
				std::cout << floattab[i];
				if (i != n - 1) {
					std::cout << " - "; } }
			std::cout << RESET << std::endl << std::endl;

			std::cout << BGREEN << "Display of floattab with operator << :" << RESET << std::endl;
			std::cout << GREEN << "\t" << floattab << RESET << std::endl;

			std::cout << std::endl;

			std::cout << BGREEN << "Try to display out of bound data :" << RESET << std::endl;
			try {
				std::cout << GREEN << "\t- floattab[" << n << "] = " << floattab[n] << RESET << std::endl; }
			catch (std::exception &e) {
				std::cout << BRED << e.what() << RESET << std::endl; }
			try {
				std::cout << GREEN << "\t- floattab[-1] = " << floattab[-1] << RESET << std::endl; }
			catch (std::exception &e) {
				std::cout << BRED << e.what() << RESET << std::endl; }

			std::cout << std::endl;

			std::cout << BYELLOW << "Creation of c_floattab, copy of floattab.." << RESET << std::endl << std::endl;
			Array<float>	c_floattab(floattab);

			std::cout << BGREEN << "Display of c_floattab successive with operator [] :" << GREEN << std::endl << "\t";
			for (unsigned int i = 0; i < n; i++) {
				std::cout << c_floattab[i];
				if (i != n - 1) {
					std::cout << " - "; } }
			std::cout << RESET << std::endl << std::endl;

			std::cout << BGREEN << "Display of c_floattab with operator << :" << RESET << std::endl;
			std::cout << GREEN << "\t" << c_floattab << RESET << std::endl;

			std::cout << std::endl;

			std::cout << BGREEN << "Try to display out of bound data :" << RESET << std::endl;
			try {
				std::cout << GREEN << "\t- c_floattab[" << n << "] = " << c_floattab[n] << RESET << std::endl; }
			catch (std::exception &e) {
				std::cout << BRED << e.what() << RESET << std::endl; }
			try {
				std::cout << GREEN << "\t- c_floattab[-1] = " << c_floattab[-1] << RESET << std::endl; }
			catch (std::exception &e) {
				std::cout << BRED << e.what() << RESET << std::endl; }

			std::cout << std::endl;

			std::cout << BYELLOW << "Modification of the last data of c_floattab.." << RESET << std::endl << std::endl;
			for (c_floattab[n-1] = static_cast<double> (rand()) / (static_cast<double> (RAND_MAX/1000.0)); c_floattab[n-1] == floattab[n-1]; void()) {
				c_floattab[n-1] = static_cast<double> (rand()) / (static_cast<double> (RAND_MAX/1000.0)); }
			std::cout << BGREEN << "Display it and compare to original :" << RESET << std::endl;
			std::cout << GREEN << "\t - floattab[" << n-1 << "] = " << CYAN << floattab[n-1] << std::endl;
			std::cout << GREEN << "\t - c_floattab[" << n-1 << "] = " << CYAN << c_floattab[n-1] << std::endl;

			std::cout << std::endl;

			std::cout << BGREEN << "Display of floattab & c_floattab :" << RESET << std::endl;
			std::cout << GREEN << "\t" << floattab << RESET << std::endl;
			std::cout << GREEN << "\t" << c_floattab << RESET << std::endl; }
		catch (std::exception &e) {
			std::cout << SRED << BRED << "BIG ERROR ==> " << e.what() << std::endl; }
	
		std::cout << std::endl << std::endl;
		/*================================*/
		/*           CHAR ARRAY           */
		/*================================*/
		
		std::cout << std::endl << "\t\t" << SGREEN << BGREEN << "Tests with Array in CHAR :" << RESET << std::endl << std::endl;
		try {
			unsigned int	n = 8;
			std::cout << BYELLOW << "Creation of chartab, contents [" << n << "] int randomly generated.." << RESET << std::endl << std::endl;
			Array<char>	chartab(n);
			for (unsigned int i = 0; i < n; i++) {
				chartab[i] = 'A' + (rand() % 26); }

			std::cout << BGREEN << "Display of chartab successive with operator [] :" << GREEN << std::endl << "\t";
			for (unsigned int i = 0; i < n; i++) {
				std::cout << chartab[i];
				if (i != n - 1) {
					std::cout << " - "; } }
			std::cout << RESET << std::endl << std::endl;

			std::cout << BGREEN << "Display of chartab with operator << :" << RESET << std::endl;
			std::cout << GREEN << "\t" << chartab << RESET << std::endl;

			std::cout << std::endl;

			std::cout << BGREEN << "Try to display out of bound data :" << RESET << std::endl;
			try {
				std::cout << GREEN << "\t- chartab[" << n << "] = " << chartab[n] << RESET << std::endl; }
			catch (std::exception &e) {
				std::cout << BRED << e.what() << RESET << std::endl; }
			try {
				std::cout << GREEN << "\t- chartab[-1] = " << chartab[-1] << RESET << std::endl; }
			catch (std::exception &e) {
				std::cout << BRED << e.what() << RESET << std::endl; }

			std::cout << std::endl;

			std::cout << BYELLOW << "Creation of c_chartab, copy of chartab.." << RESET << std::endl << std::endl;
			Array<char>	c_chartab(chartab);

			std::cout << BGREEN << "Display of c_chartab successive with operator [] :" << GREEN << std::endl << "\t";
			for (unsigned int i = 0; i < n; i++) {
				std::cout << c_chartab[i];
				if (i != n - 1) {
					std::cout << " - "; } }
			std::cout << RESET << std::endl << std::endl;

			std::cout << BGREEN << "Display of c_chartab with operator << :" << RESET << std::endl;
			std::cout << GREEN << "\t" << c_chartab << RESET << std::endl;

			std::cout << std::endl;

			std::cout << BGREEN << "Try to display out of bound data :" << RESET << std::endl;
			try {
				std::cout << GREEN << "\t- c_chartab[" << n << "] = " << c_chartab[n] << RESET << std::endl; }
			catch (std::exception &e) {
				std::cout << BRED << e.what() << RESET << std::endl; }
			try {
				std::cout << GREEN << "\t- c_chartab[-1] = " << c_chartab[-1] << RESET << std::endl; }
			catch (std::exception &e) {
				std::cout << BRED << e.what() << RESET << std::endl; }

			std::cout << std::endl;

			std::cout << BYELLOW << "Modification of the last data of c_chartab.." << RESET << std::endl << std::endl;
			for (c_chartab[n-1] = 'A' + (rand() % 26); c_chartab[n-1] == chartab[n-1]; void()) {
				c_chartab[n-1] = 'A' + (rand() % 26); }
			std::cout << BGREEN << "Display it and compare to original :" << RESET << std::endl;
			std::cout << GREEN << "\t - chartab[" << n-1 << "] = " << CYAN << chartab[n-1] << std::endl;
			std::cout << GREEN << "\t - c_chartab[" << n-1 << "] = " << CYAN << c_chartab[n-1] << std::endl;

			std::cout << std::endl;

			std::cout << BGREEN << "Display of chartab & c_chartab :" << RESET << std::endl;
			std::cout << GREEN << "\t" << chartab << RESET << std::endl;
			std::cout << GREEN << "\t" << c_chartab << RESET << std::endl; }
		catch (std::exception &e) {
			std::cout << SRED << BRED << "BIG ERROR ==> " << e.what() << std::endl; }

		std::cout << std::endl << std::endl;
		/*================================*/
		/*          STRING ARRAY          */
		/*================================*/
		
		std::cout << std::endl << "\t\t" << SGREEN << BGREEN << "Tests with Array in std::string :" << RESET << std::endl << std::endl;
		try {
			unsigned int	n = 3;
			std::cout << BYELLOW << "Creation of stringtab, contents [" << n << "] int randomly generated.." << RESET << std::endl << std::endl;
			Array<std::string>	stringtab(n);
			for (unsigned int i = 0; i < n; i++) {
				stringtab[i] = ft_str_generator(); }

			std::cout << BGREEN << "Display of stringtab successive with operator [] :" << GREEN << std::endl << "\t";
			for (unsigned int i = 0; i < n; i++) {
				std::cout << stringtab[i];
				if (i != n - 1) {
					std::cout << " - "; } }
			std::cout << RESET << std::endl << std::endl;

			std::cout << BGREEN << "Display of stringtab with operator << :" << RESET << std::endl;
			std::cout << GREEN << "\t" << stringtab << RESET << std::endl;

			std::cout << std::endl;

			std::cout << BGREEN << "Try to display out of bound data :" << RESET << std::endl;
			try {
				std::cout << GREEN << "\t- stringtab[" << n << "] = " << stringtab[n] << RESET << std::endl; }
			catch (std::exception &e) {
				std::cout << BRED << e.what() << RESET << std::endl; }
			try {
				std::cout << GREEN << "\t- stringtab[-1] = " << stringtab[-1] << RESET << std::endl; }
			catch (std::exception &e) {
				std::cout << BRED << e.what() << RESET << std::endl; }

			std::cout << std::endl;

			std::cout << BYELLOW << "Creation of c_stringtab, copy of stringtab.." << RESET << std::endl << std::endl;
			Array<std::string>	c_stringtab(stringtab);

			std::cout << BGREEN << "Display of c_stringtab successive with operator [] :" << GREEN << std::endl << "\t";
			for (unsigned int i = 0; i < n; i++) {
				std::cout << c_stringtab[i];
				if (i != n - 1) {
					std::cout << " - "; } }
			std::cout << RESET << std::endl << std::endl;

			std::cout << BGREEN << "Display of c_stringtab with operator << :" << RESET << std::endl;
			std::cout << GREEN << "\t" << c_stringtab << RESET << std::endl;

			std::cout << std::endl;

			std::cout << BGREEN << "Try to display out of bound data :" << RESET << std::endl;
			try {
				std::cout << GREEN << "\t- c_stringtab[" << n << "] = " << c_stringtab[n] << RESET << std::endl; }
			catch (std::exception &e) {
				std::cout << BRED << e.what() << RESET << std::endl; }
			try {
				std::cout << GREEN << "\t- c_stringtab[-1] = " << c_stringtab[-1] << RESET << std::endl; }
			catch (std::exception &e) {
				std::cout << BRED << e.what() << RESET << std::endl; }

			std::cout << std::endl;

			std::cout << BYELLOW << "Modification of the last data of c_stringtab.." << RESET << std::endl << std::endl;
			for (c_stringtab[n-1] = ft_str_generator(); c_stringtab[n-1] == stringtab[n-1]; void()) {
				c_stringtab[n-1] = ft_str_generator(); }
			std::cout << BGREEN << "Display it and compare to original :" << RESET << std::endl;
			std::cout << GREEN << "\t - stringtab[" << n-1 << "] = " << CYAN << stringtab[n-1] << std::endl;
			std::cout << GREEN << "\t - c_stringtab[" << n-1 << "] = " << CYAN << c_stringtab[n-1] << std::endl;

			std::cout << std::endl;

			std::cout << BGREEN << "Display of stringtab & c_stringtab :" << RESET << std::endl;
			std::cout << GREEN << "\t" << stringtab << RESET << std::endl;
			std::cout << GREEN << "\t" << c_stringtab << RESET << std::endl; }
		catch (std::exception &e) {
			std::cout << SRED << BRED << "BIG ERROR ==> " << e.what() << std::endl; }
	}

	std::cout << RESET << std::endl;
	return 0;
}