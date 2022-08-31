/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 14:08:46 by ebarguil          #+#    #+#             */
/*   Updated: 2022/08/31 17:34:41 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

// ATTENTION : utiliser la forme canonique de Coplien !!

class Zombie					// classe mere/abstraite/concrete/interface
{

	public :
		Zombie(std::string name);					// constructeur par string
		~Zombie(void);					// destructeur

		void	annonce(void) const;

	private :
		std::string	_name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
