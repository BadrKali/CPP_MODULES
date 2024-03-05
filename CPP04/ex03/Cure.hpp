/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:27:23 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/26 15:27:25 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP



#include<iostream>
#include"AMateria.hpp"


class Cure : public AMateria {
	public:
		Cure();
		~Cure();
		Cure(const Cure& other);
		Cure& operator=(const Cure& other);

		AMateria* clone() const;
		void use(ICharacter& target);
	private:	

};


#endif