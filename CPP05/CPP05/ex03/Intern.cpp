#include"Intern.hpp"




Intern::Intern() {
    std::cout << "Intern Default Constructor Called" << std::endl;
}

Intern::~Intern() {
    std::cout << "Intern Default Destructor Called" << std::endl;
}

Intern::Intern(const Intern& other) {
    (*this) = other;
}

Intern& Intern::operator=(const Intern& other) {
    return(*this);
}

AForm* Intern::makeForm(std::string formName, std::string target) {
    AForm *form;
    int i = 0;
    int index = -1;

    std::string Names[3] = {"robotomy request", "Shrubbery creation", "Presidential Pardon"};
    while(i < 3) {
        if(Names[i] == formName)
        {
            index = i;
            break;
        }
        i++;
    }
    if(index == -1) {
        std::cout << "sir l 3amala akhoya ma3ednach had l war9a" << std::endl;
        return(NULL);
    }
    switch(index) {
        case 0 : 
            form = new RobotomyRequestForm(target);
            break;
        case 1 : 
            form = new ShrubberyCreationForm(target);
            break;
        case 2:
            form = new PresidentialPardonForm(target);
    }
    std::cout << "Intern Creates " << formName << " Form" << std::endl;
    return(form);
}