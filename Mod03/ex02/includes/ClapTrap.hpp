/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:56:45 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/07 11:00:03 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

// ATTENTION : utiliser la forme canonique de Coplien !!

class ClapTrap					// classe mere/abstraite/concrete/interface
{

	public :
		ClapTrap(void);					// constructeur par défaut
		ClapTrap(ClapTrap const &copy);					// constructeur par copie
		ClapTrap(std::string name);					// constructeur by string
		ClapTrap(std::string name, int HP, int EP, int AD);
		~ClapTrap(void);					// destructeur

		ClapTrap &operator=(ClapTrap const &rhs);					// surcharge d'assignation

		std::string const	&getName(void) const;
		int const			&getEnergy(void) const;
		int const			&getDamage(void) const;

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	protected :
		std::string	_name;
		int			_health;
		int			_energy;
		int			_damage;
};