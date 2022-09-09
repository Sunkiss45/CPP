/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:02:27 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/09 14:33:00 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main() {

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;


	// Animal	rdm;
	// std::cout << std::endl;
	// Cat		cat;
	// std::cout << std::endl;
	// Dog		dog;
	// std::cout << std::endl;

	// rdm.makeSound();
	// cat.makeSound();
	// dog.makeSound();
	// std::cout << std::endl << std::endl;


	// Animal	*vrdm = new Animal();
	// std::cout << std::endl;
	// Animal	*vcat = new Cat();
	// std::cout << std::endl;
	// Animal	*vdog = new Dog();
	// std::cout << std::endl;

	// vrdm->makeSound();
	// vcat->makeSound();
	// vdog->makeSound();
	// std::cout << std::endl;

	// delete vdog;
	// delete vcat;
	// delete vrdm;
	// std::cout << std::endl << std::endl;


	// WrongAnimal	*wcat = new WrongCat();
	// std::cout << std::endl;

	// wcat->makeSound();
	// std::cout << std::endl;

	// delete wcat;
	// std::cout << std::endl << std::endl;

	return 0; }