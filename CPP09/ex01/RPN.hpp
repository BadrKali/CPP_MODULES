#ifndef RPN_HPP
#define RPN_HPP

#include<stack>
#include<iostream>
#include <string>



class RPN {
    public:
        RPN(std::string &input);
        RPN(const RPN& other);
        RPN& operator=(const RPN& other);
        ~RPN();

        double evaluate();
    private:
        RPN();
        std::string args;
        std::stack<double> bucket;

};






#endif