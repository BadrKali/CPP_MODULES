/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:35:16 by bel-kala          #+#    #+#             */
/*   Updated: 2023/10/10 13:11:47 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<iostream>



int main() {
    std::string text = "HI THIS IS BRAIN" ;
    std::string *stringPTR = &text;
    std::string& stringREF = text;

    std::cout << &text << std::endl;
    std::cout << &stringREF << std::endl;
    std::cout << stringPTR << std::endl;

	std::cout << text << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;

    return(0);
}
