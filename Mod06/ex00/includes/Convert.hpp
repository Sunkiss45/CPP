/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:39:13 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/15 18:44:11 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cstdlib>
# include <climits>
# include <cfloat>

#define RESET "\e[0m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PURPLE "\e[0;35m"
#define CYAN "\e[0;36m"

// ATTENTION : utiliser la forme canonique de Coplien !!

class Convert					// classe mere/abstraite/concrete/interface
{

	public :
		Convert(void);					// constructeur par défaut
		Convert(Convert const &copy);					// constructeur par copie
		~Convert(void);					// destructeur

		Convert &operator=(Convert const &rhs);					// surcharge d'assignation

		void	setType(char const *str);

	private :
		int	_type;

};