/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:28:34 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/26 15:28:36 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include<iostream>

class Brain {
	public:
		Brain();
		~Brain();
		Brain(const Brain& other);
		void setIdeas(int idx, std::string idea);
		std::string getIdea(int idx);
		Brain& operator=(const Brain& other);
	private:
		std::string ideas[100];
};





#endif