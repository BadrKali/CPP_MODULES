/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:21:03 by bel-kala          #+#    #+#             */
/*   Updated: 2023/11/15 10:24:05 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include<iostream>
#include"Bureaucrat.hpp"




int main() {
    try {
        Bureaucrat a = Bureaucrat("driss",1);
        std::cout << "Bureaucrat name " << a.getName() << std::endl;
        std::cout << "Bureaucrat grade " << a.getGrade() << std::endl;
        a.decGrade();
        std::cout << "Bureaucrat name " << a.getName() << std::endl;
        std::cout << "Bureaucrat grade " << a.getGrade() << std::endl;
        a.incGrade();
        std::cout << "Bureaucrat name " << a.getName() << std::endl;
        std::cout << "Bureaucrat grade " << a.getGrade() << std::endl;
        a.incGrade();
        a.incGrade();
    }
    catch(std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }
    return(0);
}