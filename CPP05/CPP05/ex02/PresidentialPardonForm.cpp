#include"PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon", 25, 5){
    (*this)._target = target;
}

PresidentialPardonForm::~PresidentialPardonForm() {

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) {
    (*this) = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
    return(*this);
}

// void PresidentialPardonForm::execute(Bureaucrat const & executor) const {

// }

void Presidential::action() const {
    std::cout << "Presidential action" << std::endl;
}