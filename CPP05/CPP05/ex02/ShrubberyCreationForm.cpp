#include"ShrubberyCreationForm.hpp"





ShrubberyCreationForm::ShrubberyCreationForm() {
    // std::cout << "ShrubberyCreationForm Default Constructor Called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    // std::cout << "ShrubberyCreationForm Default Destructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) {

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation", 145, 137) {
    (*this)._target = target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    return(*this);
}

// void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

// }

void ShrubberyCreationForm::action() const {
        std::ofstream file;

    file.open((*this)._target + "_shrubbery");
    if(file.is_open())
    {
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

