#ifndef FORM_HPP
#define FORM_HPP


// #include"Bureaucrat.hpp"
#include<iostream>


class Bureaucrat;
#include"Bureaucrat.hpp"

class AForm {

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
        AForm();
        AForm(std::string name, int signGrade, int execGrade);
        virtual ~AForm();
        AForm(const AForm& other);
        AForm& operator=(const AForm& other);

        std::string getName() const ;
        int getSignGrade() const ;
        int getExecGrade() const ;
        bool getStatus() const ;
        virtual void action() const = 0;
        void execute(Bureaucrat const & executor) const;
        void beSigned(const Bureaucrat& agent);


    private:
        const std::string _name;
        bool _signed;
        const int _signGrade;
        const int _execGrade;

};


std::ostream& operator << (std::ostream& stream, const AForm& obj);



#endif