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
    int i = 0;
    int count = 0;
    while(i < str.length()) {
        if(str[i] == c)
            count ++;
        i++;
    }
    return(count);
}



bool isInt(std::string value) {
    std::size_t found = value.find_first_not_of("+-0123456789");
    if(found != std::string::npos)
        return(false);
    if(value.find('+') != std::string::npos || value.find('-') != std::string::npos) {
        if(countChar(value,'+') + countChar(value, '-') > 1)
            return(false);
        if(value.at(0) != '-' && value.at(0) != '+' && std::isdigit(value.at(0)) != 0)
            return(false);
    }
    return(true);
}

// bool isFloat(std::string value) {
//     std::size_t found = value.find_first_not_of("+-0987654321f.");
//     if(found != std::string::npos)
//         return(false);
//     if(countChar(value,'+') + countChar(value,'-') > 1)
//         return(false);
//     if(countChar(value,'+') + countChar(value,'-') == 1)
//     {
//         if(getCharPosition(value,'-') + getCharPosition(value,'+') != -1)
//             return(false);        
//         if(std::isdigit(value.at(1)) == 0)
//             return(false);
//     }
//     if(countChar(value,'.') == 1 
//         && countChar(value,'f') == 1 && value.at(value.length() - 1) == 'f' 
//         && std::isdigit(value.at(value.length() - 2)) != 0 
//         && getCharPosition(value,'.') != 0 
//         && getCharPosition(value,'.') != value.length() - 1)
//             return(true);
//     return(false);

// }

bool isFloat(std::string value) {
    std::size_t found = value.find_first_not_of("+-0987654321f.");
    if(found != std::string::npos) return false;
    if(countChar(value,'+') + countChar(value,'-') > 1) return false;
    if(countChar(value,'f') != 1 || countChar(value,'.') != 1 ) return false;
    if(value.at(value.length() - 1) != 'f') return false;
    if(countChar(value,'+') + countChar(value,'-') == 1) {
        if(getCharPosition(value,'-') + getCharPosition(value,'+') != -1) return(false);
        if(std::isdigit(value.at(1)) == 0) return(false);
    }
    if(std::isdigit(getCharPosition(value,'.') - 1) == 0 || std::isdigit(getCharPosition(value,'.') + 1) == 0) return(false)
    return(true);
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
        if(std::isdigit(value.at(1)) == 0)
            return(false);
    }
    if(countChar(value,'.') == 1  
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

char isPseudo(std::string value) {
    if(value == "-inff" || value == "+inff" || value == "nanf" || value == "nan" || value == "-inf" || value == "+inf")
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
        return("Char");
    if(isPseudo(value) == true)
        return("pseudo");
    return("impo");
}

bool convertToInt(std::string value) {
    std::istringstream stream(value);
    int a;

    stream >> a;
    if(!stream.fail()) {
        if(std::isprint(a) == 0)
            std::cout << "Char : " << "Non displayable" << std::endl;
        else
            std::cout << "Char : " << static_cast<char>(a) << std::endl;
        std::cout << "Int : " << a << std::endl;
        std::cout << "Float : " << std::fixed << std::setprecision(1) << static_cast<float>(a) << "f" << std::endl;
        std::cout << "Double : " << std::fixed << std::setprecision(1) << static_cast<double>(a) << std::endl;
        return(true);
    }
    else {
        stream.clear();
        std::cout << "**Convertion Failed**" << std::endl;
        return(false);
    }
}

bool convertToFloat(std::string value) {
    std::istringstream stream(value.substr(0,value.length() - 1));
    float a;
    stream >> a;
    if(!stream.fail()) {
        if(std::isprint(a) == 0)
            std::cout << "Char : " << "Non displayable" << std::endl;
        else
            std::cout << "Char : " << static_cast<char>(a) << std::endl;
        std::cout << "Int : " << static_cast<int>(a) << std::endl;
        std::cout << "Float : " << std::fixed << std::setprecision(1) << a << "f" << std::endl;
        std::cout << "Double : " << std::fixed << std::setprecision(1) << static_cast<double>(a) << std::endl;
        return(true);
    }
    else {
        stream.clear();
        std::cout << "**Convertion Failed**" << std::endl;
        return(false);
    }
}

bool convertToDouble(std::string value) {
    std::istringstream stream(value);
    double a;

    stream >> a;
    if(!stream.fail()) {
        if(std::isprint(a) == 0)
            std::cout << "Char : " << "Non displayable" << std::endl;
        else
            std::cout << "Char : " << static_cast<char>(a) << std::endl;
        std::cout << "Int : " << static_cast<int>(a) << std::endl;
        std::cout << "Float : "  << std::fixed << std::setprecision(1) << static_cast<float>(a) << "f" << std::endl;
        std::cout << "Double : "  << a << std::endl;  
        return(true);
    }
    else {
        stream.clear();
        std::cout << "**Convertion Failed**" << std::endl;
        return(false);
    }
}

bool convertToChar(std::string value) {
    std::istringstream stream(value);
    char a;

    std::cout << "nani" << std::endl;
    stream >> a;
    if(!stream.fail()) {
        std::cout <<"Char : " << a << std::endl;
        std::cout <<"Int : " << static_cast<int>(a) << std::endl;
        std::cout << "Float : " << std::fixed << std::setprecision(1) << static_cast<float>(a) << "f" << std::endl;
        std::cout << "Double : " << std::fixed << std::setprecision(1) << static_cast<double>(a) << std::endl; 
        return(true);
    }
    else {
        stream.clear();
        std::cout << "**Convertion Failed**" << std::endl;
        return(false);
    }
}

void convertToPseudo(std::string value) {
    if(value == "-inff" || value == "+inff") {
        std::cout << "char : " << "impossible" << std::endl;
        std::cout << "int : " << value.substr(0,4) << std::endl;
        std::cout << "Float : " << value << std::endl;
        std::cout << "Double : " << value.substr(0,4) << std::endl;
    }
    else if(value == "-inf" || value == "+inf"){
        std::cout << "char : " << "impossible" << std::endl;
        std::cout << "int : " << value << std::endl;
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

void caster(std::string type, std::string value) {
    bool result;

    if(type == "Int")
        result = convertToInt(value);
    else if(type == "Float")
        convertToFloat(value);
    else if(type == "Double")
        convertToDouble(value);
    else if(type == "Char") 
        convertToChar(value);
    else if(type == "pseudo")
        convertToPseudo(value);
    else {
        std::cout <<"Char : " << " Impossible" << std::endl;
        std::cout <<"Int : " << " Impossible" << std::endl;
        std::cout << "Float : " << " Impossible" << std::endl;
        std::cout << "Double : " << " Impossible" << std::endl;
    }

} 

void ScalarConverter::convert(std::string value) {

    std::string type = whatType(value);
    std::cout << type << std::endl;
    caster(type,value);
}