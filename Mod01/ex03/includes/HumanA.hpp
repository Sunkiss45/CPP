/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:14:20 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/02 21:15:44 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Weapon.hpp"

// ATTENTION : utiliser la forme canonique de Coplien !!

class HumanA					// classe mere/abstraite/concrete/interface
{

	public :
		HumanA(std::string name, Weapon &weapon);					// constructeur by string
		~HumanA(void);					// destructeur

		void	attack(void) const;

	private :
		std::string	_name;
		Weapon		&_weapon;

};
