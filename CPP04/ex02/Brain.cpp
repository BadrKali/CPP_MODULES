/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:28:29 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/26 15:57:11 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"





Brain::Brain() {
	std::cout << "Brain Default Constructor Called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain Default Destructor" << std::endl;
}

Brain::Brain(const Brain& other) {
	(*this) = other;
}

Brain& Brain::operator=(const Brain& other) {
	if(&other == this)
		return(*this);
	for(int i = 0;i < 100; i++) {
		(*this).ideas[i] = other.ideas[i];
	}
	return((*this));
}


void Brain::setIdeas(int idx, std::string idea) {
	if(idx >= 0 && idx < 100)
		(*this).ideas[idx] = idea;
}

std::string Brain::getIdea(int idx) {
	if(idx >= 0 && idx < 100)
		return((*this).ideas[idx]);
	else
		return("Out Of Range Idea");
}