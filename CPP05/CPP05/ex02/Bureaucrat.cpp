/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:08:19 by bel-kala          #+#    #+#             */
/*   Updated: 2023/11/02 11:22:14 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
    std::cout << "Bureaucrat Default Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) {
    std::cout << "Bureaucrat constractor called" << std::endl;
    (*this)._name = name;
    if(grade >= 1 && grade <= 150)
        (*this)._grade = grade;
    else if(grade < 1)
        throw(Bureaucrat::GradeTooHighException());
    else if(grade > 150)
        throw(Bureaucrat::GradeTooLowException());
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat Default Destructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) {
    *this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    (*this)._name = other._name;
    (*this)._grade = other._grade;
    return(*this);
}

int Bureaucrat::getGrade() const {
    return((*this)._grade);
}

std::string Bureaucrat::getName() const {
    return((*this)._name);
}

void Bureaucrat::gradeInc() {
    int grade = (*this)._grade - 1;
    if(grade >= 1)
        (*this)._grade = grade;
    else
        throw(Bureaucrat::GradeTooHighException());
}

void Bureaucrat::gradeDec() {
    int grade = (*this)._grade + 1;
    if(grade <= 150)
        (*this)._grade = grade;
    else
        throw(Bureaucrat::GradeTooLowException());
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return("Bureucrat : Grade Is Too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return("Bureaucrat : Grade Is Too High");
}

void Bureaucrat::signForm(AForm& form) {
    try{
        form.beSigned(*this);
    }
    catch(std::exception &ex) {
        std::cout << (*this).getName() << " couldn`t sign " << form.getName() << " because " << ex.what() << std::endl;
        return;
    }
    std::cout << (*this).getName() << " signed " << form.getName() << std::endl;
}

void Bureaucrat::executeForm(AForm const & form) {
    try {
        form.execute(*this);
        std::cout << (*this).getName() << " executed " << form.getName() << std::endl;
    }
    catch (std::exception &ex) {
        std::cout << (*this).getName() << " could not execute the form" << std::endl;
        std::cout << ex.what() << std::endl;
    }
    
}

std::ostream& operator << (std::ostream& stream, const Bureaucrat& obj) {
    stream << obj.getName() << " bureaucrat grade " << obj.getGrade() ;
    return(stream);
}


