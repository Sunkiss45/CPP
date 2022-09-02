/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:14:23 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/02 20:54:45 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Weapon.hpp"

// ATTENTION : utiliser la forme canonique de Coplien !!

class HumanB					// classe mere/abstraite/concrete/interface
{

	public :
		HumanB(std::string name);					// constructeur by string
		~HumanB(void);					// destructeur

		void	attack(void) const;
		void	setWeapon(Weapon &weapon);

	private :
		std::string	_name;
		Weapon		*_weapon;

};
