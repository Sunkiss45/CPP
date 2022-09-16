/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 20:35:08 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/16 22:08:00 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cstdlib>

// ATTENTION : utiliser la forme canonique de Coplien !!

template<typename T>
class Array					// classe mere/abstraite/concrete/interface
{

	public :

		Array<T>(void) : _tab(NULL), _n(0) {	// constructeur par défaut
			std::cout << "Array Default constructor called." << std::endl;
			return; }

		Array<T>(Array const &copy) {	// constructeur par copie
			if (this == &copy) {
				return; }
			this->_n = 0;
			this->_tab = NULL;
			*this = copy;
			std::cout << "Array Copy constructor called." << std::endl;
			return; }

		Array<T>(unsigned int n) {	// constructeur by param
			if (static_cast<int>(n) <= 0)
				throw Array<T>::IndexPb();
			this->_n = n;
			this->_tab = new T[this->_n];
			std::cout << "Array Param constructor called." << std::endl;
			return; }

		~Array<T>(void) {	// destructeur
			if (this->_n)
				delete [] _tab;
			std::cout << "Array Destructor called." << std::endl;
			return; }


		Array<T> &operator=(Array const &rhs) {	// surcharge d'assignation
			if (this->_n)
				delete [] _tab;
			this->_n = rhs._n;
			this->_tab = new T[this->_n];
			for (unsigned int i = 0; i < this->_n; i++) {
				this->_tab[i] = rhs._tab[i]; }
			std::cout << "Array Assignment operator called." << std::endl;
			return (*this); }


		T	&operator[](unsigned int index) {	//----------// surcharge opé d'indice
			if (index >= this->size() || index < 0) {
				throw Array<T>::IndexPb(); }
			return (this->_tab[index]); }

		T const	&operator[](unsigned int index) const { //------// surcharge opé d'indice const !
			if (index >= this->size() || index < 0) {
				throw Array<T>::IndexPb(); }
			return (this->_tab[index]); }


		unsigned int	size(void) const {
			return (this->_n); }
		
		T	*getTab(void) const {
			return (this->_tab); }


		class IndexPb : public std::exception	//------// Nested Class for exception
		{
			virtual const char	*what() const throw() {
				return ("Array index out of bound, exiting"); } 
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
