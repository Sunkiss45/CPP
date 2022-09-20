/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 22:36:53 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/20 15:29:02 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <algorithm>
# include <list>
# include <vector>
# include <deque>
# include <cmath>
# include <climits>

class ErrorNotFound : public std::exception
{
	virtual const char *what() const throw() {
		return ("Code error 00 : Value not found"); }
};

class ErrorNotEnough : public std::exception
{
	virtual const char *what() const throw() {
		return ("Code error 01 : Not enough value"); }
};

template<typename T>
typename T::iterator	easyfind(T &c, int val) {
	typename T::iterator	hurluberlu = find(c.begin(), c.end(), val);
	if (hurluberlu == c.end()) {
		throw (ErrorNotFound()); }
	return (hurluberlu); }