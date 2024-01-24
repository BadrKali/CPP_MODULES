#ifndef INTERN_HPP
#define INTERN_HPP

#include<iostream>
#include"AForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"ShrubberyCreationForm.hpp"
#include"PresidentialPardonForm.hpp"

class Intern {
    public:
    
        Intern();
        ~Intern();
        Intern(const Intern& other);
        Intern& operator=(const Intern& other);

        AForm* makeForm(std::string target, std::string name);
        
        AForm* createShrubbery(std::string target);
        AForm* createRobotomyRequest(std::string name);
        AForm* createPresidentialPardon(std::string name);

    private:

};



#endif