/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 16:52:35 by ebarguil          #+#    #+#             */
/*   Updated: 2023/07/01 18:22:36 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include "ft_color.hpp"

int main(int ac, char **av) {

	if (ac < 2) {
		std::cout << BRED << "Error" << RESET << std::endl;
		return (1); }

	std::vector<int> vec;
	std::deque<int> deq;

	for (int i = 1; av[i]; i++) {
		int a = std::atoi(av[i]);
		if (a <= 0) {
			std::cout << BRED << "Error" << RESET << std::endl;
			return (1); }
		vec.push_back(a);
		deq.push_back(a);
	}

	sort(vec, deq);

	return 0;
}