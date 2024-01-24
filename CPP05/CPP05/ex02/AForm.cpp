/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:37:41 by bel-kala          #+#    #+#             */
/*   Updated: 2023/11/02 11:11:34 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AForm.hpp"



AForm::AForm() : _signGrade(0), _execGrade(0), _name("name") {
    // std::cout << "AForm Default Constructor Called" << std::endl;
    (*this)._signed = false;
}

AForm::AForm(std::string name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade) {
    // std::cout << "AForm Constructor Called" << std::endl;
    (*this)._signed = false;
    if((*this)._signGrade < 1 || (*this)._execGrade < 1)
        throw(AForm::GradeTooHighException());
    else if((*this)._signGrade < 1 || (*this)._execGrade < 1)
        throw(AForm::GradeTooLowException());
}

AForm::~AForm() {
    // std::cout << "AForm Default Destructor" << std::endl;
}

AForm::AForm(const AForm& other) : _signGrade(0), _execGrade(0) {
    *this = other;
}


AForm& AForm::operator=(const AForm& other) {
    (*this)._signed = (other)._signed;
    return(*this);
}

std::string AForm::getName() const {
    return((*this)._name);
}

int AForm::getSignGrade() const {
    return((*this)._signGrade);
}

int AForm::getExecGrade() const {
    return((*this)._execGrade);
}

bool AForm::getStatus() const {
    return((*this)._signed);
}

void AForm::beSigned(const Bureaucrat& agent) {
    if(agent.getGrade() < (*this).getSignGrade())
        (*this)._signed = true;
    else
        throw(AForm::GradeTooLowException());
}

const char* AForm::GradeTooHighException::what() const throw() {
    return("AForm : Grade is Too High");
}

const char* AForm::GradeTooLowException::what() const throw() {
    return("AForm : Grade is Too low");
}

void AForm::execute(Bureaucrat const & executor) const {
    if((*this).getStatus() == true && (*this).getExecGrade() > executor.getGrade())
        (*this).action();
    else if((*this).getExecGrade() < executor.getGrade())
        throw(AForm::GradeTooHighException());
    else
        throw(AForm::GradeTooLowException());
        
}

std::ostream& operator << (std::ostream& stream, const AForm& obj) {
    stream << "AForm Called " << obj.getName() << " signeGrade : " << obj.getSignGrade() << " ExecGrade : " << obj.getExecGrade() << " Status : " ;
    return(stream);
}