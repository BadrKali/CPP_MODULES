/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:05:29 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/20 10:05:31 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include"ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(std::string& name);
		ScavTrap(const ScavTrap& other);

		ScavTrap& operator=(const ScavTrap& other);
		void guardGate(void);
		void attack(const std::string& target);

	private:

};


#endif