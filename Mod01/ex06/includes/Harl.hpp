/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 18:44:25 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/03 19:36:15 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

// ATTENTION : utiliser la forme canonique de Coplien !!

class Harl					// classe mere/abstraite/concrete/interface
{

	public :
		Harl(void);					// constructeur par défaut
		~Harl(void);					// destructeur

		void	complain(std::string level);

	private :
		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);
};