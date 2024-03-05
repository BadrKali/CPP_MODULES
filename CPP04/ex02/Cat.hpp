/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:28:44 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/26 15:28:45 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include"Animal.hpp"
#include"Brain.hpp"

class Cat : public Animal {
	public:
		Cat();
		~Cat();
		Cat(const Cat& other);
	
		Cat& operator=(const Cat& other);
		void makeSound() const;
		void setCatIdeas(int idx, std::string idea);
		std::string getCatIdeas(int idx);

	private:
		Brain* br;
};


#endif