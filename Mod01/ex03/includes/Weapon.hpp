/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:14:25 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/02 22:01:19 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

// ATTENTION : utiliser la forme canonique de Coplien !!

class Weapon					// classe mere/abstraite/concrete/interface
{

	public :
		Weapon(std::string type);					// constructeur by string
		~Weapon(void);					// destructeur

		std::string const	&getType(void) const;
		void 				setType(std::string weapon);

	private :
		std::string	_type;

};