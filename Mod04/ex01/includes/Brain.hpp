/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:59:26 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/09 15:14:40 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

// ATTENTION : utiliser la forme canonique de Coplien !!

class Brain					// classe mere/abstraite/concrete/interface
{

	public :
		Brain(void);					// constructeur par défaut
		Brain(Brain const &copy);					// constructeur par copie
		~Brain(void);					// destructeur

		Brain &operator=(Brain const &rhs);					// surcharge d'assignation

		std::string const	&getName(void) const;

	private :
		std::string	_ideas[100];

};