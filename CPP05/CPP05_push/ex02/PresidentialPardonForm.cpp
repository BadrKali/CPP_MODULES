#include"PresidentialPardonForm.hpp"



PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardon", 25, 5) {
    std::cout << "PresidentialPardonForm Default Constructor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon", 25, 5) {
    std::cout << "Presidential Pardon Form constructor Called" << std::endl;
    (*this)._target = target;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "Presidential Pardon Form Destructor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) :  AForm("Presidential Pardon", 25, 5) {
    (*this) = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
    (*this)._target = other._target;
    return(*this);
}

void PresidentialPardonForm::action() const {
    std::cout << (*this)._target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if((*this).getSignState() == true && (*this).getExecutGrade() >= executor.getGrade())
        (*this).action();
    else if ((*this).getExecutGrade() < executor.getGrade())
        throw(PresidentialPardonForm::GradeTooLowException());
}