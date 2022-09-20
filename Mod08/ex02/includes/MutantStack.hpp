/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 00:55:16 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/20 21:00:54 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <stack>
# include <cmath>
# include <vector>
# include <algorithm>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() {}
	MutantStack(const MutantStack<T>& src) { *this = src; }
	MutantStack<T>& operator=(const MutantStack<T>& rhs) 
	{
		this->c = rhs.c;
		return *this;
	}
	~MutantStack() {}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }
};

MutantStack<int>	IntGenMutantStack(unsigned int x);
std::vector<int>	IntGenVector(unsigned int x);

MutantStack<float>	FloatGenMutantStack(unsigned int x);
std::vector<float>	FloatGenVector(unsigned int x);

MutantStack<std::string>	StrGenMutantStack(unsigned int x);
std::vector<std::string>	StrGenVector(unsigned int x);