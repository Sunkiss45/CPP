/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 23:49:14 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/17 00:50:21 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Span::Span(void) {	// constructeur par défaut
	std::cout << "Span Default constructor called." << std::endl;
	this->_n = 0;
	return; }

Span::Span(Span const &copy) {	// constructeur par copie
	std::cout << "Span Copy constructor called." << std::endl;
	*this = copy;
	return; }

Span::Span(unsigned int n) {	// constructeur by param
	std::cout << "Span String constructor called." << std::endl;
	this->_n = n;
	return; }

Span::~Span(void) {	// destructeur
	std::cout << "Span Destructor called." << std::endl;
	return; }

//------------------------------   SURCHARGES   ------------------------------//

Span		&Span::operator=(Span const &rhs) {
	std::cout << "Span Assignment operator called." << std::endl;
	this->_n = rhs._n;
	this->_vec = rhs._vec;
	return(*this); }

//---------------------------   SETTER / GETTER   ----------------------------//


//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	Span::addNumber(int i) {
	if (this->_vec.size() < this->_n) {
		_vec.push_back(i); }
	else {
		throw (Span::ReachMaxSize()); }
	return; }

int	Span::shortestSpan(void) {
	if (this->_vec.size() < 2) {
		throw (Span::Impossible()); }

	std::vector<int>			tmp = this->_vec;
	std::vector<int>::iterator	it;
	int							shortest;

	sort(tmp.begin(), tmp.end());
	shortest = *(tmp.begin() + 1) - *tmp.begin();
	for (it = tmp.begin(); it != (tmp.end() - 1); it++) {
		if (shortest > (*(it + 1) - *it)) {
			shortest = *(it + 1) - *it; } }
	return (shortest);
}

int	Span::longestSpan(void) {
	if (this->_vec.size() < 2) {
		throw (Span::Impossible()); }
	
	std::vector<int>::iterator	min;
	std::vector<int>::iterator	max;

	max = max_element(_vec.begin(), _vec.end());
	min = min_element(_vec.begin(), _vec.end());

	return (*max - *min);
}

void	Span::rangeIter(unsigned int x) {
	if (x > _n) {
		throw (Span::Impossible()); }
	
	srand(time(NULL));
	for (unsigned int b = 0; b < x; b++) {
		_vec.push_back(rand()); }
	return;
}

//-------------------------   NON MEMBER FUNCTIONS   -------------------------//
