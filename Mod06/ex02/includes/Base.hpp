/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:30:56 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/18 14:35:00 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cstdlib>

#define RESET "\e[0m"
#define RED "\e[0;31m"
#define BRED "\e[1;31m"
#define SRED "\e[4;31m"
#define GREEN "\e[0;32m"
#define BGREEN "\e[1;32m"
#define SGREEN "\e[4;32m"
#define YELLOW "\e[0;33m"
#define BYELLOW "\e[1;33m"
#define SYELLOW "\e[4;33m"
#define BLUE "\e[0;34m"
#define BBLUE "\e[1;34m"
#define SBLUE "\e[4;34m"
#define PURPLE "\e[0;35m"
#define BPURPLE "\e[1;35m"
#define SPURPLE "\e[4;35m"
#define CYAN "\e[0;36m"
#define BCYAN "\e[1;36m"
#define SCYAN "\e[4;36m"

class Base
{
	public :
		virtual ~Base(void) {};
};
