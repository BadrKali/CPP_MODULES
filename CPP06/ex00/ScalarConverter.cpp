#include"ScalarConverter.hpp"


ScalarConverter::ScalarConverter() {
    
}


int countChar(std::string value, char c) {
    int count = 0;

    for(size_t i = 0; i < value.length(); i++) {
        if(value[i] == c)   
            count++;
    }
    return(count);
}


bool isInt(const std::string value) {
    std::size_t found = value.find_first_not_of("+-0123456789");
    if(found != std::string::npos) return false;
    if(value.find('+') != std::string::npos || value.find('-') != std::string::npos) {
        if(countChar(value,'+') + countChar(value,'-') == 1) {
            if((value.at(0) == '+' || value.at(0) == '-') && value.length() > 1) 
                return true;
        }
        return false;
    }
    return true;
}

bool isFloat(const std::string value) {
    std::size_t found = value.find_first_not_of("+-0987654321f.");
    if(found != std::string::npos || value.length() == 1)
        return false;
    if(value.find('f') != std::string::npos && value.at(value.length() - 1) != '.' && countChar(value,'.') == 1 && countChar(value,'f') == 1 && value.at(value.length() - 1) == 'f') {
        if(value.find('+') != std::string::npos || value.find('-') != std::string::npos) {
            if(countChar(value,'+') + countChar(value,'-') == 1) {
                if((value.at(0) != '+' && value.at(0) != '-'))
                    return false;
            }   
        }
    }
    else
        return false;
    return true;
}

bool isDouble(const std::string value) {
    std::size_t found = value.find_first_not_of("+-0987654321.");
    if(found != std::string::npos)
        return false;
    if(value.find('+') != std::string::npos || value.find('-') != std::string::npos) {
        if(countChar(value,'+') + countChar(value,'-') == 1) {
            if((value.at(0) == '+' || value.at(0) == '-') && value.at(value.length() - 1) != '.' && countChar(value,'.') == 1)
                return true;
        }   
        return false;
    }
    if(countChar(value,'.') > 1 ||  value.at(value.length() - 1) == '.')
        return false;
    return true;
}


bool isChar(std::string value) {
    if(value.length() == 1)
        return(true);
    return(false);
}

char isPseudo(std::string value) {
    if(value == "-inff" || value == "+inff" || value == "nanf" || value == "nan" || value == "-inf" || value == "+inf")
        return(true);
    return(false);
}

std::string whatType(const std::string value) {
    if(isInt(value) == true) return "Int";
    if(isFloat(value) == true) return "Float";
    if(isDouble(value) == true) return "Double";
    if(isChar(value) == true) return "Char";
    if(isPseudo(value) == true) return "Pseudo";
    else return "impo";
}




int toInt(std::string value) {
    std::istringstream stream(value);
    int a;

    stream >> a;
    if(!stream.fail()) return a;
    else {
        throw std::invalid_argument("Invalid Arg : " + value);
    }
}


float toFloat(const std::string value) {
    float a;
    std::istringstream stream;

    stream.str(value.substr(0,value.length() - 1));
    stream >> a;
    if(!stream.fail())
        return a;
    else {
        throw std::invalid_argument("Invalid Arg : " + value);
    }
}

char toChar(std::string value) {
    std::istringstream stream(value);
    char a;

    stream >> a;
    if(!stream.fail()) return a;
    else {
        throw std::invalid_argument("Invalid Arg : " + value);
    }
}

double toDouble(const std::string value) {
    std::istringstream stream(value);
    double a;

    stream >> a;
    if(!stream.fail())
        return(a);
    else {
        throw std::invalid_argument("Invalid Arg : " + value);
    }
}



void intCast(int a) {
    if(std::isprint(a) == 0)
        std::cout << "Char : " << "Non displayable" << std::endl;
    else
        std::cout << "Char : " << static_cast<char>(a) << std::endl;
    std::cout << "Int : " << a << std::endl;
    std::cout << "Float : "  << std::fixed << std::setprecision(1) << static_cast<float>(a) << "f" << std::endl;
    std::cout << "Double : " << static_cast<double>(a) << std::endl; 
}

void floatCast(float value) {
    if(std::isprint(value) == 0)
        std::cout << "Char : " << "Non displayable" << std::endl;
    else
        std::cout << "Char : " << static_cast<char>(value) << std::endl;
    std::cout << "Int : " << static_cast<int>(value) << std::endl;
    std::cout << "Float : "   << value << "f" << std::endl;
    std::cout << "Double : "  << static_cast<double>(value) << std::endl;
}

void doubleCast(double value) {
    if(std::isprint(value) == 0)
        std::cout << "Char : " << "Non displayable" << std::endl;
    else
        std::cout << "Char : " << static_cast<char>(value) << std::endl;
    std::cout << "Int : " << static_cast<int>(value) << std::endl;
    std::cout << "Float : "  << static_cast<float>(value) << "f" << std::endl;
    std::cout << "Double : "  << value << std::endl;
}

void charCast(char a) {
    std::cout <<"Char : " << a << std::endl;
    std::cout <<"Int : " << static_cast<int>(a) << std::endl;
    std::cout << "Float : " << std::fixed <<std::setprecision(1) << static_cast<float>(a) << "f" << std::endl;
    std::cout << "Double : " << static_cast<double>(a) << std::endl; 
}

void pseudoConverter(std::string value) {
    if(value == "-inff" || value == "+inff") {
        std::cout << "char : " << "impossible" << std::endl;
        std::cout << "int : " <<  "impossible" << std::endl;
        std::cout << "Float : " << value << std::endl;
        std::cout << "Double : " << value.substr(0,4) << std::endl;
    }
    else if(value == "-inf" || value == "+inf"){
        std::cout << "char : " << "impossible" << std::endl;
        std::cout << "int : " << "impossible" << std::endl;
        std::cout << "Float : " << value + "f" << std::endl;
        std::cout << "Double : " << value << std::endl;
    }
    else if(value == "nan" || value == "nanf") {
        std::cout << "char : " << "impossible" << std::endl;
        std::cout << "int : " << "impossible" << std::endl;
        std::cout << "Float : " << value + "f" << std::endl;
        std::cout << "Double : " << value << std::endl;
    }
}

void ScalarConverter::convert(const std::string value) {
    int a;
    float b;
    double c;
    char d;

    std::string type = whatType(value);
    std::cout << type << std::endl;
    try {
        if(type == "Int") {
            a = toInt(value);
            intCast(a);
        }
        else if(type == "Float") {
            b = toFloat(value);
            floatCast(b); 
        }
        else if(type == "Double") {
            c = toDouble(value);
            doubleCast(c);
        }
        else if(type == "Char") {
            d = toChar(value);
            charCast(d);
        }
        else if(type == "Pseudo") 
            pseudoConverter(value);
        else {
            std::cout <<"Char : " << " Impossible" << std::endl;
            std::cout <<"Int : " << " Impossible" << std::endl;
            std::cout << "Float : " << " Impossible" << std::endl;
            std::cout << "Double : " << " Impossible" << std::endl;
        }
    }
    catch(const std::invalid_argument& ex) {
        std::cout << ex.what() << std::endl;
    }
}
