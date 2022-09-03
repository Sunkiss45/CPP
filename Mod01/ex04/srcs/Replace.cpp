/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 23:05:35 by ebarguil          #+#    #+#             */
/*   Updated: 2022/09/03 21:32:56 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

//-----------------------   CONSTRUCTOR / DESTRUCTOR   -----------------------//

Replace::Replace(std::string filename, std::string str1, std::string str2) : _filename(filename),
	_str1(str1), _str2(str2) {					// constructeur by string
	std::cout << "Replace String constructor called." << std::endl;
	return; }

Replace::~Replace(void) {					// destructeur
	std::cout << "Replace Destructor called." << std::endl;
	return; }

//---------------------------   MEMBER FUNCTIONS   ---------------------------//

void	Replace::launch(void) {
	if (!this->open_infile()) {
		std::cout << "Invalid filename ! - <filename> <string 1> <string 2>" << std::endl;
		return ; }
	this->_ifs.close();

	for (size_t i = 0; i < this->_ifsbuf.length(); i++) {
		if (!this->_ifsbuf.compare(i, this->_str1.length(), this->_str1)) {
			this->_ifsbuf.erase(i, this->_str1.length());
			this->_ifsbuf.insert(i, this->_str2);
			i = i - 1 + this->_str2.length(); } }

	if (!this->create_outfile()) {
		std::cout << "Error while creating output file.." << std::endl;
		return ; }
	this->_ofs << this->_ifsbuf;
	this->_ofs.close();
	return; }

bool	Replace::open_infile(void) {
	this->_ifs.open(this->_filename.c_str());
	if (!this->_ifs.is_open()) {
		return (false); }
	try {
		this->_ifsbuf.assign(std::istreambuf_iterator<char>(this->_ifs), std::istreambuf_iterator<char>()); }
	catch (std::exception e) {
		return (false);	} 
	return (true); }

bool	Replace::create_outfile(void) {
	std::string	str = this->_filename;
	str += ".replace";
	this->_ofs.open(str.c_str());
	return (this->_ofs.is_open()); }