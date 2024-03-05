#ifndef SPAN_HPP
#define SPAN_HPP

#include<iostream>
#include<vector>
#include<algorithm>



class Span {
    public: 
        Span(unsigned int n);
        ~Span();
        Span(const Span& other);
        Span& operator=(const Span& other);

        void addNumber(int value);

        template<typename T>
        void addRange(T begin, T end) {
            while(begin != end) {
                this->addNumber(*begin);
                begin++;
            }
        }
        unsigned int shortestSpan();
        unsigned int longestSpan();

    private:
        Span();
        std::vector<int> elements;
        unsigned int n;

};




#endif