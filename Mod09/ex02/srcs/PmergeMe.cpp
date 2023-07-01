/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 16:52:01 by ebarguil          #+#    #+#             */
/*   Updated: 2023/07/01 18:35:37 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include "ft_color.hpp"

// Fusionne deux tableaux triés en un seul tableau trié
template<typename T>
void merge(T& arr, int left, int middle, int right) {
	int n1 = middle - left + 1;
	int n2 = right - middle;

	// Création des tableaux temporaires
	T L(n1);
	T R(n2);

	// Copie des données dans les tableaux temporaires
	for (int i = 0; i < n1; i++)
		L[i] = arr[left + i];
	for (int j = 0; j < n2; j++)
		R[j] = arr[middle + 1 + j];

	// Fusion des tableaux temporaires

	int i = 0; // Index initial du premier sous-tableau
	int j = 0; // Index initial du second sous-tableau
	int k = left; // Index initial du tableau fusionné

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		} else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	// Copie des éléments restants de L[] s'il y en a
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	// Copie des éléments restants de R[] s'il y en a
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

// Fonction de tri fusion
template<typename T>
void mergeSort(T& arr, int left, int right) {
	if (left < right) {
		int middle = left + (right - left) / 2;

		// Tri récursif des deux moitiés
		mergeSort(arr, left, middle);
		mergeSort(arr, middle + 1, right);

		// Fusion des deux moitiés triées
		merge(arr, left, middle, right);
	}
}

// Fonction utilitaire pour afficher le tableau
template<typename T>
void printArray(const T& arr) {
	int n = arr.size();
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << " ";
	std::cout << RESET << std::endl;
}


void	sort(std::vector<int> vec, std::deque<int> deq){
	std::cout << YELLOW << "Vector avant le tri : " << RESET << BYELLOW;
	printArray(vec);

	int n = vec.size();
	std::clock_t s = std::clock();
	mergeSort(vec, 0, n - 1);
	std::clock_t e = std::clock() - s;

	std::cout << GREEN << "Vector après le tri (" << RESET << IPURPLE << e << RESET << GREEN << " us) : " << RESET << BGREEN;
	printArray(vec);


	std::cout << YELLOW << "Deque avant le tri : " << RESET << BYELLOW;
	printArray(deq);

	n = deq.size();
	s = std::clock();
	mergeSort(deq, 0, n - 1);
	e = std::clock() - s;

	std::cout << GREEN << "Deque après le tri (" << RESET << IPURPLE << e << RESET << GREEN << " us) : " << RESET << BGREEN;
	printArray(deq);
}