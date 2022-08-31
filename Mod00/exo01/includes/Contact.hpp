/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:34:41 by ebarguil          #+#    #+#             */
/*   Updated: 2022/08/31 01:08:34 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <iomanip>
# include <sstream>

// ATTENTION : utiliser la forme canonique de Coplien !!

class Contact					// classe mere/abstraite/concrete/interface
{

	public :
		Contact(void);					// constructeur par défaut
		~Contact(void);					// destructeur

		void	takeinfo(int i);
		void	displaygen(void);
		void	displaycont(void);

	private :
		int			_ind;
		std::string	_first;
		std::string	_last;
		std::string	_nick;
		std::string	_phone;
		std::string	_dark;
		void		_displayline(std::string str);

};
