/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:13:51 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/18 15:13:51 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cstdlib>

#define RESET "\e[0m"
#define RED "\e[0;31m"
#define BRED "\e[1;31m"
#define SRED "\e[4;31m"
#define GREEN "\e[0;32m"
#define BGREEN "\e[1;32m"
#define SGREEN "\e[4;32m"
#define YELLOW "\e[0;33m"
#define BYELLOW "\e[1;33m"
#define SYELLOW "\e[4;33m"
#define BLUE "\e[0;34m"
#define BBLUE "\e[1;34m"
#define SBLUE "\e[4;34m"
#define PURPLE "\e[0;35m"
#define BPURPLE "\e[1;35m"
#define SPURPLE "\e[4;35m"
#define CYAN "\e[0;36m"
#define BCYAN "\e[1;36m"
#define SCYAN "\e[4;36m"

template<typename T>
T const &	min(T const & a, T const & b) {
	return (a < b ? a : b); }

template<typename T>
T const &	max(T const & a, T const & b) {
	return (a > b ? a : b); }

template<typename T>
void	swap(T & a, T & b) {
	T tmp;

	tmp = a; a = b; b = tmp;
	return; }