/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:37:41 by bel-kala          #+#    #+#             */
/*   Updated: 2023/11/01 16:55:08 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"



Form::Form() : _signGrade(0), _execGrade(0), _name("name") {
    // std::cout << "Form Default Constructor Called" << std::endl;
    (*this)._signed = false;
}

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade) {
    // std::cout << "Form Constructor Called" << std::endl;
    (*this)._signed = false;
    if((*this)._signGrade < 1 || (*this)._execGrade < 1)
        throw(Form::GradeTooHighException());
    else if((*this)._signGrade < 1 || (*this)._execGrade < 1)
        throw(Form::GradeTooLowException());
}

Form::~Form() {
    // std::cout << "Form Default Destructor" << std::endl;
}

Form::Form(const Form& other) : _signGrade(0), _execGrade(0) {
    *this = other;
}


Form& Form::operator=(const Form& other) {
    (*this)._signed = (other)._signed;
    return(*this);
}

std::string Form::getName() const {
    return((*this)._name);
}

int Form::getSignGrade() const {
    return((*this)._signGrade);
}

int Form::getExecGrade() const {
    return((*this)._execGrade);
}

bool Form::getStatus() const {
    return((*this)._signed);
}

void Form::beSigned(const Bureaucrat& agent) {
    if(agent.getGrade() < (*this).getSignGrade())
        (*this)._signed = true;
    else
        throw(Form::GradeTooLowException());
}

const char* Form::GradeTooHighException::what() const throw() {
    return("Form : Grade is Too High");
}

const char* Form::GradeTooLowException::what() const throw() {
    return("Form : Grade is Too low");
}

std::ostream& operator << (std::ostream& stream, const Form& obj) {
    stream << "Form Called " << obj.getName() << " signeGrade : " << obj.getSignGrade() << " ExecGrade : " << obj.getExecGrade() << " Status : " ;
    return(stream);
}