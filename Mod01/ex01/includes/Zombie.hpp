/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 14:08:46 by ebarguil          #+#    #+#             */
/*   Updated: 2022/08/31 19:32:29 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

// ATTENTION : utiliser la forme canonique de Coplien !!

class Zombie					// classe mere/abstraite/concrete/interface
{

	public :
		Zombie(void);					// constructeur par defaut
		~Zombie(void);					// destructeur

		void	names(std::string name);
		void	annonce(void) const;

	private :
		std::string	_name;
};

Zombie	*zombieHorde(int n, std::string name);
