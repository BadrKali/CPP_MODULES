/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:28:04 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/26 15:28:06 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP


#include<iostream>
#include"IMateriaSource.hpp"
#include"Ice.hpp"
#include"Cure.hpp"


class MateriaSource : public IMateriaSource {
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource& other);
		MateriaSource& operator=(const MateriaSource& other);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
	private:
		AMateria* materias[4];

};





#endif