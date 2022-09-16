/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 22:36:53 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/16 22:54:49 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <algorithm>
# include <list>
# include <vector>

#define RESET "\e[0m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PURPLE "\e[0;35m"
#define CYAN "\e[0;36m"

class NotFound : public std::exception
{
	virtual const char *what() const throw() {
		return ("Value has not been found in this container..."); }
};

template<typename T>
typename T::iterator	easyfind(T &con, int nard) {
	typename T::iterator	hurluberlu = find(con.begin(), con.end(), nard);
	if (hurluberlu == con.end()) {
		throw (NotFound()); }
	return (hurluberlu); }