/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:51:50 by ebarguil          #+#    #+#             */
/*   Updated: 2023/06/25 17:32:59 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include "ft_color.hpp"

ReversePolish::ReversePolish(char *input) {
	this->_input = std::string(input);
}

ReversePolish::~ReversePolish() {}

void ReversePolish::parsingInput() {

	std::stringstream str(this->_input);
	// std::cout << IPURPLE << "[" << this->_input << "]" << RESET << std::endl;

	int num = 0;
	int	tok = 0;
	std::stack<int> snum;
	std::stack<char>	stok;
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
				stok.push(n.c_str()[0]);
				continue; }
			else if (n != "0") {
				throw(RPNError()); }
			else {
				num++;
				snum.push(a); } }
		else if (a < 0 || a > 9) {
			throw(RPNError()); }
		else {
			num++;
			snum.push(a); }
	}
	// std::cout << BLUE << "num = " << num << RESET << " | " << CYAN << "tok = " << tok << RESET << std::endl;
	if (num != tok + 1) {
		throw(RPNError()); }

	while (!snum.empty()) {
		this->_number.push(snum.top());
		snum.pop(); }
	while (!stok.empty()) {
		this->_token.push(stok.top());
		stok.pop(); }

	return;
}

void ReversePolish::calculation() {
	while (this->_number.size() > 1) {
		int	one = this->_number.top();
		this->_number.pop();
		int two = this->_number.top();
		this->_number.pop();
		
		char tok = this->_token.top();
		this->_token.pop();

		switch (tok) {
			case '+':
				this->_number.push(one + two);
				break;
			case '-':
				this->_number.push(one - two);
				break;
			case '/':
				if (one == 0 || two == 0) {
					throw(RPNError()); }
				this->_number.push(one / two);
				break;
			case '*':
				this->_number.push(one * two);
				break;
			default:
				throw(RPNError());
		}
	}
	std::cout << BGREEN << this->_number.top() << RESET << std::endl;
	return;
}