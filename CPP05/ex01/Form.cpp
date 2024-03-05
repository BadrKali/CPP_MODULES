#include"Form.hpp"



Form::Form() : _name(""), _signed(false), _signGrade(0), _executGrade(0) {
    std::cout << "Form Default Constructor Called" <<std::endl;
}


Form::Form(std::string name, int signGrade, int executGrade) : _name(name), _signGrade(signGrade), _executGrade(executGrade) {
    std::cout << "Form Constructor Called" << std::endl;
    (*this)._signed = false;
    if((*this)._signGrade < 1 || (*this)._executGrade < 1)
        throw(Form::GradeTooLowException());
    if((*this)._signGrade > 150 || (*this)._executGrade > 150)
        throw(Form::GradeTooHighException());
}

Form::~Form() {
    std::cout << "Form Default destructor Called" << std::endl;
}

Form::Form(const Form& other) : _name(other.getName()), _signGrade(other.getSignGrade()), _executGrade(other.getExecutGrade()) {
    std::cout << "Form Copy Constructor Called" << std::endl;
    (*this) = other;
}

Form& Form::operator=(const Form& other) {
    std::cout << "Form : copy assignment operator called" << std::endl;
    if(this == &other)
        return(*this);
    (*this)._signed = other.getSignState();
    return(*this);
}


const std::string Form::getName() const {
    return((*this)._name);
}

int Form::getSignGrade() const {
    return((*this)._signGrade);
}

int Form::getExecutGrade() const {
    return((*this)._executGrade);
}


bool Form::getSignState() const {
    return((*this)._signed);
}

const char* Form::GradeTooHighException::what() const throw() {
    return("Form : Grade Too Hight");
}

const char* Form::GradeTooLowException::what() const throw() {
    return("Form : Grade Too Low");
}

void Form::beSigned(const Bureaucrat& agent) {
    if(agent.getGrade() <= (*this).getSignGrade())
        (*this)._signed = true;
    else
        throw(Form::GradeTooLowException());
}

std::ostream& operator << (std::ostream& stream, const Form& obj) {
    stream << "Form Name : " << obj.getName() << std::endl;
    stream << "Form Sign State : " << obj.getSignState() << std::endl;
    stream << "Form Sign Grade : " << obj.getSignGrade() << std::endl;
    stream << "Form Execute Grade " << obj.getExecutGrade();
    return(stream);
}