#include<iostream>
#include"Bureaucrat.hpp"
#include"AForm.hpp"
#include"Intern.hpp"
#include"ShrubberyCreationForm.hpp"
int main() {
    {
    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    }
    return(0);
}