/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:36:40 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/10 12:36:42 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Sed.hpp"


Sed::Sed(char **av) {

	if(setFileName(av[1]) != 0 || setStringOne(av[2]) != 0 || setStringTwo(av[3]) != 0)
		(*this).healthCheck = true;
	else 
		(*this).healthCheck = false;
}

Sed::~Sed() {

}


int Sed::setFileName(char *file) {
	std::string fileName(file);
	std::fstream myFile;

	if(fileName.empty())
		return(1);
	myFile.open(file);
	if(!myFile.is_open())
		return(1);
	(*this).filename = fileName;
	myFile.close();
	return(0);
}

int Sed::setStringOne(char *str) {
	std::string stringOne(str);

	if(stringOne.empty())
		return(1);
	(*this).s1 = stringOne;
	return(0);
}

int Sed::setStringTwo(char *str) {
	std::string stringTwo(str);

	(*this).s2 = stringTwo;
	return(0);
}

bool Sed::getHealthCheck() {
	return((*this).healthCheck);
}

void Sed::searchAndReplace() {
	std::ifstream readFile;
	std::ofstream writefile;
	std::string line;

	readFile.open((*this).filename);
	writefile.open((*this).filename + ".replace");
	if(readFile.is_open() && writefile.is_open()) {
		while(std::getline(readFile,line)){
			while(1) {
				size_t found = line.find(s1);
				if(found == std::string::npos)
					break;
				line.erase(found,s1.length());
				line.insert(found, s2);
			}
			writefile << line << std::endl;
		}
	}
	writefile.close();
	readFile.close();
}