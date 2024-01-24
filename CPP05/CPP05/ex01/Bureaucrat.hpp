/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:08:23 by bel-kala          #+#    #+#             */
/*   Updated: 2023/11/01 16:52:27 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include<iostream>
#include"Form.hpp"
class Form;



class Bureaucrat {
    //nested class for grade too high exception
    class GradeTooHighException : public std::exception {
    public:
        const char* what() const throw();
    };
    //nested class for grade too low exception
    class GradeTooLowException : public std::exception{
    public:
        const char* what() const throw() ;
    };
    //defining the class of Bureucrat
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat& operator=(const Bureaucrat& other);

        Bureaucrat(std::string name, int grade);
        int getGrade() const;
        std::string getName() const;
        void gradeInc();
        void gradeDec();
        void signForm(Form& form);
        
    private:
        std::string _name;
        int _grade;
};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& obj);


#endif