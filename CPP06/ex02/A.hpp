#ifndef A_HPP
#define A_HPP
#include<iostream>
#include"Base.hpp"

class A : public Base {
    public:
        A();
        ~A();
        A(const A& other);
        A& operator=(const A& other);
    private:

};



#endif