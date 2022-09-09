/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:02:36 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/09 14:14:24 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

// ATTENTION : utiliser la forme canonique de Coplien !!

class Animal					// classe mere/abstraite/concrete/interface
{

	public :
		Animal(void);					// constructeur par défaut
		Animal(Animal const &copy);					// constructeur par copie
		virtual ~Animal(void);					// destructeur

		Animal &operator=(Animal const &rhs);					// surcharge d'assignation

		std::string const	&getType(void) const;

		virtual void	makeSound(void) const;

	protected :
		std::string	_type;
};