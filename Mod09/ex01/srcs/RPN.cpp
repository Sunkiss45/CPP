/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:51:50 by ebarguil          #+#    #+#             */
/*   Updated: 2023/07/01 15:20:01 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include "ft_color.hpp"

ReversePolish::ReversePolish(char *input) {
	this->_input = std::string(input);
}

ReversePolish::~ReversePolish() {}

int	ReversePolish::GetNum() {
	return (this->_number.top());
}

void ReversePolish::parsingInput() {

	std::stringstream str(this->_input);
	// std::cout << IPURPLE << "[" << this->_input << "]" << RESET << std::endl;

	int num = 0;
	int	tok = 0;
	while (1) {
		std::string n;
		str >> n;
		// std::cout << GREEN << "[" << n << "]" << RESET;
		if (str.fail()) {
			// std::cout << IRED << " stop" << RESET << std::endl;
			break; }
		// std::cout << IGREEN << " pass" << RESET << std::endl;
		int a = std::atoi(n.c_str());
		if (a == 0) {
			// std::cout << ORANGE << "[" << a << "]" << RESET << std::endl;
			if (n == "+" || n == "-" || n == "/" || n == "*") {
				tok++;
				calculation(n.c_str()[0]);
				continue; }
			else if (n != "0") {
				throw(RPNError()); }
			else {
				num++;
				this->_number.push(a); } }
		else if (a < 0 || a > 9) {
			throw(RPNError()); }
		else {
			num++;
			this->_number.push(a); }
	}
	// std::cout << BLUE << "num = " << num << RESET << " | " << CYAN << "tok = " << tok << RESET << std::endl;
	if (num != tok + 1) {
		throw(RPNError()); }

	return;
}

void ReversePolish::calculation(char tok) {
	if (this->_number.size() < 2) {
		throw(RPNError()); }
	int	two = this->_number.top();
	this->_number.pop();
	int one = this->_number.top();
	this->_number.pop();

	operant(tok, one, two);

	return;
}

void ReversePolish::operant(char tok, int one, int two) {
	switch (tok) {
		case '+':
			this->_number.push(one + two);
			break;
		case '-':
			this->_number.push(one - two);
			break;
		case '/':
			if (two == 0) {
				throw(RPNError()); }
			this->_number.push(one / two);
			break;
		case '*':
			this->_number.push(one * two);
			break;
		default:
			throw(RPNError()); }
	return;
}