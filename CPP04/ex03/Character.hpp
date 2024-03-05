/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:27:12 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/26 15:27:14 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_HPP
#define CHARACTER_HPP


#include"ICharacter.hpp"
#include<iostream>
#include"AMateria.hpp"

class Character : public ICharacter {
	public:
		Character();
		Character(std::string name);
		~Character();
		Character(const Character& other);
		Character& operator=(const Character& other);

		std::string const & getName() const;
		void use(int idx, ICharacter& target);
		void equip(AMateria* m);
		void unequip(int idx);
	private:
		std::string name;
		AMateria* materias[4];

};



#endif