/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:59:26 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/09 16:34:02 by ebarguil         ###   ########.fr       */
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

		std::string const	getIdeas(int n) const;
		void				setIdeas(std::string const str, int n);

	private :
		std::string	_ideas[100];

};