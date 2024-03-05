#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include<iostream>
#include<sstream>
#include<iomanip>
#include<exception>


class ScalarConverter {
    public:
        static void convert(const std::string value);
    private:
        ScalarConverter();
};



#endif