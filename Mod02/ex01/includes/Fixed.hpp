/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:17:06 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/06 14:36:12 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cmath>

// ATTENTION : utiliser la forme canonique de Coplien !!

class Fixed					// classe mere/abstraite/concrete/interface
{

	public :
		Fixed(void);					// constructeur par défaut
		Fixed(Fixed const &copy);					// constructeur par copie
		Fixed(const int n);
		Fixed(const float n);
		~Fixed(void);					// destructeur

		Fixed &operator=(Fixed const &rhs);					// surcharge d'assignation

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;

	private :
		int static const	_frac = 8;
		int					_raw;
		
};

std::ostream &operator<<(std::ostream &out, Fixed const &rhs);