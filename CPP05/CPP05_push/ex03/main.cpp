#include<iostream>
#include"ShrubberyCreationForm.hpp"
#include"AForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"Intern.hpp"

int main() {
    try {
        Intern someRandomIntern;
        RobotomyRequestForm a("lol");
        a.action();
        AForm* rrf;
        rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");
    }
    catch(std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }
}