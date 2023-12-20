#ifndef FORM_HPP
#define FORM_HPP


// #include"Bureaucrat.hpp"
#include<iostream>


class Bureaucrat;
#include"Bureaucrat.hpp"

class Form {

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

    public:
        Form();
        Form(std::string name, int signGrade, int execGrade);
        ~Form();
        Form(const Form& other);
        Form& operator=(const Form& other);

        std::string getName() const ;
        int getSignGrade() const ;
        int getExecGrade() const ;
        bool getStatus() const ;
        void beSigned(const Bureaucrat& agent);


    private:
        const std::string _name;
        bool _signed;
        const int _signGrade;
        const int _execGrade;

};


std::ostream& operator << (std::ostream& stream, const Form& obj);



#endif