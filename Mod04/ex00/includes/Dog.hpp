/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:09:34 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/09 14:17:53 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Animal.hpp"

// ATTENTION : utiliser la forme canonique de Coplien !!

class Dog : public Animal					// classe mere/abstraite/concrete/interface
{

	public :
		Dog(void);					// constructeur par défaut
		Dog(Dog const &copy);					// constructeur par copie
		~Dog(void);					// destructeur

		Dog &operator=(Dog const &rhs);					// surcharge d'assignation

		std::string const	&getType(void) const;

		void	makeSound(void) const;

};