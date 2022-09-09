/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:09:32 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/09 14:17:49 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "WrongAnimal.hpp"

// ATTENTION : utiliser la forme canonique de Coplien !!

class WrongCat : public WrongAnimal					// classe mere/abstraite/concrete/interface
{

	public :
		WrongCat(void);					// constructeur par défaut
		WrongCat(WrongCat const &copy);					// constructeur par copie
		~WrongCat(void);					// destructeur

		WrongCat &operator=(WrongCat const &rhs);					// surcharge d'assignation

		std::string const	&getType(void) const;

		void	makeSound(void) const;
	
};