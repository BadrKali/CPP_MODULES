/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:27:02 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/26 15:27:03 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include<iostream>
#include"ICharacter.hpp"


class AMateria {
	public:
		AMateria();
		virtual ~AMateria();
		AMateria(const AMateria& other);
		AMateria& operator = (const AMateria& other);
		AMateria(std::string const & type);

		std::string const & getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	protected:
		std::string type;

};


#endif