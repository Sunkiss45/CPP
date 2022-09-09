/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:09:34 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/09 17:08:29 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

// ATTENTION : utiliser la forme canonique de Coplien !!

class Dog : public Animal					// classe mere/abstraite/concrete/interface
{

	public :
		Dog(void);					// constructeur par défaut
		Dog(Dog const &copy);					// constructeur par copie
		~Dog(void);					// destructeur

		Dog &operator=(Dog const &rhs);					// surcharge d'assignation

		std::string const	&getType(void) const;
		std::string const	getIdeas(int n) const;
		void				setIdeas(std::string const str, int n);

		void	makeSound(void) const;

	private :
		Brain	*_brain;

};