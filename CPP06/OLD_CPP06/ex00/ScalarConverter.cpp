#include"ScalarConverter.hpp"
#include<sstream>
#include<iomanip>

int getCharPosition(std::string value, char c) {
    std::size_t found = value.find(c);
    if(found != std::string::npos)
        return(found);
    return(-1);
}

int countChar(std::string str, char c) {
    int i;
    int count = 0;
    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == c)
            count++;
        i++;
    }
    return(count);
}

bool isInt(std::string value) {
    std::size_t found  = value.find_first_not_of("+-0123456789");
    if(found != std::string::npos)
        return(false);
    if(getCharPosition(value,'+') != -1 || getCharPosition(value,'-') != -1)
    {    
        if(countChar(value,'+') + countChar(value,'-') > 1)
            return(false);
        if(value.at(0) != '-' && value.at(0) != '+' && std::isdigit(value.at(0)) == 0)
            return(false);
    }
    return(true);
}


bool isFloat(std::string value) {
    std::size_t found = value.find_first_not_of("+-0987654321f.");
    if(found != std::string::npos)
        return(false);
    if(countChar(value,'+') + countChar(value,'-') > 1)
        return(false);
    if(countChar(value,'+') + countChar(value,'-') == 1)
    {
        if(getCharPosition(value,'-') + getCharPosition(value,'+') != -1)
            return(false);
    }
    if(countChar(value,'.') == 1 
        && countChar(value,'f') == 1 && value.at(value.length() - 1) == 'f' 
        && std::isdigit(value.at(value.length() - 2)) != 0 
        && getCharPosition(value,'.') != 0 
        && getCharPosition(value,'.') != value.length() - 1)
            return(true);
    return(false);

}

bool isChar(std::string value) {
    if(value.length() == 1)
        return(true);
    return(false);
}

bool isDouble(std::string value) {
    std::size_t found = value.find_first_not_of("+-0987654321.");
    if(found != std::string::npos)
        return(false);
    if(countChar(value,'+') + countChar(value,'-') > 1)
        return(false);
    if(countChar(value,'+') + countChar(value,'-') == 1)
    {
        if(getCharPosition(value,'-') + getCharPosition(value,'+') != -1)
            return(false);
    }
    if(countChar(value,'.') == 1  
        && getCharPosition(value,'.') != 0 
        && getCharPosition(value,'.') != value.length() - 1)
            return(true);
    return(false);

}


std::string whatType(std::string value) {

    if(isInt(value) == true)
        return("Int");
    if(isFloat(value) == true)
        return("Float");
    if(isDouble(value) == true)
        return("Double");
    if(isChar(value) == true)
        return("char");
    return("nothing");
}

int toInt(std::string value) {
    std::istringstream stream(value);
    int a;

    stream >> a;
    if(!stream.fail())
    {
        stream.clear();
        return(a);
    }
    else
    {
        stream.clear();
        throw std::bad_alloc();
    }
}

float toFloat(std::string value) {

    std::istringstream stream(value.substr(0,value.length() - 1));
    float a;
    stream >> a;
    if(!stream.fail())
        return(a);
    else
        throw std::bad_alloc();
}


double toDouble(std::string value) {
    std::istringstream stream(value);
    double a;

    stream >> a;
    if(!stream.fail())
        return(a);
    else
        throw std::bad_alloc();
}


void charCast(char c) {
    std::cout <<"Char : " << c << std::endl;
    std::cout <<"Int : " << static_cast<int>(c) << std::endl;
    std::cout << "Float : " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
    std::cout << "Double : " << std::fixed << std::setprecision(1) <<static_cast<double>(c) << std::endl; 
}

void intCast(int a) {
    if(std::isprint(a) == 0)
        std::cout << "Char : " << "Non displayable" << std::endl;
    else
        std::cout << "Char : " << static_cast<char>(a) << std::endl;
    std::cout << "Int : " << a << std::endl;
    std::cout << "Float : " << std::fixed << std::setprecision(1) << static_cast<float>(a) << "f" << std::endl;
    std::cout << "Double : " << std::fixed << std::setprecision(1) << static_cast<double>(a) << std::endl; 
}

void floatCast(float value) {
    if(std::isprint(value) == 0)
        std::cout << "Char : " << "Non displayable" << std::endl;
    else
        std::cout << "Char : " << static_cast<char>(value) << std::endl;
    std::cout << "Int : " << static_cast<int>(value) << std::endl;
    std::cout << "Float : " << value << "f" << std::endl;
    std::cout << "Double : " << std::fixed << std::setprecision(1) << static_cast<double>(value) << std::endl;
}

void doubleCast(double value) {
    if(std::isprint(value) == 0)
        std::cout << "Char : " << "Non displayable" << std::endl;
    else
        std::cout << "Char : " << static_cast<char>(value) << std::endl;
    std::cout << "Int : " << static_cast<int>(value) << std::endl;
    std::cout << "Float : "  << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
    std::cout << "Double : "  << value << std::endl;
}

void ScalarConverter::convert(std::string value) {
    int a;
    float b;
    double c;
    char d;
    std::string type = whatType(value);

    try {
        if(type == "Int")
        {
            a = toInt(value);
            intCast(a);
            return;
        }
        else if(type == "Float")
        {
            b = toFloat(value);
            floatCast(b);
            return;
        }
        else if(type == "Double")
        {
            c = toDouble(value);
            doubleCast(c);
        }
        else if(type == "Char")
        {

        }
    }
    catch(const std::bad_alloc& ex) {
        std::cout << "faila akhoya" << std::endl;
    }
}
