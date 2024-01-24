#ifndef INTERN_HPP
#define INTERN_HPP

#include<iostream>
#include"AForm.hpp"
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"


class Intern {
    public:
        Intern();
        ~Intern();
        Intern(const Intern& other);
        Intern& operator=(const Intern& other);

        AForm* makeForm(std::string formName, std::string target);

    private:

};




#endif