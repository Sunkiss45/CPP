/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:53:04 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/16 19:00:48 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cmath>

#define RESET "\e[0m"
#define RED "\e[0;31m"
#define BRED "\e[1;31m"
#define SRED "\e[4;31m"
#define GREEN "\e[0;32m"
#define BGREEN "\e[1;32m"
#define SGREEN "\e[4;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define BBLUE "\e[1;34m"
#define SBLUE "\e[4;34m"
#define PURPLE "\e[0;35m"
#define CYAN "\e[0;36m"
#define ORANGE "\033[38;2;255;165;0m"

template<typename T>
void	iter(T *tab, size_t size, void (*fct)(T const &x)) {
	for (size_t y = 0; y < size; y++) {
		fct(tab[y]); }
	return; }

template<typename T>
void	diffTo42(T const & value) {	// fonctionne sur int
	std::cout << 42 << " - " << value << " = " << 42 - value << std::endl; 
	return; }

template<typename T>
void addSuffixe(T const & value) {	// fonctionne sur string
	std::cout << value + " Student !" << std::endl;
	return; }

template<typename T>
void printSquare(T const & value) {	// fonctionne sur Class (appel a getN)
	std::cout << value.getN() << " * " << value.getN() << " = " << value.getN() * value.getN() << std::endl;
	return; }