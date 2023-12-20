#include"AForm.hpp"



AForm::AForm() : _name(""), _signed(false), _signGrade(0), _executGrade(0) {
    //std::cout << "AForm Default Constructor Called" <<std::endl;
}


AForm::AForm(std::string name, int signGrade, int executGrade) : _name(name), _signGrade(signGrade), _executGrade(executGrade) {
    //std::cout << "AForm Constructor Called" << std::endl;
    (*this)._signed = false;
    if((*this)._signGrade < 1 || (*this)._executGrade < 1)
        throw(AForm::GradeTooLowException());
    if((*this)._signGrade > 150 || (*this)._executGrade > 150)
        throw(AForm::GradeTooHighException());
}

AForm::~AForm() {
    //std::cout << "AForm Default destructor Called" << std::endl;
}

AForm::AForm(const AForm& other) : _name(other.getName()), _signGrade(other.getSignGrade()), _executGrade(other.getExecutGrade()) {
    
    //(*this) = other;
}

AForm& AForm::operator=(const AForm& other) {
    //std::cout << "AForm : copy assignment op" << std::endl;
    if(this == &other)
        return(*this);
    return(*this);
}


const std::string AForm::getName() const {
    return((*this)._name);
}

int AForm::getSignGrade() const {
    return((*this)._signGrade);
}
int AForm::getExecutGrade() const {
    return((*this)._executGrade);
}


bool AForm::getSignState() const {
    return((*this)._signed);
}

const char* AForm::GradeTooHighException::what() const throw() {
    return("AForm : Grade Too Hight");
}

const char* AForm::GradeTooLowException::what() const throw() {
    return("AForm : Grade Too Low");
}

void AForm::beSigned(Bureaucrat& agent) {
    if(agent.getGrade() <= (*this).getSignGrade())
        (*this)._signed = true;
    else
        throw(AForm::GradeTooLowException());
}

std::ostream& operator << (std::ostream& stream, const AForm& obj) {
    stream << "AForm Name : " << obj.getName() << std::endl;
    stream << "AForm Sign State : " << obj.getSignState() << std::endl;
    stream << "AForm Sign Grade : " << obj.getSignGrade() << std::endl;
    stream << "AForm Execute Grade " << obj.getExecutGrade() << std::endl;
    return(stream);
}