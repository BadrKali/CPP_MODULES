/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:36:14 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/10 12:36:15 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include<iostream>

class Weapon {
    public:
        Weapon(std::string type);
        ~Weapon();

        void setType(std::string type);
        const std::string& getType(void);
    private:
        std::string type;
};


#endif

