/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 20:35:08 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/19 14:27:06 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cstdlib>
# include <cmath>
# include <climits>

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
#define PINK "\e[0;35m"
#define BPINK "\e[1;35m"
#define SPINK "\e[4;35m"
#define CYAN "\e[0;36m"
#define BCYAN "\e[1;36m"
#define SCYAN "\e[4;36m"

#define IPURPLE "\e[3;38;5;128m"

// ATTENTION : utiliser la forme canonique de Coplien !!

template<typename T>
class Array					// classe mere/abstraite/concrete/interface
{

	public :

		Array<T>(void) : _tab(NULL), _n(0) {	// constructeur par défaut
			// std::cout << "Array Default constructor called." << std::endl;
			return; }

		Array<T>(Array const &copy) {	// constructeur par copie
			if (this == &copy) {
				return; }
			this->_n = 0;
			this->_tab = NULL;
			*this = copy;
			// std::cout << "Array Copy constructor called." << std::endl;
			return; }

		Array<T>(unsigned int n) {	// constructeur by param
			if (static_cast<int>(n) <= 0)
				throw Array<T>::IndexInvalidCreation();
			this->_n = n;
			this->_tab = new T[this->_n];
			// std::cout << "Array Param constructor called." << std::endl;
			return; }

		~Array<T>(void) {	// destructeur
			if (this->_n)
				delete [] _tab;
			// std::cout << "Array Destructor called." << std::endl;
			return; }


		Array<T> &operator=(Array const &rhs) {	// surcharge d'assignation
			if (this->_n)
				delete [] _tab;
			this->_n = rhs._n;
			this->_tab = new T[this->_n];
			for (unsigned int i = 0; i < this->_n; i++) {
				this->_tab[i] = rhs._tab[i]; }
			// std::cout << "Array Assignment operator called." << std::endl;
			return (*this); }


		T	&operator[](unsigned int index) {	//----------// surcharge opé d'indice
			if (index >= this->size() || index < 0) {
				throw Array<T>::IndexInvalidRead(); }
			return (this->_tab[index]); }

		T const	&operator[](unsigned int index) const { //------// surcharge opé d'indice const !
			if (index >= this->size() || index < 0) {
				throw Array<T>::IndexInvalidRead(); }
			return (this->_tab[index]); }


		unsigned int	size(void) const {
			return (this->_n); }
		
		T	*getTab(void) const {
			return (this->_tab); }


		class IndexInvalidRead : public std::exception	//------// Nested Class for exception
		{
			virtual const char	*what() const throw() {
				return ("Array index out of bound, exiting"); } 
		};

		class IndexInvalidCreation : public std::exception	//------// Nested Class for exception
		{
			virtual const char	*what() const throw() {
				return ("Try to init Array<T> with invalid size, exiting"); } 
		};

	private :
		T				*_tab;
		unsigned int	_n;
		
};

template<typename T>
std::ostream &operator<<(std::ostream &out, Array<T> const &rhs) {
	out << "[ ";
	for (unsigned int i = 0; i < rhs.size(); i++) {
		out << rhs[i];
		if (i != rhs.size() - 1) {
			out << ", "; } }
	out << " ]"; 
	return (out); }
