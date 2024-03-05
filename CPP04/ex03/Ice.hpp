/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:27:33 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/26 15:27:35 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP


#include<iostream>
#include"AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice();
		~Ice();
		Ice(const Ice& other);
		Ice& operator=(const Ice& other);

		AMateria* clone() const;
		void use(ICharacter& target);
	private:

};

#endif