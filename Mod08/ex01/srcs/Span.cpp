/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 23:49:14 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/20 18:40:48 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Span::Span(void) {	// constructeur par défaut
	// std::cout << "Span Default constructor called." << std::endl;
	this->_n = 0;
	return; }

Span::Span(Span const &copy) {	// constructeur par copie
	// std::cout << "Span Copy constructor called." << std::endl;
	*this = copy;
	return; }

Span::Span(unsigned int n) {	// constructeur by param
	// std::cout << "Span String constructor called." << std::endl;
	this->_n = n;
	return; }

Span::~Span(void) {	// destructeur
	// std::cout << "Span Destructor called." << std::endl;
	return; }

//------------------------------   SURCHARGES   ------------------------------//

Span		&Span::operator=(Span const &rhs) {
	// std::cout << "Span Assignment operator called." << std::endl;
	this->_n = rhs._n;
	this->_vec = rhs._vec;
	return(*this); }

//---------------------------   SETTER / GETTER   ----------------------------//

unsigned int	Span::size(void) const {
	return (this->_n); }

std::vector<int>	Span::getvec(void) const {
	return (this->_vec); }

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	Span::addNumber(int i) {
	if (this->_vec.size() < this->_n) {
		_vec.push_back(i); }
	else {
		throw (Span::ErrorMaxSize()); }
	return; }

int	Span::shortestSpan(void) {
	if (this->_vec.size() < 2) {
		throw (Span::ErrorNotEnough()); }

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
		throw (Span::ErrorNotEnough()); }
	
	std::vector<int>::iterator	min;
	std::vector<int>::iterator	max;

	max = max_element(_vec.begin(), _vec.end());
	min = min_element(_vec.begin(), _vec.end());

	return (*max - *min);
}

void	Span::rangeGen(void) {
	if (static_cast<int>(_n) < 0) {
		throw (Span::ErrorNotValid()); }

	_vec.resize(_n);
	std::generate(_vec.begin(), _vec.end(), little_rand); }

//-------------------------   NON MEMBER FUNCTIONS   -------------------------//

std::ostream &operator<<(std::ostream &out, Span const &rhs) {
	unsigned int i;
	for (i = 0; i < rhs.size(); i++) {
		out << rhs.getvec()[i];
		if (i != rhs.size() - 1) {
			out << ", "; }
		if ((i + 1) % 10 == 0 && i != rhs.size() - 1 && i != 0) {
			out << std::endl << "\t"; } }
	return (out); }

int	little_rand(void) { return ((rand() % 20001) - 10000); }
