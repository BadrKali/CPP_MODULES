#include"Intern.hpp"


Intern::Intern() {
    //std::cout << "Intern Default Constructor Called" << std::endl;
}

Intern::~Intern() {
    //std::cout << "Intern Default Destructor Called" << std::endl;
}

Intern::Intern(const Intern& other) {
    (*this) = other;
}

Intern& Intern::operator=(const Intern& other) {
    (void)other;
    return(*this);
}


AForm* Intern::createShrubbery(std::string target) {
    return(new ShrubberyCreationForm(target));
}


AForm* Intern::createRobotomyRequest(std::string target) {
    return(new RobotomyRequestForm(target));
}

AForm* Intern::createPresidentialPardon(std::string target) {
    return(new PresidentialPardonForm(target));
}

AForm* Intern::makeForm(std::string name, std::string target) {
    AForm* (Intern::*ptr[3])(std::string) = {&Intern::createShrubbery,&Intern::createRobotomyRequest,&Intern::createPresidentialPardon};
    std::string str[3] = {"Shrubbery Creation","Robotomy Request","Presidential Pardon"};
    int index = -1;
    int i = 0; 
    while(i < 3) {
        if(name == str[i])
            index = i;
        i++;
    }
    if(index == -1) {
        std::cout << "Intern Could not Create " << name << std::endl;
        throw(std::out_of_range("no form with that name"));
    }
    else
        std::cout << "Intern Creates " << name << std::endl;
    return((this->*ptr[index])(target));
}