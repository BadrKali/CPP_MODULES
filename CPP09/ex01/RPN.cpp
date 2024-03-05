#include"RPN.hpp"




RPN::RPN() { }


RPN::RPN(std::string& input) {
    std::size_t validArgs = input.find_first_not_of("0123456789+-*/ ");
    if(validArgs != std::string::npos) throw(std::invalid_argument("ARGS ERROR"));
    this->args = input;
}

RPN::RPN(const RPN& other) {
    (*this) = other;
}

RPN& RPN::operator=(const RPN& other) {
    this->args  = other.args;
    this->bucket = other.bucket;
    return(*this);
}


RPN::~RPN() {}

int converteToInt(char c) {
    return(c - '0');
}

bool isOp(char c) {
    return(c == '/' || c =='-' || c == '+' || c == '*');
}

double doOp(double value1, double value2, char op) {
    if(op == '+') return(value1 + value2);
    if(op == '-') return(value1 - value2);
    if(op == '*') return(value1 * value2);
        return(value1 / value2);

}

double RPN::evaluate() {
    for(size_t i = 0; i < this->args.length(); i++) {
        if(std::isdigit(this->args[i])) {
            int num =  converteToInt(this->args[i]);
            this->bucket.push(num);
        }
        else if(isOp(this->args[i])) {
            if(this->bucket.size() >= 2) {
                double value1 = this->bucket.top();
                this->bucket.pop();
                double value2 = this->bucket.top();
                this->bucket.pop();
                double result = doOp(value2, value1, this->args[i]);
                this->bucket.push(result);
            }
            else throw(std::invalid_argument("INVLID OPERATION"));
        }
    }
    if(this->bucket.size() != 1) throw(std::invalid_argument("INVLID OPERATION"));
    return this->bucket.top();
}



