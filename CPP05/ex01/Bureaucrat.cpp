/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:20:46 by bel-kala          #+#    #+#             */
/*   Updated: 2023/11/15 11:18:44 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"




Bureaucrat::Bureaucrat() : _name(""), _grade(-1) {
    std::cout << "Bureucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
    std::cout << "Bureaucrat constructor called" << std::endl;
    if((*this)._grade < 1)
        throw(Bureaucrat::GradeTooHighException());
    if((*this)._grade > 150)
        throw(Bureaucrat::GradeTooLowException());
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat Default Destructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name) {
    std::cout << "Bureaucrat Copy constructor Called" << std::endl;
    (*this) = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other){
    std::cout << "BureauCrat Copy assignment Called" << std::endl;
    if(this == &other)
        return(*this);
    (*this)._grade = other._grade;
    return(*this);
}
const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return("Bureaucrat : Grade Is Too Hight");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return("Bureaucrat : Grade Is Too Low");
}


std::string Bureaucrat::getName(void) const {
    return((*this)._name);
}


int Bureaucrat::getGrade(void) const {
    return((*this)._grade);
}

void Bureaucrat::incGrade(void) {
    int grade = (*this)._grade - 1;
    if(grade < 1)
        throw(Bureaucrat::GradeTooHighException());
    else
        (*this)._grade = grade;
}

void Bureaucrat::decGrade(void) {
    int grade = (*this)._grade + 1;
    if(grade > 150)
        throw(Bureaucrat::GradeTooLowException());
    else
        (*this)._grade = grade;
}

void Bureaucrat::signForm(Form& form) {
    try {
        form.beSigned(*this);
        std::cout << (*this).getName() << " Signed " << form.getName() << std::endl;
    }
    catch(std::exception &ex) {
        std::cout << (*this).getName() << " couldn`t sign " << form.getName() << " because " << ex.what() << std::endl; 
    }
}

std::ostream& operator << (std::ostream& stream, const Bureaucrat& obj) {
    stream << obj.getName() << " , bureaucrat grade " << obj.getGrade() ;
    return(stream);
}