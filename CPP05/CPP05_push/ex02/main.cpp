#include<iostream>
#include"ShrubberyCreationForm.hpp"
#include"AForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"


int main() {
    try {
        AForm *a = new ShrubberyCreationForm("home");
        // Bureaucrat agent1("John",30);
        // Bureaucrat agent2("Frix",149);
        // ShrubberyCreationForm form1("Home");
        // RobotomyRequestForm form2("Loby");
        // std::cout << "======================*TEST CASE 1*==========================" << std::endl;
        // std::cout << "Display agent1 Infos" << std::endl;
        // std::cout << agent1 << std::endl;
        // std::cout << std::endl;
        // std::cout << "Display form1 Infos" << std::endl;
        // std::cout << form1;
        // std::cout << std::endl;

        // agent1.incGrade();
        // std::cout << "Signing And Executing Process" << std::endl;
        // std::cout << "Sign form1 : ";
        // agent1.signForm(form1);
        // std::cout << "Execute form1 : ";
        // agent1.executeForm(form1);
        // std::cout << std::endl;
        // std::cout << "Display form1 Infos" << std::endl;
        // std::cout << form1;

        // std::cout << "======================*TEST CASE 1*==========================" << std::endl;
        // std::cout << "Display agent2 Infos" << std::endl;
        // std::cout << agent2 << std::endl;
        // std::cout << std::endl;
        // std::cout << "Display form2 Infos" << std::endl;
        // std::cout << form2;
        // std::cout << std::endl;

        // agent2.decGrade();
        // std::cout << "Signing And Executing Process" << std::endl;
        // form2.beSigned(agent2);
        // // form2.beSigned(agent1);
        // std::cout << form2;
        delete a;
    }
    catch(std::exception &ex) {
        std::cout << "Exception Catched : " << ex.what() << std::endl;
    }
}