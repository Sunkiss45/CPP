/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:17:28 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/09 14:27:01 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

// ATTENTION : utiliser la forme canonique de Coplien !!

class WrongAnimal					// classe mere/abstraite/concrete/interface
{

	public :
		WrongAnimal(void);					// constructeur par défaut
		WrongAnimal(WrongAnimal const &copy);					// constructeur par copie
		virtual ~WrongAnimal(void);					// destructeur

		WrongAnimal &operator=(WrongAnimal const &rhs);					// surcharge d'assignation

		std::string const	&getType(void) const;

		void	makeSound(void) const;

	protected :
		std::string	_type;
		
};