/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 23:04:29 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/03 00:36:28 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <fstream>
# include <sstream>

// ATTENTION : utiliser la forme canonique de Coplien !!

class Replace					// classe mere/abstraite/concrete/interface
{

	public :
		Replace(std::string filename, std::string str1, std::string str2);					// constructeur by string
		~Replace(void);					// destructeur

		void	launch(void);
		bool	open_infile(void);
		bool	create_outfile(void);

	private :
		std::string	_filename;
		std::string	_str1;
		std::string	_str2;
		std::string	_ifsbuf;
		std::ifstream	_ifs;
		std::ofstream	_ofs;
};

Replace &operator<<(std::ostream &o, Replace const &rhs);