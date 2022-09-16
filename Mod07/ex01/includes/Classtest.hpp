/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classtest.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:52:34 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/16 18:04:59 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

// ATTENTION : utiliser la forme canonique de Coplien !!

class Classtest											// classe concrete
{
	
	public :
		Classtest(void);								// constructeur par défaut
		Classtest(Classtest const &copy);				// constructeur par copie
		Classtest(int n);								// constructeur by param
		~Classtest(void);								// destructeur

		Classtest	&operator=(Classtest const &rhs);	// surcharge d'assignation

		bool 		operator<(Classtest const &rhs) const;
		bool 		operator>(Classtest const &rhs) const;

		int			getN(void) const;
		void 		setN(int n);

	private :
		int			_n;
};

std::ostream		&operator<<(std::ostream &out, Classtest const &rhs);