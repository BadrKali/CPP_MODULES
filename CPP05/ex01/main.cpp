#include<iostream>
#include"Form.hpp"

#include "Bureaucrat.hpp"


int main() {
    try {
        Bureaucrat a("agent1",20);
        Bureaucrat b("agent2",60);
        Form c("Form1",40,30);
        std::cout << c << std::endl;
        // c.beSigned(a);
        // c.beSigned(b);
        // a.signForm(c);
        b.signForm(c);
        std::cout << c << std::endl;
        
    }
    catch(std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }

}
