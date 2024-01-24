#include<iostream>
#include"Bureaucrat.hpp"
#include"Form.hpp"

int main() {
    try {
        Bureaucrat a("lm9adem", 100);
        Form b("chahadatSokna", 140, 10);
        // std::cout << b.getExecGrade() << std::endl;
        a.signForm(b);
    }
    catch(std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }

    return(0);
}