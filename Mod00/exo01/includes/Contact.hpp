/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:34:41 by ebarguil          #+#    #+#             */
/*   Updated: 2022/08/29 14:34:43 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

// ATTENTION : utiliser la forme canonique de Coplien !!

class Contact					// classe mere/abstraite/concrete/interface
{

	public :
		Contact(void);					// constructeur par défaut
		~Contact(void);					// destructeur

		void	takeinfo(int i);

	private :
		int			_ind;
		std::string	_first;
		std::string	_last;
		std::string	_nick;
		std::string	_phone;
		std::string	_dark;

};
