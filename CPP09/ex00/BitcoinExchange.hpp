#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include<iostream>
#include<map>
#include <fstream>
#include<sstream>


class BitcoinExchange {
    public:
        BitcoinExchange();
        BitcoinExchange(std::string &input);
        BitcoinExchange(const BitcoinExchange& other);
        BitcoinExchange& operator=(const BitcoinExchange& other);
        
        ~BitcoinExchange();
        void evaluate();
        void check_input(std::string &line);
    private:
        std::string datee;
        float valuee;
        std::string input;
        std::map<std::string , float> data;
};




#endif