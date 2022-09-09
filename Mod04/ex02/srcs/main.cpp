/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:02:27 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/09 18:05:04 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "Brain.hpp"

int	main() {

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;


	// Animal	*rdm1 = new Animal();
	// Animal	rdm2;

	// rdm1->makeSound();
	// rdm2.makeSound();


	// Animal	*ani[4];

	// for(int i = 0; i < 4; i++) {
	// 	if (i % 2) {
	// 		ani[i] = new Cat(); }
	// 	else {
	// 		ani[i] = new Dog(); } }

	// for(int i = 0; i < 4; i++) {
	// 	delete ani[i]; }


	// Dog            *Rantanplan = new Dog();
	// Cat            *Grosminet = new Cat();

	// std::cout << std::endl;
	// Rantanplan->setIdeas("eat and/or sleep...", 0);
	// Grosminet->setIdeas("catch Titi !", 0);
	// std::cout << "ideas Rantanplan : " << Rantanplan->getIdeas(0) << std::endl;
	// std::cout << "ideas Grosminet : " << Grosminet->getIdeas(0) << std::endl;
	// std::cout << std::endl;

	// Cat            *Vermithrax = new Cat(*Grosminet);
	// Dog            *Lassie = new Dog(*Rantanplan);

	// // Cat	Vermithrax(*Grosminet);
	// // Dog	Lassie(*Rantanplan);

	// std::cout << std::endl;

	// std::cout << "ideas Vermithrax : " << Vermithrax->getIdeas(0) << std::endl;
	// std::cout << "ideas Lassie : " << Lassie->getIdeas(0) << std::endl;

	// std::cout << std::endl << "Setting new idea to Lassie & Vermithrax !" << std::endl;
	// Lassie->setIdeas("saving people", 0);
	// Vermithrax->setIdeas("breathing fire !", 0);
	// std::cout << "ideas Rantanplan : " << Rantanplan->getIdeas(0) << std::endl;
	// std::cout << "ideas Grosminet : " << Grosminet->getIdeas(0) << std::endl;
	// std::cout << "ideas Vermithrax : " << Vermithrax->getIdeas(0) << std::endl;
	// std::cout << "ideas Lassie : " << Lassie->getIdeas(0) << std::endl;
	// std::cout << std::endl;

	// delete Lassie;
	// delete Vermithrax;
	// delete Rantanplan;
	// delete Grosminet;

	return 0; }