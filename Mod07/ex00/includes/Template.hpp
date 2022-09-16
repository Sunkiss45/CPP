/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:13:51 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/16 17:38:47 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

#define RESET "\e[0m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PURPLE "\e[0;35m"
#define CYAN "\e[0;36m"
#define ORANGE "\033[38;2;255;165;0m"

template<typename T>
T const &	min(T const & a, T const & b) {
	return (a < b ? a : b); }

template<typename T>
T const &	max(T const & a, T const & b) {
	return (a > b ? a : b); }

template<typename T>
void	swap(T & a, T & b) {
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
	return; }