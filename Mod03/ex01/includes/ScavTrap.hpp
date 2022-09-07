/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 09:45:44 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/07 17:54:46 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "ClapTrap.hpp"

// ATTENTION : utiliser la forme canonique de Coplien !!

class ScavTrap : public ClapTrap				// classe mere/abstraite/concrete/interface
{

	public :
		ScavTrap(void);					// constructeur par défaut
		ScavTrap(ScavTrap const &copy);					// constructeur par copie
		ScavTrap(std::string name);					// constructeur by string
		~ScavTrap(void);					// destructeur

		ScavTrap &operator=(ScavTrap const &rhs);					// surcharge d'assignation

		void	attack(const std::string &target);
		void	guardGate(void);

};
