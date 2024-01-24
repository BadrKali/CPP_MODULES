#include"RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm Default Constructor Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequest", 72,45) {
    (*this)._target = target;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm Default Destructor Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) {
    (*this) = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    return(*this);
}

// void RobotomyRequestForm::execute(Bureaucrat const & executor) const {

// }

void RobotomyRequestForm::action() const {
    std::cout << "Make Some Drilling Noise" << std::endl;
}

