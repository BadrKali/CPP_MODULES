/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:36:45 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/10 12:36:47 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include<iostream>
#include<fstream>


class Sed {
	public:
		Sed(char **av);
		~Sed();

		int setFileName(char *file);
		int setStringOne(char *stringOne);
		int setStringTwo(char *stringTwo);
		bool getHealthCheck();

		void searchAndReplace();
	private:
		std::string filename;
		std::string s1;
		std::string s2;
		bool healthCheck;
};



#endif