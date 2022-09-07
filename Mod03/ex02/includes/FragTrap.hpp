/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 11:30:16 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/07 14:10:59 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "ClapTrap.hpp"

// ATTENTION : utiliser la forme canonique de Coplien !!

class FragTrap : public ClapTrap					// classe mere/abstraite/concrete/interface
{

	public :
		FragTrap(void);					// constructeur par défaut
		FragTrap(FragTrap const &copy);					// constructeur par copie
		FragTrap(std::string name);					// constructeur by string
		~FragTrap(void);					// destructeur

		FragTrap &operator=(FragTrap const &rhs);					// surcharge d'assignation

		void	highFivesGuys(void);
		bool	getReponse(void);

	private :
		bool	_rep;
};