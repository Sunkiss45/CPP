/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:17:06 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/06 17:30:00 by ebarguil         ###   ########.fr       */
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

		bool operator>(Fixed const &rhs) const;
		bool operator<(Fixed const &rhs) const;
		bool operator>=(Fixed const &rhs) const;
		bool operator<=(Fixed const &rhs) const;
		bool operator==(Fixed const &rhs) const;
		bool operator!=(Fixed const &rhs) const;

		Fixed	operator+(Fixed const &rhs) const;
		Fixed	operator-(Fixed const &rhs) const;
		Fixed	operator*(Fixed const &rhs) const;
		Fixed	operator/(Fixed const &rhs) const;

		Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		int		toInt(void) const;
		float	toFloat(void) const;
		static Fixed	min(Fixed &lhs, Fixed &rhs);
		static Fixed	max(Fixed &lhs, Fixed &rhs);
		static const Fixed	min(Fixed const &lhs, Fixed const &rhs);
		static const Fixed	max(Fixed const &lhs, Fixed const &rhs);

	private :
		int static const	_frac = 8;
		int					_raw;
		
};

std::ostream &operator<<(std::ostream &out, Fixed const &rhs);