#include"RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Form", 72, 45) {
    //std::cout << "RobotomyRequestForm Default Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Form", 72, 45) {
    (*this)._target = target;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    //std::cout << "RobotomyRequestForm Default Destructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm("Robotomy Form", 72, 45) {
    (*this) = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    (*this)._target = other._target;
    return(*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if((*this).getSignState() == true && (*this).getExecutGrade() >= executor.getGrade())
        (*this).action();
    else if ((*this).getExecutGrade() < executor.getGrade())
        throw(RobotomyRequestForm::GradeTooLowException());
}

void RobotomyRequestForm::action() const {
    std::cout << "** drilling noise **" << std::endl;
    int seed = std::time(0);
    std::srand(seed);
    if(std::rand() % 2)
        std::cout << (*this)._target << "has been robotomized successfully" << std::endl;
    else
        std::cout << "the robotomy failed." << std::endl;
}