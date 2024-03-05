#include"ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Form", 145, 137) {
    //std::cout << "ShrubberyCreationForm Default Constructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Form", 145, 137) {
    //std::cout << "ShrubberyCreationForm Constructor Called" << std::endl;
    (*this)._target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    //std::cout << "ShrubberyCreationForm Default Destructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm("Shrubbery Form", 145, 137) {
    (*this) = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    
    (*this)._target = other._target;
    return(*this);
}

void ShrubberyCreationForm::action() const {
    std::ofstream file;

    file.open((*this)._target + "_shrubbery");

    if(file.is_open()) {
        file <<
            "    *\n"
            "   ***\n"
            "  *****\n"
            " *******\n"
            "*********\n"
            "    **\n"
            "    **\n"
            "    **\n";
    }
    else
        exit(1);
    file.close();
}



void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    if((*this).getSignState() == true && (*this).getExecutGrade() >= executor.getGrade())
        (*this).action();
    else if ((*this).getExecutGrade() < executor.getGrade())
        throw(ShrubberyCreationForm::GradeTooLowException());
}