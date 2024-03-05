#include"BitcoinExchange.hpp"
#include<map>

float converteToFloat(std::string &value) {
    std::istringstream s(value);
    float a;
    s >> a;
    if(s.fail()) throw(std::runtime_error("Error: bad input => " + value));
    return(a);
}

long long converteToInt(std::string &value) {
    std::istringstream s(value);
    long long a;
    s >> a;
    return(a);
}

int charCount(const std::string &str, char c) {
    int count = 0;

    for(size_t i = 0; i < str.length(); i++) {
        if(str[i] == c)
            count++;
    }
    return(count);
}

std::string trim(std::string str) {
    std::string::iterator it_begin = str.begin();
    std::string::iterator it_end = str.end() - 1;
    while(*it_begin == ' ') it_begin++;
    if(it_begin == str.end()) throw(std::invalid_argument("argument spaces only"));
    while(*it_end == ' ')  it_end--;
    std::string result(it_begin, it_end + 1);
    return result;
}

bool is_a_valid_date(const std::string &date) {
    if(charCount(date, '-') != 2)
        return false;
    
    bool year = false;
    bool month = false;
    bool day = false;

    std::istringstream stream(date);
    std::string token;

    while(std::getline(stream,token,'-')) {
        size_t digits = token.find_first_not_of("0123456789");
        if(digits != std::string::npos) return false;
        if(year == false) {
            int yearValue = converteToFloat(token);
            if(yearValue <= 2022 && yearValue >= 2009 && token.length() == 4) year = true;
            else return false;
        }
        else if(month == false) {
            int monthValue = converteToFloat(token);
            if(monthValue <= 12 && monthValue > 0) month = true;
            else return false;
        }
        else {
            int dayValue = converteToFloat(token);
            if(dayValue > 0 && dayValue <= 31) day = true;
            else return false;
        }
    }
    return(true);
}

BitcoinExchange::BitcoinExchange() {}


BitcoinExchange::~BitcoinExchange() {}



BitcoinExchange::BitcoinExchange(std::string &input) {
    std::ifstream data_base("./data.csv");
    std::string line;

    size_t dot = input.find('.');
    if(dot == std::string::npos || input.substr(dot) != ".csv")
        throw(std::invalid_argument("File Type Not Supprted"));
    this->input = input;
    if(!data_base.is_open()) throw(std::invalid_argument("Error Opening the DB"));
    std::getline(data_base, line);
    while(std::getline(data_base, line)) {
        size_t comaPosition = line.find(',');
        if(comaPosition == std::string::npos) throw(std::invalid_argument("DB format ERROR"));
        std::string date = line.substr(0, comaPosition);
        std::string value = line.substr(comaPosition + 1);
        this->data[date] = converteToFloat(value);
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {
    (*this) = other;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
    this->datee = other.datee;
    this->valuee = other.valuee;
    this->input = other.input;
    this->data = other.data;

    return(*this);

}

void printOutput(std::string& date, std::string& value, std::string& rate,std::string& msg_error, bool fail) {
    if(fail != false)
        std::cout << date << " => " << value << " " << converteToFloat(value) * converteToFloat(rate) << std::endl;
    else
        std::cout << msg_error << std::endl;
}

void BitcoinExchange::check_input(std::string &line) {
    if(charCount(line, '|') != 1)
        throw(std::invalid_argument("Error: bad input => " + line));
    std::string date = line.substr(0, line.find('|'));
    this->datee = trim(date);
    if(is_a_valid_date(this->datee) != true)
        throw(std::invalid_argument("Error: bad input => " + date));
    std::string value = line.substr(line.find('|') + 1);
    value = trim(value);
    if(value.find_first_not_of("-0123456789.") != std::string::npos || charCount(value,'.') > 1)  throw(std::invalid_argument("Error: not a valid number. => " + value));
    float fValue = converteToFloat(value);
    this->valuee = fValue;  
    if(fValue > 1000)
        throw(std::invalid_argument("Error: too large a number. => " + value));
    if(fValue < 0)
        throw(std::invalid_argument("Error: not a positive number. => " + value));
}

void BitcoinExchange::evaluate() {
    std::ifstream input(this->input);
    if(!input.is_open()) throw (std::invalid_argument("Error: could not open file."));
    std::string line;
    std::getline(input, line);
    if(trim(line) != "date | value") throw(std::invalid_argument("Input Header Error"));
    while (std::getline(input, line)) {
        try {
            check_input(line);
            std::map<std::string, float>::iterator it = this->data.find(this->datee);
            if (it != this->data.end()) {
                std::cout << this->datee << " => " << this->valuee << " = " << this->valuee * it->second << std::endl;
            } 
            else {
                std::map<std::string, float>::iterator lower = this->data.upper_bound(this->datee);
                if(lower == this->data.begin()) {
                   std::cout << "No date found for " << this->datee << std::endl;
                }
                else if (lower != this->data.end()) {
                    lower--;
                    std::cout << this->datee << " => " << this->valuee << " = " << this->valuee * lower->second << std::endl;
                } 
                else {
                    lower--;
                    std::cout << this->datee << " => " << this->valuee << " = " << this->valuee * lower->second << std::endl;
                }
            }
        }
        catch (std::exception &ex) {
            std::cout << ex.what() << std::endl;
        }
    }

}
