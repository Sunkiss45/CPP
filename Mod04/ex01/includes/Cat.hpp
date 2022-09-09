/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:09:32 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/09 15:12:34 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

// ATTENTION : utiliser la forme canonique de Coplien !!

class Cat : public Animal					// classe mere/abstraite/concrete/interface
{

	public :
		Cat(void);					// constructeur par défaut
		Cat(Cat const &copy);					// constructeur par copie
		~Cat(void);					// destructeur

		Cat &operator=(Cat const &rhs);					// surcharge d'assignation

		std::string const	&getType(void) const;

		void	makeSound(void) const;

	private :
		Brain	*_brain;

};