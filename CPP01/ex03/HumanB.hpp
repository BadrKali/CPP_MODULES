/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:35:47 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/10 12:35:50 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include"Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string name);
		~HumanB();

		void attack();
		void setWeapon(Weapon &weapon);
	private:
		std::string name;
		Weapon *weapon;

};



#endif