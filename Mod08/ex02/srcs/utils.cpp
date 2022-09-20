/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:47:18 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/20 21:01:27 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	int_little_rand(void) { return ((rand() % 20001) - 10000); }

float	float_little_rand(void) { return (static_cast<float> (rand()) / (static_cast<float> (RAND_MAX/1000.0))); }

std::string	ft_str_generator(void) {
	unsigned size = (rand() % 6) + 5;
	std::string	str;

	for (unsigned int i = 0; i < size; i++) {
		if (rand() % 2) {
			str += 'A' + (rand() % 26); }
		else {
			str += 'a' + (rand() % 26); } }
	return str; }



MutantStack<int>	IntGenMutantStack(unsigned int x) {
	MutantStack<int>	rdm;

	for (unsigned int i = 0; i < x; i++) {
		rdm.push(int_little_rand()); }

	return rdm; }

std::vector<int>	IntGenVector(unsigned int x) {
	std::vector<int>	rdm;

	for (unsigned int i = 0; i < x; i++) {
		rdm.push_back(int_little_rand()); }

	return rdm; }



MutantStack<float>	FloatGenMutantStack(unsigned int x) {
	MutantStack<float>	rdm;

	for (unsigned int i = 0; i < x; i++) {
		rdm.push(float_little_rand()); }

	return rdm; }

std::vector<float>	FloatGenVector(unsigned int x) {
	std::vector<float>	rdm;

	for (unsigned int i = 0; i < x; i++) {
		rdm.push_back(float_little_rand()); }

	return rdm; }



MutantStack<std::string>	StrGenMutantStack(unsigned int x) {
	MutantStack<std::string>	rdm;

	for (unsigned int i = 0; i < x; i++) {
		rdm.push(ft_str_generator()); }

	return rdm; }

std::vector<std::string>	StrGenVector(unsigned int x) {
	std::vector<std::string>	rdm;

	for (unsigned int i = 0; i < x; i++) {
		rdm.push_back(ft_str_generator()); }

	return rdm; }