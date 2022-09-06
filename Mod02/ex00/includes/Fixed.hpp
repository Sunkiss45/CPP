/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:17:06 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/06 11:47:56 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

// ATTENTION : utiliser la forme canonique de Coplien !!

class Fixed					// classe mere/abstraite/concrete/interface
{

	public :
		Fixed(void);					// constructeur par défaut
		Fixed(Fixed const &copy);					// constructeur par copie
		~Fixed(void);					// destructeur

		Fixed &operator=(Fixed const &rhs);					// surcharge d'assignation

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private :
		int static const	_frac = 8;
		int					_raw;
		
};