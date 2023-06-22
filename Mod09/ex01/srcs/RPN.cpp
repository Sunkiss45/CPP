/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:51:50 by ebarguil          #+#    #+#             */
/*   Updated: 2023/06/22 18:06:00 by ebarguil         ###   ########.fr       */
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
	std::cout << IPURPLE << "[" << this->_input << "]" << RESET << std::endl;

	bool e = false;
	int num = 0;
	int	tok = 0;
	while (!e) {
		std::string n;
		str >> n;
		std::cout << GREEN << "[" << n << "]" << RESET;
		if (str.fail()) {
			std::cout << IRED << " stop" << RESET << std::endl;
			break; }
		std::cout << IGREEN << " pass" << RESET << std::endl;
		int a = std::atoi(n.c_str());
		if (a == 0) {
			std::cout << ORANGE << "[" << a << "]" << RESET << std::endl;
			if (n == "+" || n == "-" || n == "/" || n == "*") {
				tok++;
				continue; }
			else if (n != "0") {
				e = true; }
			else {
				num++; } }
		else if (a < 0 || a > 9) {
			e = true; }
		else {
			num++; }
	}
	std::cout << BLUE << "num = " << num << RESET << " | " << CYAN << "tok = " << tok << RESET << std::endl;
	if (num != tok + 1) {
		e = true; }
	std::cout << RED << e << RESET << std::endl;
	return;
}