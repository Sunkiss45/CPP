/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:48:45 by ebarguil          #+#    #+#             */
/*   Updated: 2022/08/31 01:08:31 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <iomanip>
# include <sstream>
# include "Contact.hpp"

// ATTENTION : utiliser la forme canonique de Coplien !!

class PhoneBook					// classe mere/abstraite/concrete/interface
{

	public :
		PhoneBook(void);					// constructeur par défaut
		~PhoneBook(void);					// destructeur

		void	welcome(void);
		void	error(void);
		int		add(int i);
		int	search(int a);

	private :
		Contact	cont[8];

};
